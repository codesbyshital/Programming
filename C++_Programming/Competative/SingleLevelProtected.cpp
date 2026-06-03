#include<iostream>
using namespace std;

class Base
{
    protected:
        int i,j;

    public:    
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

int main()
{
    
    cout<<"Inside Main \n";

    Derived dobj;

    cout<<"Size of Base class object is:"<<sizeof(Base)<<"\n";   //8
    cout<<"Size of derived class object is:"<<sizeof(Derived)<<"\n";   //12
    
    //cout<<dobj.i<<"\n";   //Error
    //cout<<dobj.j<<"\n";   //Error
    cout<<dobj.x<<"\n";   //0
    
    cout<<"End of Main\n";

    return 0;
}