#include <iostream>
using namespace std;

class ArrayX
{
    public:

        int Summation(int Arr[], int iSize)
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt < iSize ; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }

};

int main()
{   
    int *Brr = NULL;
    int iCnt = 0, iLength = 0, iRet = 0;
    ArrayX aobj;
    
    cout<<"Enter the number of Elements\n";
    cin>>iLength;

    Brr = new int[iLength];    // Dynamic memory allocation

    cout<<"Enter the Elements \n";
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        cin>>Brr[iCnt];
    }
    
    cout<<"Array Elements are: \n";
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    iRet = aobj.Summation(Brr,iLength);    //Error
    cout<<"Summation is: "<<iRet<<endl;

    delete []Brr;    // deallocate the memory.

    
    return 0;
}