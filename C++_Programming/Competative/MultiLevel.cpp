#include<iostream>
using namespace std;

class Base
{

    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base Constructor\n";
            i = 0;
            j = 0;

        }

        ~Base()
        {
            cout<<"INside Base Destructor\n";
        }


        void fun()
        {
           cout<<"Inside Base Fun\n";      
        }

};


class Derived : public Base
{
    public:
        int x;

        Derived()
        {
            cout<<"INside Derived Constructor\n";
            x = 0;
        }

        ~Derived()
        {
            cout<<"INside Derived Destructor\n";

        }

        void gun()
        {
            cout<<"INside gun of Derived\n";
        }

};


class DerivedX : public Derived
{
    public:
        int y;

        DerivedX()
        {
            cout<<"INside DerivedX Constructor\n";
            y = 0;
        }

        ~DerivedX()
        {
            cout<<"INside DerivedX Destructor\n";
        }

        void sun()
        {
            cout<<"INside DerivedX sun\n";
        }
};

int main()
{
    cout<<"Inside Main \n";

    DerivedX dobj;

    cout<<"Size of Base class object is:"<<sizeof(Base)<<"\n";   //8
    cout<<"Size of derived class object is:"<<sizeof(Derived)<<"\n";   //12
    cout<<"Size of derived class object is:"<<sizeof(DerivedX)<<"\n";   //16


    cout<<dobj.i<<"\n";   //0
    cout<<dobj.j<<"\n";   //0
    cout<<dobj.x<<"\n";   //0
    cout<<dobj.y<<"\n";   //0
    
    dobj.fun();
    dobj.gun();
    dobj.sun();
    
    cout<<"End of Main\n";

    return 0;
}