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


}

int main()
{  
    std::cout<<"Jay Ganesh...";

    fun();   //Error
    
    return 0;
}