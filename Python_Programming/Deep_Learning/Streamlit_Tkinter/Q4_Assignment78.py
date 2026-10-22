#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_78: Q.4: Develop a streamlit application that accept Student Name, marks in three subject.  
#                                  Calculate total marks, percentage & display whether the student has passed or failed. 
#                                  Consider 40 marks out of 100 as the minimum passing marks in each subject.                      
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import streamlit as st

# Configure the page
st.set_page_config(
    page_title="Student Result Calculator",
    page_icon="🎓",
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

st.title("Student Result Calculator")

# Accept Name of the student, marks in three subjects 
name = st.text_input("Enter Name of the Student :", value="")
mark1 = st.number_input("Enter mark of subject 1:", value=0.0, step=0.01)
mark2 = st.number_input("Enter mark of subject 2:", value=0.0, step=0.01)
mark3 = st.number_input("Enter mark of subject 3:", value=0.0, step=0.01)


# Calculate button
if st.button("Calculate"):
    total_marks = mark1 + mark2 + mark3
    percentage = (total_marks / 300)*100
    
    st.success(f"Total Marks : {total_marks}")
    st.success(f"Percentage : {percentage}")
    
    if mark1 >= 40 :
        st.success("Passed in subject 1 with marks :")
    else :
        st.success("Failed in subject 1 with marks :") 
    
    if mark2 >= 40 :
        st.success("Passed in subject 2 with marks :")
    else :
        st.success("Failed in subject 2 with marks :") 
    
    if mark3 >= 40 :
        st.success("Passed in subject 3 with marks :")
    else :
        st.success("Failed in subject 3 with marks :") 