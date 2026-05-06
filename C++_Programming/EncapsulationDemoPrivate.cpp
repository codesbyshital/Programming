#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //access specifier (by defaulr Private)
    
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
    cout<<mobj1.no1<<"\n";   //Error
    mobj1.fun();   //Error
    mobj2.fun();  //Error
    mobj1.gun();  //Error

    return 0;
}
