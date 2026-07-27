#OOP concepts: Class destructor(deallocate resourses)

class Demo:
    def __init__(self):
        print("Inside Constructor")
        
    def __del__(self):
        print("Inside Destructor")
    
obj1 = Demo()                               # object creation
obj2 = Demo()


print("End Application")