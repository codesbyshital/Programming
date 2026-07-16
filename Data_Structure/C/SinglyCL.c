/*
Singly Circular LL using C:
Operations : InsertFirst,InsertLast,Display, Count, DeleteFirst without temp, delete last,
InsertAtPos, deleteAtPos
*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)                 // refers to structure only, we can write this for class as well
struct node
{
    int data;
    struct node * next;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first, PNODE last)                   // issue in the defination
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    do
    {
        printf("| %d | -> ",first->data);
        first = first->next;
        
    } while (first != last->next);                  // last -> first

    printf("\n");
    
    
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        return iCount;
    }

    do
    {
        iCount++;
        first = first->next;
        
    } while (first != last->next);                  // last -> first

    return iCount;
    
}

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)         // if empty, both are null  : case:1 diagram
    {
        *first = newn;                          
        *last = newn;        
    }
    else                                        // 1 or more nodes
    {
        newn->next = *first;
        *first = newn;
    }

    (*last)->next = *first;                 //  tail points to next, Important line for all functions which indicated to circulat LL

}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)         // if empty, both are null  : case:1 diagram
    {
        *first = newn;                          
        *last = newn;        
    }
    else                                        // 1 or more nodes
    {
        (*last)->next = newn;                   //tail->next = newn  & newn now becomes last
        *last= (*last)->next;
    }

    (*last)->next = *first;                 //  tail points to next  , no side effect 

}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{
    PNODE temp = NULL;
    int i = 0, iCount = 0;
    PNODE newn = NULL;

    iCount = Count(*first,*last);

    if((iPos < 1) || (iPos > iCount+1))             //Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)                                   // at first position
    {
        InsertFirst(first,last,iNo);
    }
    else if(iPos == iCount+1)                       // at last
    {
        InsertLast(first,last,iNo);
    }
    else                                            // in between position
    {
        temp = *first;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

    }
}

void DeleteFirst(PPNODE first,PPNODE last)
{
    
    if(*first == NULL && *last == NULL)         // Empty 
    {
        return;
    }
    else if(*first == *last)                  //1 node
    {
        free(*first);
        *first = NULL;                          // make list NULL
        *last = NULL;
    }
    else                                    // more than 1 node
    {        
        *first = (*first) ->next;               // head 200
        free((*last)->next);                    // last->next means first(temp)

        (*last)->next = *first;                     // no effect sentence

    }

}

void DeleteLast(PPNODE first,PPNODE last)               // need traversal using while
{
    PNODE temp = NULL;

    if(*first == NULL && *last == NULL)         // Empty 
    {
        return;
    }
    else if(*first == *last)                    //1 node
    {
        free(*first);
        *first = NULL;                          // make list NULL
        *last = NULL;
    }
    else                                    // more than 1 node
    {
        temp = *first;          //100
        while(temp->next != *last)                  // traverse till 1 node befire(2nd last)
        {
            temp = temp->next;
        }

        free(*last);                    // free(temp->next);
        *last = temp;                   // rename temp as last

        (*last)->next = *first;

    }
}

void DeleteAtPos(PPNODE first,PPNODE last,int iPos)  // similar to SinglyLL
{
    PNODE temp = NULL;    
    PNODE target = NULL;
    int i = 0, iCount = 0;

    iCount = Count(*first,*last);

    if((iPos < 1) || (iPos > iCount))             //Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)                                   // at first position
    {
        DeleteFirst(first,last);
    }
    else if(iPos == iCount)                       // at last
    {
        DeleteLast(first,last);
    }
    else                                            // in between position
    {
        temp = *first;
        
        for(i = 1; i < iPos -1; i++)
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
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet = 0;
       
    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes in Singly Circular LL are : %d\n",iRet);

    DeleteFirst(&head,&tail);
    
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes in Singly Circular LL are : %d\n",iRet);

    DeleteLast(&head,&tail);
    
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes in Singly Circular LL are : %d\n",iRet);

    InsertAtPos(&head,&tail,105,4);
    
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes in Singly Circular LL are : %d\n",iRet);

    DeleteAtPos(&head,&tail,4);
    
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes in Singly Circular LL are : %d\n",iRet);

    return 0;
}
