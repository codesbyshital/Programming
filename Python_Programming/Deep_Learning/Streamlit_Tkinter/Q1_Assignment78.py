#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_78: Q.1: Develop a streamlit application that accept two numbers from the user using
#                                  input fields. provide Add button to calculate the & display the addition of 
#                                  the entered numbers
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import streamlit as st

st.title("Addition of two numbers")

# Accept two numbers from the user
no1 = st.number_input("Enter first number:", value=0.0)
no2 = st.number_input("Enter second number:", value=0.0)

# Add button
if st.button("Add"):
    result = no1 + no2

    # Display the result
    st.success("Addition is :"+str(result))
