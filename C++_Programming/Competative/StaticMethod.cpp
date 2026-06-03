#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;          //non-static
        int j;          //non-static
        static int k;   //static

        Demo()
        {
            i = 0;
            j = 0;
            
        }

        void fun()                      //non-static method
        {
            cout<<"Inside non-static fun\n";
            cout<<"i = "<<i<<"\n";
            cout<<"j = "<<j<<"\n";
            cout<<"k = "<<k<<"\n";
        }

        static void gun()               //static method
        {
            cout<<"Inside non-static gun\n";
           
            cout<<"k = "<<k<<"\n";
        }

};




int Demo :: k = 11;             //initialization of static variable

int main()
{
    cout<<Demo::k<<"\n";  

    Demo :: gun();

    Demo dobj;

    cout<<dobj.i<<"\n";    //0
    cout<<dobj.j<<"\n";     //0

    dobj.fun();
    
    return 0;
}