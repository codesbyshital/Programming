#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    int Size = 0;
    float * Marks = NULL;     //pointer for malloc
    int i = 0;   //loop counter

    printf("Enter number of elements\n");
    scanf("%d", &Size);

    //Dynamic memory allocation 

    Marks = (float *)malloc(Size * sizeof(float));

    
    printf("Enter your marks \n");

    //Iteration
    //  1     2    3
    for(i=0; i<Size; i++)
    {
        scanf("%f",&Marks[i]);    //4
    }
    
    printf("Entered Marks are : \n");
    //  1     2    3
    for(i=0; i<Size; i++)
    {
        printf("%f\n",Marks[i]);    //4
    }

    
    free(Marks);    //
   
    return 0;
}