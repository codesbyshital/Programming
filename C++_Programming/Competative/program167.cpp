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


};

int main()
{    
    ArrayX *aobj1 = new ArrayX();       //parameterised constructor
    ArrayX *aobj2 = new ArrayX(15);      //parameterised constructor

    //Function call
    
    delete aobj1;       //Destructor
    delete aobj2;

    
    return 0;
}