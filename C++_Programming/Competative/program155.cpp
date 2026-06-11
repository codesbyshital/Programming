#include <iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int x)
        {

        }
};

int main()
{   
    ArrayX aobj;   // Error : no matching constructor found

    cout<<sizeof(aobj)<<endl;    

    
    return 0;
}