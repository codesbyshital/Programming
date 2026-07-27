# Single Level inheritance  : constructor callig sequence is differrent here  

class Base:
    def __init__(self):
        print("Inside Base constructor")

class Derived(Base):
    def __init__(self):
        super().__init__()                              #explicite call to magic method.  Base class constructor
        
        print("Inside derived constructor")
        
dobj = Derived()             # it will not call base class constructor implicitely :: needs super keyword.
