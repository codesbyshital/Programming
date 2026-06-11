#include <iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iCnt = 0, iLength = 0;

    cout<<"Enter the number of Elements\n";
    cin>>iLength;

    //C:        Brr = (int *)malloc (iLength * sizeof(int))
    //Java :    Brr = new int[iLength];
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

    delete []Brr;

    return 0;
}