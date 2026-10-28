
# Customer Churn Prediction Dashboard
# Machine Learning Project using Streamlit
# Author: Shital Ajit Nikam

import streamlit as st
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import joblib

from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, confusion_matrix

# -------------------------------
# Page Configuration
# -------------------------------

st.set_page_config(
    page_title="Customer Churn Dashboard",
    page_icon="📊",
    layout="wide"
)

st.title("📊 Customer Churn Prediction Dashboard")
st.write("Analyze customer data and predict whether a customer may leave.")

# -------------------------------
# Load Dataset
# -------------------------------

try:
    df = pd.read_csv("customer_churn.csv")

    st.subheader("1. Customer Dataset")
    st.dataframe(df, use_container_width=True)

    st.write("Dataset Shape:", df.shape)

    # Required columns
    features = [
        "Age",
        "Tenure",
        "MonthlyCharges",
        "SupportCalls"
    ]
    target = "Churn"

    missing_columns = [
        col for col in features + [target]
        if col not in df.columns
    ]

    if missing_columns:
        st.error(f"Missing columns: {missing_columns}")
        st.stop()

    # Remove rows with missing required values
    data = df[features + [target]].dropna()

    if data.empty:
        st.error("The dataset has no complete rows for training.")
        st.stop()

    X = data[features]
    Y = data[target]

    # Check target classes
    if Y.nunique() < 2:
        st.error(
            "Churn must contain at least two classes "
            "to train a classification model."
        )
        st.stop()

    # -------------------------------
    # Split Dataset
    # -------------------------------

    # Stratification is possible when every class has enough samples for both training and testing.
    class_counts = Y.value_counts()
    test_count = max(1, int(len(Y) * 0.2))
    train_count = len(Y) - test_count

    can_stratify = (
        class_counts.min() >= 2
        and test_count >= Y.nunique()
        and train_count >= Y.nunique()
    )

    X_train, X_test, Y_train, Y_test = train_test_split(
        X,
        Y,
        test_size=0.2,
        random_state=42,
        stratify=Y if can_stratify else None
    )

    # -------------------------------
    # Train Model
    # -------------------------------

    model = LogisticRegression(max_iter=1000)
    model.fit(X_train, Y_train)

    Y_pred = model.predict(X_test)

    accuracy = accuracy_score(Y_test, Y_pred)

    # Save trained model
    joblib.dump(model, "Marvellous_ML_Customer_Churn.pkl")

    # -------------------------------
    # Dashboard Metrics
    # -------------------------------

    st.subheader("2. Model Performance")

    col1, col2, col3 = st.columns(3)

    with col1:
        st.metric("Model Accuracy", f"{accuracy:.2%}")

    with col2:
        st.metric("Training Records", len(X_train))

    with col3:
        st.metric("Testing Records", len(X_test))

    # -------------------------------
    # Confusion Matrix
    # -------------------------------

    st.subheader("3. Confusion Matrix")

    labels = list(model.classes_)

    cm = confusion_matrix(
        Y_test,
        Y_pred,
        labels=labels
    )

    fig, ax = plt.subplots(figsize=(5, 4))

    sns.heatmap(
        cm,
        annot=True,
        fmt="d",
        cmap="Blues",
        xticklabels=labels,
        yticklabels=labels,
        ax=ax
    )

    ax.set_xlabel("Predicted Churn")
    ax.set_ylabel("Actual Churn")
    ax.set_title("Actual vs Predicted")

    st.pyplot(fig)
    plt.close(fig)

    st.caption(
        "Rows represent actual classes; columns represent "
        "predicted classes."
    )

    # -------------------------------
    # Actual vs Predicted Results
    # -------------------------------

    st.subheader("4. Prediction Results")

    results = X_test.copy()
    results["Actual Churn"] = Y_test
    results["Predicted Churn"] = Y_pred
    results["Correct Prediction"] = (
        results["Actual Churn"] == results["Predicted Churn"]
    )

    st.dataframe(results, use_container_width=True)

    # -------------------------------
    # Predict for a New Customer
    # -------------------------------

    st.subheader("5. Predict Churn for a New Customer")

    with st.form("customer_prediction_form"):
        col1, col2 = st.columns(2)

        with col1:
            age = st.number_input(
                "Age",
                min_value=18,
                max_value=120,
                value=30
            )

            tenure = st.number_input(
                "Tenure (months)",
                min_value=0,
                max_value=600,
                value=12
            )

        with col2:
            monthly_charges = st.number_input(
                "Monthly Charges",
                min_value=0.0,
                value=50.0,
                step=5.0
            )

            support_calls = st.number_input(
                "Support Calls",
                min_value=0,
                max_value=100,
                value=2
            )

        submitted = st.form_submit_button("Predict Churn")

    if submitted:
        new_customer = pd.DataFrame(
            [[age, tenure, monthly_charges, support_calls]],
            columns=features
        )

        prediction = model.predict(new_customer)[0]
        probabilities = model.predict_proba(new_customer)[0]

        st.write("Predicted Churn Class:", prediction)

        predicted_index = list(model.classes_).index(prediction)
        st.metric(
            "Model Probability for Predicted Class",
            f"{probabilities[predicted_index]:.2%}"
        )

        if str(prediction).strip().lower() in ["1", "yes", "true", "churn"]:
            st.warning("The model predicts that this customer may churn.")     # 1
        else:
            st.success("The model predicts that this customer may stay.")      # 0

except FileNotFoundError:
    st.error(
        "customer_churn.csv was not found. "
        "Place it in the same folder as this Python file."
    )

except Exception as e:
    st.error(f"An error occurred: {e}")
