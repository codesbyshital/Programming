# to check differrence between List & Tuple(Sequence datatype)  
#------------------------------------------------
#                   List                Tuple
#--------------------------------------------------------
#Ordered :          Yes                 Yes
#Indexed :          Yes                 Yes
#Mutable :          Yes                 No

def main():
    Data = [10,20,30,40]            #list
    Data1 = (10,20,30,40)           #Tuple
    
    print(Data)
    print(Data1)
    
    print(Data[0])
    print(Data1[0])
    
    
if __name__ == "__main__":
    main()
    
