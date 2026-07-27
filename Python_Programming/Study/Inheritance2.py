# Single Level inheritance  : constructor calli g sequence is differrent here

class Base:
    def __init__(self):
        print("Inside Base constructor")

class Derived(Base):
    def __init__(self):
        print("Inside derived constructor")
        
bobj = Base()
