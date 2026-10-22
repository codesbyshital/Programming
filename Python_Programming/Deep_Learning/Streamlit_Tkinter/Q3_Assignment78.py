#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_78: Q.3: Develop a streamlit application that accept Principal amount, Rate of Interest and  
#                                  Time Period.Provide calculate button calculate & display Simple Interest.                      
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import streamlit as st

# Configure the page
st.set_page_config(
    page_title="Simple Interest Calculator",
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

st.title("Simple Interest Calculator")

# Accept Principal amount, Rate of Interest and Time Period from the user
principal = st.number_input("Enter Principal Amount:", value=0.0, step=0.01)
rate = st.number_input("Enter Rate of Interest (in %):", value=0.0, step=0.01)
time = st.number_input("Enter Time Period (in years):", value=0.0, step=0.01)

# Check button
if st.button("Calculate"):
    simple_interest = (principal * rate * time) / 100
    st.success(f"Simple Interest is: {simple_interest}")