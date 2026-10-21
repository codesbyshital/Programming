#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_78: Q.2: Develop a streamlit application that accept an integer from the user. provide 
#                                  check button to check whether the entered number is even or odd and display the result.                       the entered numbers
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import streamlit as st

# Configure the page
st.set_page_config(
    page_title="Check Even/Odd",
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


st.title("Check Even or Odd")

# Accept an integer from the user
no = st.number_input("Enter a number:", value=0, step=1)

# Check button
if st.button("Check"):
    if no % 2 == 0:
        st.success(f"{no} is an even number.")
    else:
        st.success(f"{no} is an odd number.")
