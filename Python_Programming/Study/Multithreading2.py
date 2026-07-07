import threading      # Threading module 

def Display():
    print("Inside Display:",threading.get_ident())    #give thread ID    : child thread
        

def main():
    print("Inside Main :",threading.get_ident())
    
    tobj = threading.Thread(target=Display)           #keyword argument : target is keyword
    
    tobj.start()    #no need to call Display explicitely when we ask thread to start.
    
        
if __name__ == "__main__":
    main()