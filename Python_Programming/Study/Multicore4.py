# create list of numbers & generate list of cube of each number  : use Multicore

import time
import multiprocessing
import os

def SumCube(No):
    print("Process is Running with PID : ",os.getpid())
    
    Sum = 0;
    for i in range(1,No+1):
        Sum = Sum + (i**3)              #  ** operator is used for power 
    return Sum
    
def main():
    data = [10000000,20000000,30000000,40000000,50000000]    
    Result = []
    
    start_time = time.perf_counter()
    
    pobj = multiprocessing.Pool()               # pool of processes
    
    Result  = pobj.map(SumCube,data)                        #this map is differrent from FMR but works similar
    
    pobj.close()
    pobj.join()
    
    end_time = time.perf_counter()
      
    print("Result is : ")
    print(Result)
    
    print(f"Time required : {end_time - start_time:.4f} seconds")
    
        
if __name__ == "__main__":
    main()
