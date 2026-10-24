# Breast Cancer Classification Dashboard
# Machine Learning Case Study using Streamlit
# Author: Shital Ajit Nikam

import streamlit as st
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from pathlib import Path

from sklearn.model_selection import train_test_split
from sklearn.pipeline import Pipeline
from sklearn.impute import SimpleImputer
from sklearn.preprocessing import StandardScaler
from sklearn.linear_model import LogisticRegression

from sklearn.metrics import (
    accuracy_score,
    precision_score,
    recall_score,
    f1_score,
    confusion_matrix,
    classification_report,
    roc_curve,
    roc_auc_score
)

# --------------------------------------------------
# 1. PAGE CONFIGURATION
# --------------------------------------------------

st.set_page_config(
    page_title="Breast Cancer Analytics",
    page_icon="🧬",
    layout="wide"
)

# --------------------------------------------------
# 2. CUSTOM STYLING
# --------------------------------------------------

st.markdown("""
<style>
.stApp {
    background-color: #F5F8FC;
}

[data-testid="stSidebar"] {
    background-color: #E8F0F8;
}

h1, h2, h3 {
    color: #16324F;
}

[data-testid="stMetric"] {
    background-color: white;
    border: 1px solid #DCE5EF;
    padding: 15px;
    border-radius: 12px;
}

.stButton button, .stFormSubmitButton button {
    background-color: #176B87;
    color: white;
    border-radius: 8px;
}
</style>
""", unsafe_allow_html=True)

# --------------------------------------------------
# 3. LOAD AND PREPARE DATA
# --------------------------------------------------

@st.cache_data
def load_data():
    #data = pd.read_csv("breast-cancer-wisconsin.csv")
    
    DATA_FILE = (
    Path(__file__).resolve().parent
    / "breast-cancer-wisconsin.csv"
    )

    data = pd.read_csv(DATA_FILE)

    # Convert unknown values to NaN
    data["BareNuclei"] = pd.to_numeric(
        data["BareNuclei"],
        errors="coerce"
    )

    return data


@st.cache_resource
def train_model(data):
    features = [
        "ClumpThickness",
        "UniformityCellSize",
        "UniformityCellShape",
        "MarginalAdhesion",
        "SingleEpithelialCellSize",
        "BareNuclei",
        "BlandChromatin",
        "NormalNucleoli",
        "Mitoses"
    ]

    X = data[features]
    y = data["CancerType"].astype(int)

    X_train, X_test, y_train, y_test = train_test_split(
        X,
        y,
        test_size=0.20,
        random_state=42,
        stratify=y
    )

    model = Pipeline([
        ("imputer", SimpleImputer(strategy="median")),
        ("scaler", StandardScaler()),
        ("classifier", LogisticRegression(max_iter=2000))
    ])

    model.fit(X_train, y_train)

    predictions = model.predict(X_test)

    return (
        model, features, X_train, X_test,
        y_train, y_test, predictions
    )


try:
    df = load_data()

    required_columns = [
        "CodeNumber",
        "ClumpThickness",
        "UniformityCellSize",
        "UniformityCellShape",
        "MarginalAdhesion",
        "SingleEpithelialCellSize",
        "BareNuclei",
        "BlandChromatin",
        "NormalNucleoli",
        "Mitoses",
        "CancerType"
    ]

    if not set(required_columns).issubset(df.columns):
        st.error("The CSV does not contain all required columns.")
        st.stop()

