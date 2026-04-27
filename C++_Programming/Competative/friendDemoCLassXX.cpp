#include<iostream>
using namespace std;


class Hello
{
    public :
        void fun();
        void gun();

};

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

        friend void Hello :: fun();

};


void Hello :: fun()
{
    Demo dobj;
    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.k<<endl;
}

void Hello :: gun()
{
    Demo dobj;
    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;   // error
    cout<<dobj.k<<endl;   //error
}

int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    return 0;
}