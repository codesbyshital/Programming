no = 11             

def Display():
    no = no + 1                     #UnboundLocalError
    print("From Display",no)
    
    
print("Before: ",no)
Display()
print("After: ",no)


