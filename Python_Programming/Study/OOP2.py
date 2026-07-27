class Demo:
    # class variables..
    Value1 = 10
    Value2 = 20
    
    def __init__(self):
        self.No1 = 11
        self.No2 = 21
        
    def fun(self):                      # instance method : can access all
        print("Inside Instance method : Fun")
        print(self.No1)
        print(self.No2)
        
        print(Demo.Value1)              #Class variables accessed via class name  
        print(Demo.Value2)

dobj = Demo()               #object creation

dobj.fun()                  #call to instance method.
        
        
    


