# ABC  class from abc module: Abstract Base class

from abc import ABC, abstractmethod                 # abc : module , ABC : class name



class Base(ABC):                    ## abstract method should be derived from ABC @abstractmethod
    @abstractmethod 
    def Addition(self, No1, No2):             #abstract method.
        pass        
        
class Derived(Base):                    
    pass
        
        
dobj = Derived()                #Error

dobj.Addition()                      