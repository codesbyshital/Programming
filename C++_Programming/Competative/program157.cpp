#include <iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Default Constructor
        ArrayX()
        {

        }
        //Parameterised Constructor
        ArrayX(int X)
        {

        }
};

int main()
{   
    ArrayX aobj1;       //Default
    ArrayX aobj2(5);    //parameterised

    cout<<sizeof(aobj1)<<endl;    
    cout<<sizeof(aobj2)<<endl;

    
    return 0;
}