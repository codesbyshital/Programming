#include<iostream>
using namespace std;

//Constructor
class Marvellous
{
    //access specifier
    public:
        int no1, no2;        //characteristics

        //Default constructor
        Marvellous()
        {
            cout<<"Inside Default Constructor\n";

            no1 = 10;    //Characteristic initialization
            no2 = 20;

        }
        
        //Parameterised Constructor
        Marvellous(int a, int b)
        {
            cout<<"Inside Parameterised Constructor\n";

            no1 = a;    //Characteristic initialization
            no2 = b;

        }
        
        //Copy Constructor
        Marvellous(Marvellous &ref)
        {
            cout<<"Inside Copy Constructor\n";
            no1 = ref.no1;
            no2 = ref.no2;
         }

        //Destructor
        ~Marvellous()
        {
            cout<<"Inside Destructor\n";
            

        }
        
};

int main()
{
    cout<<"Inside main\n";

    Marvellous mobj1;         //Default constrctor object
    Marvellous mobj2(11,21);    //Parameterised constrctor object
    Marvellous mobj3(mobj2);    //Copy constrctor object

    //cout<<mobj1.no1<<"\n";
    cout<<"End of Main \n";

    return 0;
}  //All Destructors gets called
