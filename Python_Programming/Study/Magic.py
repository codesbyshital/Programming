# Magic method : dunder variable


from abc import ABC, abstractmethod                 # abc : module , ABC : class name

class Demo :
    def __init__(self,A):
        self.No = A
        
        
             
dobj1 = Demo(11) 
dobj2 = Demo(21)

print(dobj1+dobj2)        #  Error
