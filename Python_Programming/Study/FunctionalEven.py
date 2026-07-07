CheckEvenOdd = lambda No : (No % 2 == 0)     # lambda function : calle : functional  
    

def main():     #caller : procedural
    Value = int(input("Enter Number :"))
    
    Ret = CheckEvenOdd(Value)     # Ret = (Value % 2 == 0)
        
    if(Ret ==True):
        print("Number is Even")
    else:
        print("Number is Odd")
        
if __name__ == "__main__":
    main()