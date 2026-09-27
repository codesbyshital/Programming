# Dataframe : multiple series , .csv file 

import pandas as pd

def main():
    Data = {
        "Name" : ["Sagar","Amit","Pooja"],
        "Age"  : [27,28,25],
        "City" : ["Pune","Kolhapur","Satara"]        
    }
    
    dobj = pd.DataFrame(Data)
    #print(dobj)
    
    #print(dobj[0])    // not allowed
    
    print(dobj[["Name","Age"]])   #access by column name
    
    
if __name__ == "__main__":
    main()
    