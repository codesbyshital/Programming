# to check differrence between List & Tuple(Sequence datatype)  
#------------------------------------------------
#                   List                Tuple
#--------------------------------------------------------
#Ordered :          Yes                 Yes
#Indexed :          Yes                 Yes
#Mutable :          Yes                 No
#Heterogeneous:     Yes                 Yes

def main():
    Data = [10,3.14,True,"Pune"]            #list is heterogenous
    Data1 = (10,3.14,True,"Pune")           #Tuple is heterogenous
    
    print(Data)
    print(Data1)
    
    print(Data[0])
    print(Data1[0])
    
    
if __name__ == "__main__":
    main()
    
