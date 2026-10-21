#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_78: Q.1: Develop a streamlit application that accept two numbers from the user using
#                                  input fields. provide Add button to calculate the & display the addition of 
#                                  the entered numbers
#                                 -CSS added to make it more attractive
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import streamlit as st

# Configure the page
st.set_page_config(
    page_title="Addition Calculator",
    page_icon="🧮",
    layout="centered"
)

# Add custom CSS
st.markdown("""
<style>
/* Application background */
.stApp {
    background-color: #EAF2F8;
}

/* Title color */
h1 {
    color: #154360;
    text-align: center;
}

/* Input field labels */
.stNumberInput label {
    color: #1A5276;
    font-weight: bold;
}

/* Input field styling */
.stNumberInput input {
    background-color: #FFFFFF;
    color: #154360;
    border: 2px solid #3498DB;
    border-radius: 8px;
}

/* Add button styling */
.stButton > button {
    background-color: #2874A6;
    color: white;
    border-radius: 10px;
    border: none;
    padding: 10px 25px;
    font-weight: bold;
    width: 100%;
}

/* Button hover effect */
.stButton > button:hover {
    background-color: #1E8449;
    color: white;
    border: 2px solid #145A32;
}
</style>
""", unsafe_allow_html=True)

# Application title
st.title("Addition of Two Numbers")

# Input fields
num1 = st.number_input("Enter first number:", value=0.0)
num2 = st.number_input("Enter second number:", value=0.0)

# Add button
if st.button("Add"):
    result = num1 + num2
    st.success(f"Addition is: {result}")
