class Arithematic:
    def __init__(self,A,B):                 # parameterised constructor
        self.No1 = A
        self.No2 = B
    
    def Addition(self):                 # self keyword needed when we are defining function as argument
        Ans = self.No1 + self.No2
        return Ans

    def Substraction(self):             # if first para is self then it is Instance method
        Ans = self.No1 - self.No2
        return Ans
    

print("Enter first number")
Value1 = int(input())

print("Enter second number")
Value2 = int(input())

aobj = Arithematic(Value1,Value2)                    # Object creation


# internally it takes as : Ret = Addition(aobj,Value1,Value2)         aobj goes as self argument in function defination

Ret = aobj.Addition()                     
print("Addition is :",Ret)

Ret = aobj.Substraction()                  
print("Substraction is :",Ret)