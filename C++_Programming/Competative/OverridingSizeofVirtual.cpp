#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Inside Base fun \n";  }

        virtual void gun()
        { cout<<"Inside Base gun \n";  }

        virtual void sun()
        { cout<<"Inside Base sun \n";  }

};  //8 bytes


class Derived : public Base
{
    public:
        int x,y;

        void fun()              // Redefination of fun
        { cout<<"Inside Derived fun \n";  }

        void sun()              // Refedination of sun
        { cout<<"Inside Derived sun \n";  }

        virtual void run()              //Defination
        { cout<<"Inside Derived run \n";  }


};  // 16 bytes

int main()
{
    cout<<"Size of Base :"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived :"<<sizeof(Derived)<<"\n";

    

    return 0;
}