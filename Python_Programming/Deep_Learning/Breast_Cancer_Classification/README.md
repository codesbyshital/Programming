# Breast Cancer Classification Dashboard

**Machine Learning Case Study | Python | Scikit-learn | Streamlit**

## Project Overview

The Breast Cancer Classification Dashboard is an educational machine learning project that explores the Wisconsin Breast Cancer dataset and demonstrates a classification workflow through an interactive web dashboard.

The application combines exploratory data analysis (EDA), data preprocessing, Logistic Regression, and model evaluation metrics to help users understand the dataset and the machine learning process.

> **Disclaimer:** This project is for educational purposes only. It is not a medical diagnostic tool and must not be used for screening, diagnosis, treatment, or other clinical decisions.

## Objectives

- Explore the dataset and summarize its key characteristics.
- Visualize the distribution of benign and malignant records.
- Handle unknown or missing measurement values during preprocessing.
- Train a Logistic Regression classification model.
- Evaluate the model using standard classification metrics.
- Demonstrate model predictions through an interactive interface.

## Dashboard Features

### 1. Overview
- Dataset preview and record counts.
- Benign and malignant class distribution.
- Summary metrics and missing-value information.

### 2. Data Exploration
- Descriptive statistics for input features.
- Feature distribution plots.
- Correlation heatmap.
- Feature comparisons across target classes.

### 3. Model Evaluation
- Accuracy, precision, recall, and F1-score.
- Confusion matrix.
- Classification report.
- ROC curve and Area Under the Curve (AUC).

### 4. Prediction Demo
- Input fields for the nine cell-measurement features.
- Predicted class and model-estimated class probabilities.
- Display of the input values used in the demonstration.

## Dataset

The project uses `breast-cancer-wisconsin.csv`.

Expected columns:
- `CodeNumber`: record identifier; excluded from model features.
- Nine measurement features:
  - `ClumpThickness`
  - `UniformityCellSize`
  - `UniformityCellShape`
  - `MarginalAdhesion`
  - `SingleEpithelialCellSize`
  - `BareNuclei`
  - `BlandChromatin`
  - `NormalNucleoli`
  - `Mitoses`
- `CancerType`: target class, expected to use `2` for Benign and `4` for Malignant.

Unknown values such as `?` in `BareNuclei` are converted to missing values and imputed within the model pipeline. The identifier column is not used as a predictive feature.

## Technology Stack

- **Python** — programming language
- **Streamlit** — interactive web dashboard
- **Pandas and NumPy** — data handling
- **Matplotlib and Seaborn** — data visualization
- **Scikit-learn** — preprocessing, model training, and evaluation

## Project Structure

```text
Breast_Cancer_Classification/
├── breast_cancer_dashboard.py
├── breast-cancer-wisconsin.csv
├── requirements.txt
└── README.md
```

## Installation and Local Execution

### 1. Clone the repository

This project is intended to be stored inside the existing `Programming` repository:

```bash
git clone https://github.com/codesbyshital/Programming.git
cd Programming/Python_Programming/Deep_Learning/Breast_Cancer_Classification
```

### 2. (Recommended) Create a virtual environment

On Windows:

```bat
python -m venv .venv
.venv\Scripts\activate
```

### 3. Install dependencies

```bash
python -m pip install -r requirements.txt
```

Example `requirements.txt`:

```text
streamlit
pandas
numpy
matplotlib
seaborn
scikit-learn
```

### 4. Run the dashboard

```bash
python -m streamlit run breast_cancer_dashboard.py
```

Streamlit will show a local URL in the terminal, usually `http://localhost:8501`.

## Deployment

The application can be deployed using [Streamlit Community Cloud](https://share.streamlit.io/).

When deploying from the existing `Programming` repository:
- **Repository:** `codesbyshital/Programming`
- **Branch:** `main`
- **Main file path:**

```text
Python_Programming/Deep_Learning/Breast_Cancer_Classification/breast_cancer_dashboard.py
```

Ensure the CSV and `requirements.txt` are committed to the same project folder. Resolve the CSV path relative to the Python file (for example, with `Path(__file__).resolve().parent`) so the app can locate it when deployed.

**Live Demo:** (https://programming-g7ncf56p4ydt9q89xopju7.streamlit.app/)

## Model Evaluation Notes

The dashboard reports holdout test metrics from a train/test split. Results depend on the dataset, split, preprocessing, and model configuration. Accuracy alone is not sufficient to assess a medical classification model; precision, recall, confusion matrix, ROC-AUC, and independent validation are also important.

Displayed probabilities are model outputs and are not validated estimates of an individual's medical risk.

## Future Enhancements

- Compare Logistic Regression with Decision Tree, Random Forest, and Support Vector Machine models.
- Add cross-validation and more robust model validation.
- Add downloadable data and evaluation reports.
- Save and load a trained model pipeline to reduce repeated training.
- Add dashboard screenshots and improve accessibility.

## Author

**Shital Ajit Nikam**

## License and Data Use

Add an appropriate software license if you want others to reuse the code. Check the dataset's original source and license/terms before redistributing the CSV.

---

*Built as an educational machine learning and Streamlit dashboard project.*
