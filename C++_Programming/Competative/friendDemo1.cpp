#include<iostream>
using namespace std;

class Demo
{
 public : int i;
 private : int j;
 protected : int k;
 
 public:
        Demo()
        {
            i = 11;
            j = 21;
            k = 51;
        }

};

void fun()
{
    Demo dobj;
    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;   // error
    cout<<dobj.k<<endl;   //error
}


int main()
{

    fun();

    return 0;
}