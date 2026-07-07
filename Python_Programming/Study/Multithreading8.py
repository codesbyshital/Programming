import threading      # Threading module how to pass arguments for multithreading function
import time


def SumEven(No):
    Sum = 0
    for i in range(2,No,2):
        Sum = Sum + i
        
    print("Summation of Even is: ",Sum)
    

def SumOdd(No):
    Sum = 0
    for i in range(1,No,2):
        Sum = Sum + i
        
    print("Summation of Odd is: ",Sum)
    
    
def main():
    
    start_time = time.perf_counter()
    
    t1 = threading.Thread(target=SumEven, args= (10000000,))   
    t2 = threading.Thread(target=SumOdd, args= (10000000,))   
    
    t1.start()
    t2.start()
    
    t1.join()
    t2.join()
    
    end_time = time.perf_counter()
    
    print(f"Time Required is : {end_time - start_time:.4f} seconds")
    
if __name__ == "__main__":
    main()