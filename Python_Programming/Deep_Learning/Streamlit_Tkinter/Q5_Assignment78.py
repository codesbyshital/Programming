#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_78: Q.5: Develop a streamlit application that accept temperature in Celcius.  
#                                  Provide a covert button to convert the entered temperature into Fahrenheit. 
#                                  And display the result.                      
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import streamlit as st

# Configure the page
st.set_page_config(
    page_title="Temperature Converter",
    page_icon="🌡️",
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

st.title("Temperature Converter")

# Accept temperature in Celsius
celsius = st.number_input("Enter temperature in Celsius:", value=0.0, step=0.01)

# Convert button
if st.button("Convert to Fahrenheit"):
    fahrenheit = (celsius * 9/5) + 32
    st.success(f"Temperature in Fahrenheit: {fahrenheit:.2f}°F")
    
    