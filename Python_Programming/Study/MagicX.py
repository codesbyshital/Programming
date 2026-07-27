# Magic method : dunder variable    : operator overloading in python is magic method.


from abc import ABC, abstractmethod                 # abc : module , ABC : class name

class Demo :
    def __init__(self,A):
        self.No = A                     # we can add multiple variables.
        
    def __add__(self, other):
        return self.No + other.No               # obj1.No  + Obj2.No    
    
    def __sub__(self, other)   :
        return self.No - other.No 
    
    def __mul__(self, other):
        return self.No * other.No   
    
    def __truediv__(self, other):
        return self.No / other.No   
    
             
dobj1 = Demo(11) 
dobj2 = Demo(21)

print(dobj1+dobj2)        # obj1.__add__(dobj2)   -> __add__(dobj1,dobj2) 
print(dobj1-dobj2)        # obj1.__sub__(dobj2)   -> __sub__(dobj1,dobj2) 
print(dobj1*dobj2)        # obj1.__mul__(dobj2)   -> __mul__(dobj1,dobj2) 
print(dobj1/dobj2)        # obj1.__truediv__(dobj2)   -> __truediv__(dobj1,dobj2) 
