def filterX(Task, Elements):
    Result = []                # list()
    for No in Elements :
        Ret = Task(No)         #CheckEven(No)
        
        if(Ret == True):
            Result.append(No)
            
    return Result


def mapX(Task, Elements):
    Result = []
    for No in Elements :
        Ret = Task(No)          #Increment(No)
        Result.append(Ret)
    
    return Result

def reduceX(Task, Elements):
    Sum = 0
    for No in Elements :
        Sum = Task(Sum,No)        #Addition(No1,No2)
            
    return Sum
    