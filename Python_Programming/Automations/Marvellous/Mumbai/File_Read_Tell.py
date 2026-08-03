# ask the offeset   : Tell()

def main():
    try :
        fobj = open("Demo.txt","r")                   # open with Read mode   
        print("File gets opened..")  
        
        print("File Offeset is :",fobj.tell())              # ask the offset
        
        Data = fobj.read(10)                        #reads from current offset  to 10
        print(Data)
        
        print("File Offeset is :",fobj.tell())              # ask the offset
        
                
        fobj.close()
        
    except FileNotFoundError as fobj:
        print("File is not present in current Directory")
        
if __name__ == "__main__" :
    main()