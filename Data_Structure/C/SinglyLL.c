//Linear-Linked List
/*
InsertAtPos added
*/


#include<stdio.h>
#include<stdlib.h>

#pragma pack(1) 

struct node
{
    int data;
    struct node *next;
};

// Defination of macros.
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// Display LL
void Display(PNODE first)
{
    while(first != NULL)            //type-1
    {
        printf("| %d | -> ",first->data);
        first = first->next;        // go to next node
    }

    printf("NULL\n");
}

// Count Nodes
int Count(PNODE first)
{
    int iCount =0;
    while(first != NULL)            //type-1
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}


void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;     //new node pointer
    
    newn = (PNODE)malloc(sizeof(NODE));             //NOde gets created here

    newn ->data  = iNo;
    newn ->next = NULL;

    if(NULL == *first)              // it will work like *first == NULL
    {
        *first = newn;
    }
    else                          // LL contains atleast 1 node.
    {
        newn->next = *first;     // insert at first pos
        *first = newn;
    }


}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;     //new node pointer
    PNODE temp = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));             //NOde gets created here

    newn ->data  = iNo;
    newn ->next = NULL;

    if(*first == NULL)    // LL is empty
    {
        *first = newn;
    }
    else                // LL contains atleast 1 node.
    {
        temp = *first;    // 100 into temp

        while(temp->next != NULL)           //type 2 while    till last node
        {
            temp = temp->next;
        }

        temp->next = newn;    //last -> new

    }

}

void InsertAtPos(PPNODE first, int iNo,int iPos)
{
    int iCount = 0;
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    

    iCount = Count(*first);                     // Call to count function for counting nodes

    if((iPos < 1) || (iPos > iCount+1))
    {
        printf("Invalid Position");
        return;
    }
    
    if(iPos == 1)               // if First position
    {
        InsertFirst(first,iNo);         // all parameters are as it is
    }
    else if(iPos == iCount+1)   // if Last position
    {
        InsertLast(first,iNo);
    }
    else                    // other
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;
        temp = *first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
}

void DeleteFirst(PPNODE first)
{
    // 3 stages

    if(*first == NULL)                  //LL is empty
    {
        return;
    }
    else if((*first)->next == NULL)       // LL has 1 node only.     -> consider first then *
    {
        free(*first);       // delete that first node.
        *first = NULL;    // that node becomed NULL now.
    }
    else                                // LL contains more than 1 node
    {
        PNODE temp = NULL;
        temp = *first;
        *first =(*first)->next;
        free(temp);       

    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                  //LL is empty
    {
        return;
    }
    else if((*first)->next == NULL)       // LL has 1 node only.     -> consider first then *
    {
        free(*first);       // delete that first node.
        *first = NULL;    // that node becomed NULL now.
    }
    else                                // LL contains more than 1 node
    {
        temp = *first;

        while(temp->next->next != NULL)             // type 3  till last-1
        {
            temp = temp->next;
        }
        free(temp->next);           //400 removed
        temp->next = NULL;            //temp->next should be null 
    }
}

void DeleteAtPos(PPNODE first , int iPos)
{    
    int iCount = 0, i = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount))               // removed +1
    {
        printf("Invalid Position");
        return;
    }
    
    if(iPos == 1)               // if First position
    {
        DeleteFirst(first);         // all parameters are as it is
    }
    else if(iPos == iCount)   // if Last position
    {
        DeleteLast(first);
    }
    else                    // other
    {
        temp = *first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        free(target);

        
    }
}



int main()
{
    PNODE head = NULL;                  //  head : main pointer should not be changed.        
    int iRet = 0;

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);
    iRet = Count(head);
    printf("Numbers of Nodes are : %d\n",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);
    
    Display(head);
    iRet = Count(head);
    printf("Numbers of Nodes are : %d\n",iRet);

    DeleteFirst(&head);
    
    Display(head);
    iRet = Count(head);
    printf("Numbers of Nodes are : %d\n",iRet);

    DeleteLast(&head);
    Display(head);
    iRet = Count(head);
    printf("Numbers of Nodes are : %d\n",iRet);

    InsertAtPos(&head,105,4);               // Data,pos
    Display(head);
    iRet = Count(head);
    printf("Numbers of Nodes are : %d\n",iRet);

    DeleteAtPos(&head,4);               // Data,pos
    Display(head);
    iRet = Count(head);
    printf("Numbers of Nodes are : %d\n",iRet);

    
    return 0;
}
