def SumCube(No):
    Sum = 0;
    for i in range(1,No+1):
        Sum = Sum + (i**3)              #  ** operator is used for power 
    return Sum
    
def main():
    Ret = SumCube(5)
    print("Result is : ",Ret)
    
if __name__ == "__main__":
    main()
