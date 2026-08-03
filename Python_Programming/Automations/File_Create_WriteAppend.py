def main():
    try :
        fobj = open("Demo.txt","a")                   # open with Appebd mode   
        print("File gets opened..")  
        
        fobj.write(" Pune Maharashtra")          #Appends the data
                
        fobj.close()
        
    except FileNotFoundError as fobj:
        print("File is not present in current Directory")
        
if __name__ == "__main__" :
    main()