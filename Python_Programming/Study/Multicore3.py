# create list of numbers & generate list of cube of each number

import time

def SumCube(No):
    Sum = 0;
    for i in range(1,No+1):
        Sum = Sum + (i**3)              #  ** operator is used for power 
    return Sum
    
def main():
    data = [10000000,20000000,30000000,50000000]    
    Result = []
    
    start_time = time.perf_counter()
    for value in data:
        Ret = SumCube(value)
        Result.append(Ret)
        
    end_time = time.perf_counter()
      
    print("Result is : ")
    print(Result)
    
    print(f"Time required : {end_time - start_time:.4f} seconds")
    
        
if __name__ == "__main__":
    main()
