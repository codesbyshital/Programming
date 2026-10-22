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

# Custom CSS for GUI styling
st.markdown("""
<style>
.stApp {
    background-color: #EAF2F8;
}

h1 {
    color: #154360;
    text-align: center;
}

.stTextInput label,
.stNumberInput label {
    color: #1A5276;
    font-weight: bold;
}

.stTextInput input,
.stNumberInput input {
    background-color: white;
    color: #154360;
    border: 2px solid #3498DB;
    border-radius: 8px;
}

.stButton > button {
    background-color: #2874A6;
    color: white;
    font-weight: bold;
    border-radius: 8px;
    border: none;
    width: 100%;
    padding: 10px;
}

.stButton > button:hover {
    background-color: #1E8449;
    color: white;
}
</style>
""", unsafe_allow_html=True)

# Application title
st.title("🎓 Student Result Calculator")
st.write("Enter the student's name and marks in three subjects.")

# Student details
name = st.text_input("Enter Name of the Student:", value="")

st.subheader("Enter Subject Marks")

mark1 = st.number_input("Enter marks for Subject 1:", min_value=0.0, max_value=100.0, value=0.0,step=0.01)

mark2 = st.number_input("Enter marks for Subject 2:", min_value=0.0, max_value=100.0, value=0.0,step=0.01)

mark3 = st.number_input("Enter marks for Subject 3:", min_value=0.0, max_value=100.0, value=0.0,step=0.01)

# Calculate result
if st.button("Calculate Result"):

    if not name.strip():
        st.error("Please enter the student's name.")

    else:
        # Calculate total and percentage
        total_marks = mark1 + mark2 + mark3
        percentage = (total_marks / 300) * 100

        # Display student details
        st.subheader("Student Result")
        st.write(f"**Student Name:** {name.strip()}")

        st.metric("Total Marks", f"{total_marks:.2f} / 300")
        st.metric("Percentage", f"{percentage:.2f}%")

        # Subject-wise results
        st.subheader("Subject-wise Performance")

        subjects = [
            ("Subject 1", mark1),
            ("Subject 2", mark2),
            ("Subject 3", mark3)
        ]

        # A student must pass every subject
        all_passed = True

        for subject, marks in subjects:
            if marks >= 40:
                st.success(f"{subject}: PASS — {marks:.2f}/100")
            else:
                st.error(f"{subject}: FAIL — {marks:.2f}/100")
                all_passed = False

        # Overall result
        st.subheader("Final Result")

        if all_passed:
            st.success("Congratulations! The student has PASSED.")
        else:
            st.error("The student has FAILED.")
