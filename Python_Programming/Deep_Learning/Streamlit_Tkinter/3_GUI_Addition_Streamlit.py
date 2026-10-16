# make GUI for chatboat using streamlit : frontend   :

import streamlit as st

st.title("Marvellous Infosystem")

st.header("Marvellous Addition Calculator")

no1 = st.number_input("Enter first number",value=0,step=1)
no2 = st.number_input("Enter Second number",value=0,step=1)

if st.button("Addition"):
    result = no1 + no2
    
    st.success("Addition is :"+str(result))



# Run: python -m streamlit run 3_GUI_Addition_Streamlit.py