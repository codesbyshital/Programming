#include<iostream>
using namespace std;

class Max
{
    public:
    int a, b;

    void GetData()
    {
        cout<<"Enter two Numbers";
        cin>>a>>b;
    }

    void FindMax()
    {
        if(a>b)
        {
            cout<<"Maximum Number is="<<a;
        }
        else
        {
            cout<<"Maximum Number is="<<b;
        }
    }

};

int main()
{
    Max mobj;
    mobj.GetData();
    mobj.FindMax();
    return 0;
}