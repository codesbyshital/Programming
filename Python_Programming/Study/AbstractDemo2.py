# ABC  class from abc module: Abstract Base class, not part of polymorphism

from abc import ABC, abstractmethod                 # abc : module , ABC : class name

class Base(ABC):                    ## abstract method should be derived from ABC @abstractmethod
    @abstractmethod 
    def Addition(self, No1, No2):             #abstract method.   without body
        pass        
        
class Derived(Base):                    
    def Addition(self, No1, No2):               #Concrete method : with body     
        return No1+No2 
        
        
dobj = Derived() 
               
Ret =dobj.Addition(10,11) 
print("Addition is : ",Ret)                     