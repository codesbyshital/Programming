#OOP concepts: Instance Variable , class variables.

class Marvellous:       
    #Class variables
    No1 = 11                        
    No2 = 12
    def __init__(self):             # these are created using constructor
        #instance variables are accesed using object
        self.Value1 = 21
        self.Value2 = 51

print(Marvellous.No1)                   # class variables accesed using class name.
print(Marvellous.No2)

#instance creation : objects creation
mobj1 = Marvellous()                    
mobj2 = Marvellous()
mobj3 = Marvellous()

print(mobj1.Value1)
print(mobj2.Value2)

