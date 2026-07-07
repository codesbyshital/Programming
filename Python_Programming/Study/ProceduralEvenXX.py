def CheckEvenOdd(No):
    return (No % 2 == 0)       
    

def main():
    Value = int(input("Enter Number :"))
    
    Ret = CheckEvenOdd(Value)
        
    if(Ret ==True):
        print("Number is Even")
    else:
        print("Number is Odd")
        
if __name__ == "__main__":
    main()