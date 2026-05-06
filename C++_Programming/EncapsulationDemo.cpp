#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //access specifier
    public:
        int no1,no2;        //characteristics
        void fun()          //behaviour
        {
            cout<<"Inside Fun \n";
        }   

        void gun()          //behaviour
        {
            cout<<"Inside Gun \n";
        }

};

int main()
{
    //Object creation(Instance)
    Marvellous mobj1;
    Marvellous mobj2;
    cout<<sizeof(mobj1)<<"\n";     //8
    cout<<mobj1.No1<<"\n";
    mobj1.fun();
    mobj2.fun();

    return 0;
}
