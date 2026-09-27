#pannel : collection of DF , multiple series = dataframe, multiple pannels = 


import pandas as pd


def main():
    
    sobj = pd.Series([11.2,21,"51.2",True])      
    # heterogenious series is allowed, as each data treated as object, datatype is object, index strats with 0
    # heterogenious series is allowed, as each data treated as object, datatype is object, index strats with 0
    print(sobj)
    
    
if __name__ == "__main__":
    main()
    