import Marvellous1    # imported module, it created __pychache__

def main():
    print("Enter first number")
    Value1 = int(input())
    
    print("Enter Second Number:")
    Value2 = int(input())
    
    Ret = Marvellous1.Addition(Value1,Value2)   
    print("Addition is: ",Ret)    
    
    
if __name__ == "__main__":
    main()
    