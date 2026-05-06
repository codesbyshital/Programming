#include <iostream>
using namespace std;


int main()
{
    //We can cretate one reference to one variable.
    int no = 11;
    int &x = no;

    //we can create multiple references for single varialbe 
    int &y = no;

    //we can create reference to reference
    int &z = y;

    //we can create reference to pointer
    int *p = &no;
    int *(&q) = p;
    

    return 0;
}