# Convert the ? values in BareNuclei into missing values and impute them during model training.
    df = df.dropna(subset=["CancerType"]).copy()
    df["CancerType"] = pd.to_numeric(
        df["CancerType"], errors="coerce"
    )
    df = df.dropna(subset=["CancerType"]).copy()
    df["CancerType"] = df["CancerType"].astype(int)

    df = df[df["CancerType"].isin([2, 4])].copy()

    if df.empty or df["CancerType"].nunique() != 2:
        st.error("The dataset must contain both target classes: 2 and 4.")
        st.stop()

    features = [
        "ClumpThickness",
        "UniformityCellSize",
        "UniformityCellShape",
        "MarginalAdhesion",
        "SingleEpithelialCellSize",
        "BareNuclei",
        "BlandChromatin",
        "NormalNucleoli",
        "Mitoses"
    ]

    model, features, X_train, X_test, y_train, y_test, y_pred = (
        train_model(df)
    )

    # --------------------------------------------------
    # 4. SIDEBAR NAVIGATION
    # --------------------------------------------------

    st.sidebar.title("🧬 Cancer Analytics")
    st.sidebar.write("Machine Learning Case Study")

    page = st.sidebar.radio(
        "Navigate Dashboard",
        [
            "Overview",
            "Data Exploration",
            "Model Evaluation",
            "Prediction Demo"
        ]
    )

    st.sidebar.divider()
    st.sidebar.caption("Educational use only — not a diagnostic tool.")

    # --------------------------------------------------
    # 5. OVERVIEW
    # --------------------------------------------------

    if page == "Overview":

        st.title("🧬 Breast Cancer Analytics Dashboard")
        st.write(
            "Explore the Wisconsin breast cancer dataset "
            "and evaluate a classification model."
        )

        total_records = len(df)
        benign_count = int((df["CancerType"] == 2).sum())
        malignant_count = int((df["CancerType"] == 4).sum())
        missing_values = int(df[features].isna().sum().sum())

        accuracy = accuracy_score(y_test, y_pred)

        c1, c2, c3, c4 = st.columns(4)

        c1.metric("Total Records", total_records)
        c2.metric("Benign Cases", benign_count)
        c3.metric("Malignant Cases", malignant_count)
        c4.metric("Test Accuracy", f"{accuracy:.1%}")

        st.subheader("Dataset Preview")
        st.dataframe(df.head(10), use_container_width=True)

        st.subheader("Target Class Distribution")

        class_counts = df["CancerType"].map({
            2: "Benign",
            4: "Malignant"
        }).value_counts()

        fig, ax = plt.subplots(figsize=(7, 4))
        class_counts.reindex(["Benign", "Malignant"]).plot(
            kind="bar", ax=ax
        )
        ax.set_title("Benign vs Malignant Records")
        ax.set_xlabel("Cancer Type")
        ax.set_ylabel("Number of Records")
        ax.tick_params(axis="x", rotation=0)
        st.pyplot(fig)
        plt.close(fig)

        st.info(
            f"Unknown measurement values detected in the input features: "
            f"{missing_values}. Missing values are imputed inside the "
            "model pipeline."
        )

    # --------------------------------------------------
    # 6. DATA EXPLORATION
    # --------------------------------------------------

    elif page == "Data Exploration":

        st.title("📊 Exploratory Data Analysis")

        st.subheader("Dataset Statistics")
        st.dataframe(
            df[features].describe().round(2),
            use_container_width=True
        )

        st.subheader("Explore a Feature")

        selected_feature = st.selectbox(
            "Select measurement",
            features
        )

        fig, ax = plt.subplots(figsize=(8, 4))

        sns.histplot(
            data=df,
            x=selected_feature,
            hue=df["CancerType"].map({
                2: "Benign",
                4: "Malignant"
            }),
            multiple="stack",
            bins=10,
            ax=ax
        )

        ax.set_title(f"Distribution of {selected_feature}")
        ax.set_xlabel(selected_feature)

        st.pyplot(fig)
        plt.close(fig)

        st.subheader("Feature Correlation Heatmap")

        corr_data = df[features].copy()
        corr_data = corr_data.fillna(corr_data.median())

        fig, ax = plt.subplots(figsize=(11, 7))

        sns.heatmap(
            corr_data.corr(),
            annot=True,
            fmt=".2f",
            cmap="coolwarm",
            ax=ax
        )

        ax.set_title("Correlation Between Measurements")
        st.pyplot(fig)
        plt.close(fig)

        st.subheader("Compare Measurements by Class")

        compare_feature = st.selectbox(
            "Choose a feature to compare",
            features,
            key="compare_feature"
        )

        plot_data = df.copy()
        plot_data["Class"] = plot_data["CancerType"].map({
            2: "Benign",
            4: "Malignant"
        })

        fig, ax = plt.subplots(figsize=(7, 4))

        sns.boxplot(
            data=plot_data,
            x="Class",
            y=compare_feature,
            ax=ax
        )

        ax.set_title(f"{compare_feature} by Class")
        st.pyplot(fig)
        plt.close(fig)

    # --------------------------------------------------
    # 7. MODEL EVALUATION
    # --------------------------------------------------

    elif page == "Model Evaluation":

        st.title("🤖 Model Evaluation")

        accuracy = accuracy_score(y_test, y_pred)

        # Malignant class 4 is treated as the positive class
        precision = precision_score(
            y_test, y_pred, pos_label=4, zero_division=0
        )

        recall = recall_score(
            y_test, y_pred, pos_label=4, zero_division=0
        )

        f1 = f1_score(
            y_test, y_pred, pos_label=4, zero_division=0
        )

        m1, m2, m3, m4 = st.columns(4)

        m1.metric("Accuracy", f"{accuracy:.2%}")
        m2.metric("Precision (Malignant)", f"{precision:.2%}")
        m3.metric("Recall (Malignant)", f"{recall:.2%}")
        m4.metric("F1-Score (Malignant)", f"{f1:.2%}")

        st.caption(
            "These are holdout test-set metrics, not a guarantee of "
            "real-world clinical performance."
        )

        st.subheader("Confusion Matrix")

        cm = confusion_matrix(y_test, y_pred, labels=[2, 4])

        fig, ax = plt.subplots(figsize=(6, 4))

        sns.heatmap(
            cm,
            annot=True,
            fmt="d",
            cmap="Blues",
            xticklabels=["Benign (2)", "Malignant (4)"],
            yticklabels=["Benign (2)", "Malignant (4)"],
            ax=ax
        )

        ax.set_xlabel("Predicted Class")
        ax.set_ylabel("Actual Class")

        st.pyplot(fig)
        plt.close(fig)

        st.subheader("Classification Report")

        report = classification_report(
            y_test,
            y_pred,
            labels=[2, 4],
            target_names=["Benign", "Malignant"],
            output_dict=True,
            zero_division=0
        )

        st.dataframe(
            pd.DataFrame(report).transpose().round(3),
            use_container_width=True
        )

        st.subheader("ROC Curve")

        malignant_index = list(model.classes_).index(4)
        probabilities = model.predict_proba(X_test)[:, malignant_index]

        fpr, tpr, thresholds = roc_curve(
            y_test,
            probabilities,
            pos_label=4
        )

        auc_score = roc_auc_score(
            (y_test == 4).astype(int),
            probabilities
        )

        fig, ax = plt.subplots(figsize=(7, 4))

        ax.plot(
            fpr, tpr,
            label=f"Logistic Regression (AUC = {auc_score:.3f})"
        )

        ax.plot([0, 1], [0, 1], linestyle="--")
        ax.set_xlabel("False Positive Rate")
        ax.set_ylabel("True Positive Rate")
        ax.set_title("ROC Curve")
        ax.legend()

        st.pyplot(fig)
        plt.close(fig)

    # --------------------------------------------------
    # 8. INTERACTIVE PREDICTION DEMO
    # --------------------------------------------------

    elif page == "Prediction Demo":

        st.title("🔎 Interactive Prediction Demo")

        st.warning(
            "Educational demonstration only. Do not use this output "
            "to diagnose, screen, or make treatment decisions."
        )

        st.write(
            "Enter the nine cell-measurement values to see how the "
            "trained model classifies an example record. Use values "
            "from 1 to 10, consistent with this dataset."
        )

        with st.form("prediction_form"):

            entered_values = {}

            col1, col2, col3 = st.columns(3)

            for i, feature in enumerate(features):

                target_col = [col1, col2, col3][i % 3]

                with target_col:
                    entered_values[feature] = st.number_input(
                        feature,
                        min_value=1,
                        max_value=10,
                        value=5,
                        step=1
                    )

            submitted = st.form_submit_button("Run Prediction")

        if submitted:

            new_record = pd.DataFrame(
                [entered_values],
                columns=features
            )

            prediction = model.predict(new_record)[0]
            probabilities = model.predict_proba(new_record)[0]

            probability_map = dict(
                zip(model.classes_, probabilities)
            )

            predicted_label = {
                2: "Benign",
                4: "Malignant"
            }[int(prediction)]

            st.subheader("Model Output")
            st.write("Predicted class:", predicted_label)

            result_col1, result_col2 = st.columns(2)

            result_col1.metric(
                "Benign Class Probability",
                f"{probability_map[2]:.2%}"
            )

            result_col2.metric(
                "Malignant Class Probability",
                f"{probability_map[4]:.2%}"
            )

            st.caption(
                "Probabilities are outputs from this trained model and "
                "are not validated medical risk estimates."
            )

            st.subheader("Input Measurements")
            st.dataframe(new_record, use_container_width=True)

    # --------------------------------------------------
    # 9. FOOTER
    # --------------------------------------------------

    st.divider()

    st.caption(
        "Breast Cancer Classification | Streamlit + Scikit-learn | "
        "Educational machine-learning case study"
    )

except FileNotFoundError:
    st.error(
        "CSV file not found. Keep breast-cancer-wisconsin.csv "
        "in the same folder as this Python script."
    )

except Exception as error:
    st.error(f"An error occurred: {error}")
