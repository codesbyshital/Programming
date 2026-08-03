import os

def main():
    try :
        # fobj.remove()    # remove method is not with fobj.remove, so used os.
        os.remove("Demo.txt")                   #it removes permanantly       
        
        
    except FileNotFoundError as fobj:
        print("File is not present in current Directory")
        
if __name__ == "__main__" :
    main()