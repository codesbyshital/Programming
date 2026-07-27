def main() :
    Ans = 0                     # scope is for all main function
    
    try :
        print("Enter First number :")
        No1 = int(input())
        print("Enter Second number :")
        No2 = int(input())
        
        Ans = No1 / No2                 #ZeroDivisionError  : division by 0
        
        print("Division is successfull")                # this will skip whn exception occurs
        
    except ZeroDivisionError as zobj:                       # alias for object for class ZeroDivisionError
        print("Exception Occured due to Second Operand is Zero : ",zobj)
    
    except ValueError as vobj:
        print("Exception occurred due to invalid Datatype :",vobj)        
    
    print("Result is: ",Ans)
    
    
if __name__ == "__main__":
    main()
