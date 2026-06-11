#include <iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Parameterised Constructor
        ArrayX(int X)
        {
            cout<<"Inside constructor"<<endl;

            iSize = X;               //characteristics initialization
            Arr = new int[iSize];   //Resourse allocation (memory allocation)
        }

        //Destructor
        ~ArrayX()
        {
            cout<<"Inside destructor"<<endl;;

            delete []Arr;           //Resource Deallocation.
        }
};

int main()
{   
    ArrayX aobj1(5);      
    
           
    return 0;
}