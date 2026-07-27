class Arithematic:
    def Addition(self,No1, No2):                    # self keyword needed when we are defining function as argument
        Ans = No1 + No2
        return Ans

    def Substraction(self,No1, No2):
        Ans = No1 - No2
        return Ans
    
aobj = Arithematic()                    # Object creation

print("Enter first number")
Value1 = int(input())

print("Enter second number")
Value2 = int(input())

# internally it takes as : Ret = Addition(aobj,Value1,Value2)         aobj goes as self argument in function defination

Ret = aobj.Addition(Value1,Value2)                     
print("Addition is :",Ret)

Ret = aobj.Substraction(Value1,Value2)                  
print("Substraction is :",Ret)