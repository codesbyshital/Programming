def main():
    try :
        fobj = open("Demo.txt","r")                   # open with Read mode   
        print("File gets opened..")  
        
        Data = fobj.read(10)                     #reads from current offset  to 10
        print(Data)
                
        fobj.close()
        
    except FileNotFoundError as fobj:
        print("File is not present in current Directory")
        
if __name__ == "__main__" :
    main()