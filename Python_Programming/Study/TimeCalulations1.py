#factorial : 6 : 1*2*3*4*5*6

def Factorial(No):
    Fact = 1
    
    for i in range(1,No+1):
        Fact = Fact * i
    return Fact
    

def main():
    value = int(input("Enter number "))
    Ret = Factorial(value)
    
    print("Factorial is: ",Ret)
    
if __name__ == "__main__":
    main()