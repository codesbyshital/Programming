def CheckEven(No):
    return (No % 2 == 0)

def main():
    Data = [13,12,8,10,11,20]
    print("Input Data is :",Data)
    
    FData = list(filter(CheckEven, Data))        #Functional Prog :function as parameter: need to typecast : donot use () for function name
    
    print("Data after Filetr : ",FData)
    
if __name__ == "__main__":
    main()