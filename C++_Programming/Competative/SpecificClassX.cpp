#include<iostream>
using namespace std;

class Arithematic
{
    public :
        float No1;
        float No2;

        Arithematic(float A, float B)
        {
            this->No1 = A;
            this->No2 = B;
        }

        float Addition()
        {
            float Ans;
            Ans = No1 + No2;
            return Ans;
        }

        float Substraction()
        {
            float Ans;
            Ans = No1 - No2;
            return Ans;
        }


};

int main()
{
    Arithematic aobj(11.2f,10.3f);

    cout<<aobj.Addition()<<"\n";        //21.5
    cout<<aobj.Substraction()<<"\n";    //0.9

    return 0;
}