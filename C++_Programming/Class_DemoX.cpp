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
    //Demo fun();
    cout<<sizeof(dobj)<<"\n";   //8
    return 0;
}