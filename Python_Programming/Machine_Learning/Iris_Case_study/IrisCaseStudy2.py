from sklearn.datasets import load_iris

def main():
    print("-"*30)
    print("Iris Classification case Study")
    print("-"*30)
    
    
    Dataset = load_iris()               #loads inbult dataset
    
    # Metadata of Dataset
    print("Independent Variables are : ")
    print(Dataset.feature_names)
    
    print("Dependent Variables are : ")
    print(Dataset.target_names)
    
    
if __name__ == "__main__":
    main()