no = 11             # Global variable

def Display():
    a = 21              #Local variable
    print("From Display :",no)
    print("From display value of a :",a)
    

def Demo():
    print("From Demo :",no)
    print("From demo value of a :",a)   #NameError


Display()
Demo()
