CheckEven = lambda No : (No % 2 == 0)   #should return boolean & accept one parameter

def main():
    Data = [13,12,8,10,11,20]
    print("Input Data is :",Data)
    
    FData = list(filter(CheckEven, Data))       #Functional Prog :function as parameter: need to typecast : donot use () for function name
    
    print("Data after Filetr : ",FData)
    
if __name__ == "__main__":
    main()