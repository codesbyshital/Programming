#include<iostream>
using namespace std;

template <class X, class Y>   // template header  , T : Template variable
X Addition(X A, Y B)
{
    X Ans;
    Ans = A + B;
    return Ans;
}


int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.2f, 10.3)<<"\n";
    cout<<Addition(10.34567, 'A')<<"\n";
    
    return 0;
}