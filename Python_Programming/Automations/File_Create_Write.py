def main():
    try :
        fobj = open("Demo.txt","w")                   # open with write mode is used for create file & open  : OOP
        print("File gets opened..")  
        
        fobj.write("Jay Ganesh...")      
                
        fobj.close()
        
    except FileNotFoundError as fobj:
        print("File is not present in current Directory")
        
if __name__ == "__main__" :
    main()