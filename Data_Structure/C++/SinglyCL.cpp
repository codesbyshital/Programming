/*
    Singly Circular Linked List.
    Operations : InsertFirst, InserLast, InsertAtPos, Display, Count, DeleteFirst, DeleteLast, DeleteAtPos.

*/

#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    private :
        PNODE first;
        PNODE last;
        int iCount;
    public:
        SinglyCL();  
        
        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

};

SinglyCL :: SinglyCL()
{
    
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void SinglyCL :: Display()
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | ->";
        temp = temp->next;
        
    } while(last->next != temp);                    // similar to (*last)->next != *first

    cout<<"\n";  

}

int SinglyCL :: Count()
{
    return this->iCount;
}

void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data= iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;

        
    }

    last->next = first;                 // for circular main condition

    iCount++;               // counter should increament

}

void SinglyCL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data= iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;

    iCount++;               // counter should increament

}

void SinglyCL :: InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;
    

    if((iPos < 1) || (iPos > iCount+1))             //Filter
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)                                   // at first position
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount+1)                       // at last
    {
        InsertLast(iNo);
    }
    else                                            // in between position
    {
        temp = first;
        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;   

       
        for(i = 1; i < iPos -1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

    }     
    iCount++;               // counter should increament

}

void SinglyCL :: DeleteFirst()
{

    if(first == NULL && last == NULL)         // Empty 
    {
        return;
    }
    else if(first == last)                   //1 node
    {
        free(first);
        first = NULL;                          // make list NULL
        last = NULL;
    }
    else                                    // more than 1 node
    {        
        first = first->next;                    // head 200
        free(last->next);                    // last->next means first(temp)

        last->next = first;                     // no effect sentence

    }

    iCount--;               // counter should decrement
    
}

void SinglyCL :: DeleteLast()
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)         // Empty 
    {
        return;
    }
    else if(first == last)                   //1 node
    {
        free(first);
        first = NULL;                          // make list NULL
        last = NULL;
    }
    else                                    // more than 1 node
    {        
        temp = first;                       //100
        while(temp->next != last)                  // traverse till 1 node befire(2nd last)
        {
            temp = temp->next;
        }

        free(last);                    // free(temp->next);
        last = temp;                   // rename temp as last

        last->next = first;
    }

    iCount--;               // counter should decrement
}

void SinglyCL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;    
    PNODE target = NULL;
    int i = 0;   

    if((iPos < 1) || (iPos > iCount))             //Filter
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)                                   // at first position
    {
        DeleteFirst();
    }
    else if(iPos == iCount)                       // at last
    {
        DeleteLast();
    }
    else                                            // in between position
    {
        temp = first;
        
        for(i = 1; i < iPos -1; i++)
        {
            temp = temp->next;
        }
        target = temp->next;

        temp->next = target->next;
        free(target);
        
    }

    iCount--;               // counter should decrement
}


int main()
{
    SinglyCL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    sobj.DeleteFirst();
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    sobj.DeleteLast();
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    sobj.InsertAtPos(105,4);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    sobj.DeleteAtPos(4);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";


    return 0;
}