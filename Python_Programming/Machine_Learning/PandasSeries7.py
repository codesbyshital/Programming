#pannel : collection of DF , multiple series = dataframe,  pannels = multiple dataframes
# custom list of Indices , index can be duplicate , but need to do unique during EDA
import pandas as pd


def main():
    
    sobj = pd.Series([27000,32000,35000], index = ["Amit","Sagar","Sagar"])     
    #  Index : key & value. Index can be duplicate
    
    print(sobj)
    print(sobj["Sagar"])
    
    
if __name__ == "__main__":
    main()
    