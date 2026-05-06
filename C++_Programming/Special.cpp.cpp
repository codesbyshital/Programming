#include<iostream>
using namespace std;

class Demo
{
    public :
        int i;  //characteristics
        float f;  //Characterisics

        Demo()   //constructor
        {
            cout<<"Inside Construtor\n";
            i=0;
            f=0.0f;
            
        }

        ~Demo()   //Destructor
        {
            cout<<"Inside Destructor\n";
        }

        void fun()  
       {
        cout<<"Inside Fun\n";
       }
};

int main()
{
    cout<<"Inside main\n";

    Demo dobj;   //Object creation.

    cout<<dobj.i<<"\n";

    dobj.fun();

    cout<<"end of main \n";
    return 0;
}