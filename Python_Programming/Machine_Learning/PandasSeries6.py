#pannel : collection of DF , multiple series = dataframe, multiple pannels = 
# custom list of Indices , uniqueness required


import pandas as pd


def main():
    
    sobj = pd.Series([11,21,51,101],index = ["C","C++","Java","Python"])     
    # like list but we can tell custom index to series. 
    
    print(sobj)
    print(sobj["Python"])
    
    
if __name__ == "__main__":
    main()
    