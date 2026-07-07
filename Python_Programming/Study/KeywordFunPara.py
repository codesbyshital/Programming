# to check keyword parameter

def Area(Radius, PI):
    Ans = PI  * Radius * Radius
    return Ans    

def main():
    Ret = Area(10.5)                    # Default argument 
    print("Area of Circle is: ",Ret)
    
    Ret = Area(10.5, 7.12)                    # Default argument 
    print("Area of Circle is: ",Ret)
    
    
if __name__ == "__main__":
    main()
    
