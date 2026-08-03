from sklearn.datasets import load_iris

def main():
    print("-"*30)
    print("Iris Classification case Study")
    print("-"*30)
    
    
    Dataset = load_iris()               #loads inbult dataset
    print(Dataset)
    
    
if __name__ == "__main__":
    main()