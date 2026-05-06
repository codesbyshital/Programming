#include <iostream>
using namespace std;


int main()
{
    int no = 11;

    int &x = no;

    cout<<"Value of No :"<<no<<"\n";    //11
    cout<<"Value of x :"<<x<<"\n";      //11

    cout<<"Address of No :"<<&no<<"\n"; //100
    cout<<"Address of x :"<<&x<<"\n";   //100

    cout<<"Size of No :"<<sizeof(no)<<"\n"; //4
    cout<<"Size of x :"<<sizeof(x)<<"\n";   //4
    

    return 0;
}
