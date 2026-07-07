import threading      # THreading module 

def Display():
    print("Inside Display:",threading.get_ident())    #give thread ID
    

def main():
    print("Inside Main :",threading.get_ident())
    Display()
    
if __name__ == "__main__":
    main()