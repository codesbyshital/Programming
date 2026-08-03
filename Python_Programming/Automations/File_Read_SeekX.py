# Seek (2 parameters)  : 1st para:offset   2nd para : 0/1/2   : 0 : Start, 1: current position, 2: end


def main():
    try :
        fobj = open("Demo.txt","r")                   # open with Read mode   
        print("File gets opened..")  
        
        Data = fobj.read(5)                 # 5 bit from starting
        print(Data)
        
        fobj.seek(10,0)                 # go to offset 10 & then from current location
        
        Data = fobj.read(5)          #then read next 5        
        print(Data)
        
        fobj.close()
        
    except FileNotFoundError as fobj:
        print("File is not present in current Directory")
        
if __name__ == "__main__" :
    main()