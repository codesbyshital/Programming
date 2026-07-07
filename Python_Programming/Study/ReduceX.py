from functools import reduce

def CheckEven(No):
    return (No % 2 == 0)

def Increment(No):     # parameter to Map , it returns values
    return No + 1

def Addition(No1,No2):
    return No1 + No2

def main():
    Data = [13,12,8,10,11,20]
    print("Input Data is :",Data)
    
    FData = list(filter(CheckEven, Data))       #Functional Prog :function as parameter: need to typecast : donot use () for function name    
    print("Data after Filetr : ",FData)
    
    MData = list(map(Increment, FData))
    print("Data after Map: ",MData)
    
    RData = reduce(Addition,MData)
    print("Data after Reduce: ",RData)
    
if __name__ == "__main__":
    main()