# Single Level inheritance  : constructor callig sequence is differrent here  

class Base:            
    def fun(self):
        print("Inside base fun")
        

class Derived(Base):
    def sun(self):
        print("Inside derived sun")
        
dobj = Derived()             # it will not call base class constructor implicitely :: needs super keyword.
dobj.fun()                   # accessing base class method.
dobj.sun()
