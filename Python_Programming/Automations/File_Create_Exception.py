def main():
    try :
        open("Demo.txt","w")                        # open with write mode is used for create file & open
        print("File gets opened..")
        
    except FileNotFoundError as fobj:
        print("File is not present in current Directory")
        
if __name__ == "__main__" :
    main()