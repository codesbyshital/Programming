#include<iostream>
using namespace std;

class Demo
{
    public :
        int i;  //characteristics
        float f;  //Characterisics

        void fun()  // behaviour
       {
        cout<<"Inside Fun\n";
       }
};

int main()
{
    Demo dobj;
    cout<<dobj.i<<"\n";

    dobj.fun();
    
    return 0;
}