# import sklearn
# 80-20 %

from sklearn import tree

def main():
    print("Ball Classification case study")
    
    Independent = [[35,1],[47,1],[90,0],[48,1],[90,0],[35,1],[92,0],[35,1],[35,1],[35,1],[96,0],[43,1],[110,0]]    
    # For testing taken = = [35,1],[95,0]
    
    Dependent = [1,1,2,1,2,1,2,1,1,1,2,1,2]    
    # for testing labels = 1,2
    
    model = tree.DecisionTreeClassifier()                   # select model
    
    model = model.fit(Independent,Dependent)                # Training 
    
    result  = model.predict([[35,1],[95,0]])                # Testing
    
    print("Predicted Result of model is : ",result)
    

if __name__ == "__main__":
    main()
