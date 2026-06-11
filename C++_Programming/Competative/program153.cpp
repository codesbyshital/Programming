#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
};

int main()
{   
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;    //16byte : Padding concept

    
    return 0;
}