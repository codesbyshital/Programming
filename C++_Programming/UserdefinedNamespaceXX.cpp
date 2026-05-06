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
        std::cout<<"Inside Pune fun";
    }

}



int main()
{  
    std::cout<<"Jay Ganesh...";

    Marvellous :: fun();   
    
    return 0;
}