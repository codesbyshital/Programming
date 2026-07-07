#factorial : 6 : 1*2*3*4*5*6
# Time module : Time()   : method give time

import time     #module


def Factorial(No):
    Fact = 1
    
    for i in range(1,No+1):
        Fact = Fact * i
    return Fact
    

def main():
    value = int(input("Enter number "))
    
    start_time = time.time()  # 1 jan 1970 : UTC time 
    Ret = Factorial(value)
    end_time = time.time()
    
    print(f"Factorial of {value} is {Ret}")  
    
    print(f"Time Required is :{end_time - start_time:.5f} seconds")      # CPU speed. 
        
if __name__ == "__main__":
    main()