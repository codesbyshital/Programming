class Demo:
    # class variables..
    Value1 = 10
    Value2 = 20
    
    def __init__(self):
        self.No1 = 11
        self.No2 = 21
        
    def fun(self):                      # instance method : can access all
        print("Inside Instance method : fun")
        print(self.No1)
        print(self.No2)
        
        print(Demo.Value1)              #Class variables accessed via class name  
        print(Demo.Value2)
    
    @classmethod                        #decorator
    def gun(cls):
        print("Inside Class method : gun")
        #print(Demo.No1)                     # not preferred
        #print(Demo.No2)                        not method
        
        print(Demo.Value1)              #Class variables accessed via class name  
        print(Demo.Value2)
    
dobj = Demo()
dobj.gun()                          # class method called using object  , call with Obect


        
        
    


