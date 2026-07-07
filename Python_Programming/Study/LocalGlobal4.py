no = 11             

def Display():
    global no      #like extern keyword in c , will refer to Global variable
    no = 21                     
    print("From Display",no)   #21
    
    
print("Before: ",no)  #11
Display()
print("After: ",no)   #21


