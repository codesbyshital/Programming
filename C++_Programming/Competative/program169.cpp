#include <iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    private:
        int *Arr;
        int iSize;
       
    public:  
    
        //parameterised constructor with default argument
        ArrayX(int X = 5)
        {            
            iSize = X;               
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            delete []Arr;           
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Elements\n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of Array are :\n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Summation()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }

};

int main()
{    
    ArrayX *aobj = NULL;      
    int iLength = 0, iCnt = 0, iRet = 0;
    
    cout<<"Enter the Number of Elements\n";
    cin>>iLength;
    
    aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();
    iRet = aobj->Summation();

    cout<<"Summation is: "<<iRet<<endl;

    delete aobj;
    
    return 0;
}


/*
Enter the Number of Elements
5
Enter the Elements
1
2
3
4
5
Elements of Array are :
1
2
3
4
5
Summation is: 15

*/