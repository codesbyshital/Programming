#include <iostream>
using namespace std;


int main()
{
   
    int Size = 0;
    float * Marks = NULL;     //pointer for malloc
    int i = 0;   //loop counter

    cout<<"Enter number of elements: \n";
    cin>>Size;

    //Dynamic memory allocation 

    Marks = new float[Size];            //Allocate memory

    
    cout<<"Enter your marks: \n";

    //Iteration
    //  1     2    3
    for(i=0; i<Size; i++)
    {
        cin>>Marks[i];       //4
    }
    
    cout<<"Entered Marks are : \n";
    //  1     2    3
    for(i=0; i<Size; i++)
    {
        cout<<Marks[i]<<"\n";    //4
    }

    
    delete [] Marks;                    // Free the memory
   
    return 0;
}