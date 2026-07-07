import Marvellous1  as MI                   # Alias used for module
def main():
    print("Enter first number")
    Value1 = int(input())
    
    print("Enter Second Number:")
    Value2 = int(input())
    
    Ret = MI.Addition(Value1,Value2)   
    print("Addition is: ",Ret)    
    
    
if __name__ == "__main__":
    main()
    