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
    Base *bp = new Derived();   // up-casting

    bp->fun();  //Base fun
    bp->gun();  //Base gun
    bp->sun();  //Derived sun
    //bp->run();  //Error

    

    return 0;
}