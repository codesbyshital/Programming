class Arithematic:
    def Addition(No1, No2):
        Ans = No1 + No2
        return Ans

    def Substraction(No1, No2):
        Ans = No1 - No2
        return Ans
    
aobj = Arithematic()                    # Object creation

print("Enter first number")
Value1 = int(input())

print("Enter second number")
Value2 = int(input())

# internally it takes as : Ret = Addition(aobj,Value1,Value2)

Ret = aobj.Addition(Value1,Value2)                      #Issue / Error
print("Addition is :",Ret)

Ret = aobj.Substraction(Value1,Value2)                  #Issue / Error
print("Substraction is :",Ret)