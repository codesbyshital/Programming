import threading      # Threading module how to pass arguments for multithreading function

def Display(No1,No2,No3):        #def Display(*No)  : errror
    print(f"Inside Display:{No1} , {No2} , {No3} :",threading.get_ident())    #give thread ID    : child thread
        

def main():
    print("Inside Main :",threading.get_ident())
    
    tobj = threading.Thread(target=Display, args = (11,21,51,))           # positional argument : list of values
    
    tobj.start()    #no need to call Display explicitely when we ask thread to start.
    
        
if __name__ == "__main__":
    main()