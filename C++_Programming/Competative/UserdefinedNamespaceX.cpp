#include<iostream>

namespace Marvellous
{
    int no = 11;

    void fun()
    {
        std::cout<<"Inside Marvellous fun";
    }
}

namespace Pune
{
    int no = 21;

    void fun()
    {
        std::cout<<"\n Inside Pune fun";
    }

}

using namespace Marvellous;

int main()
{  
    std::cout<<"Jay Ganesh...";

    fun();   
    
    return 0;
}