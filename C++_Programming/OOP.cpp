#include <iostream>
using namespace std;

class Arithmatic
{
    public:
        int no1;
        int no2;

        Arithmatic()
        {
            no1 = 0;
            no2 = 0;

        }

        Arithmatic(int value1, int value2)
        {
            no1 = value1;
            no2 = value2;
        }

        int Addition()
            {
                int ans=0;
                ans = no1 + no2;
                return ans;

            }

        int Substraction()
            {
                int ans=0;
                ans = no1 - no2;
                return ans;

            }
        
};

int main()
{
    
    Arithmatic aobj(11,10);

    int Result =0;
    Result = aobj.Addition();
    cout<<"Addition is : "<<Result<<"\n";

    Result = aobj.Substraction();
    cout<<"Substraction is : "<<Result<<"\n";

    return 0;
}