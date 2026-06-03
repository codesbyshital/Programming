#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        int Add(int A, int B)          
        { 
            return A+B;
        }

        virtual int sub(int A, int B) = 0;          //pure virtual function
       
};  //8 bytes


class Derived : public Base
{
    public:
        int x,y;

        int mult(int A, int B)              // 4000
        { 
            return A*B;
        }

        int sub(int A, int B)              // 5000
        { 
            return A-B;  
        }

        
};  // 16 bytes

int main()
{
    
    Derived dobj;

    cout<<"Addition is: "<<dobj.Add(10,20)<<"\n";  
    cout<<"Multiplication is: "<<dobj.mult(20,30)<<"\n";
    cout<<"Substraction is: "<<dobj.sub(40,20)<<"\n\n";
    
    Base *bp = new Derived();   // up-casting

    cout<<"Addition is: "<<bp->Add(10,20)<<"\n";  
    //cout<<"Multiplication is: "<<bp->mult(20,30)<<"\n";
    cout<<"Substraction is: "<<bp->sub(40,20)<<"\n";

    return 0;
}