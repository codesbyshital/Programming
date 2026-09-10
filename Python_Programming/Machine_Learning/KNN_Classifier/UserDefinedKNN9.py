
# user defined KNN algo design  : single testing point & calculate eucledean distance

import math
import numpy as np

# formula to calculate Eucledean Distance Squareroot of [(x1-x2)^2 + (y1-y2)^2]
def MarvellousEucDistance(P1, P2):
    Ans = math.sqrt((P1['X'] - P2['X'])**2 + (P1['Y'] - P2['Y'])**2)
    return Ans

def MarvellousKNNClassifier():
    border = "-"*60

# list of dictionaries
    Data = [
        {'point' : 'A', 'X' : 1, 'Y' : 2, 'label' : 'Red'},
        {'point' : 'B', 'X' : 2, 'Y' : 3, 'label' : 'Red'},
        {'point' : 'C', 'X' : 3, 'Y' : 1, 'label' : 'Blue'},
        {'point' : 'D', 'X' : 5, 'Y' : 6, 'label' : 'Blue'}
    ]

    print(border)
    print("Marvellous KNN Classifier")
    print(border)

    for i in Data:
        print(i)

    print(border)

    new_point = {'X' : 3, 'Y' : 3}          # testing point

    print("Distances of all points : ")
    print(border)

# loop to find the Eucledean distances from all points
    for d in Data:
        d['distance'] = MarvellousEucDistance(d,new_point)

# loop to create distance key & its label
    for d in Data:        
        print(d['distance'],d['label'])

    print(border)

# sort the data by distance
    sorted_data = sorted(Data, key= lambda item : item['distance'])
    
    print(border)
    print("Sorted Data : ")
    print(border)

    for d in sorted_data:
        print(d)

    print(border)

# Hyper parameter tunning k : 1,3,5,7...... odd numbers
    k = 3    
    nearest = sorted_data[:k]

    print(border)
    print("Nearest 3 members are : ")
    print(border)

    for d in nearest:
        print(d)

    print(border)

    # Voting  result
    votes = {}

    for neighbours in nearest:
        label = neighbours['label']
        votes[label] = votes.get(label,0) + 1

    print(border)
    print("Voting result is : ")
    print(border)

    for d in votes:
        print("Name : ",d," Number of votes : ",votes[d])

    print(border)

# Final Prediction 
    iMax = 0
    Name = ""

    for d in votes:
        if(votes[d] > iMax):
            iMax = votes[d]
            Name = d

    print("Final prediction is : ",Name)
    print(border)


def main():
    MarvellousKNNClassifier()

if __name__ == "__main__":
    main()

