def CheckEvenOdd(No):
    if(No % 2 == 0):
        print("Number is Even")
    else :
        print("Number is Odd")

def main():
    Value = int(input("Enter Number :"))
    CheckEvenOdd(Value)
        
if __name__ == "__main__":
    main()