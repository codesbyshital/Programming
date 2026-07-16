/*
    Doubly Circular Linked List using C++.
    Operations: InserFirst,InsertLast,Display, count,DeleteFirst, DeleteLast,InsertAtPos,DeleteAtPos

*/

#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

#pragma pack(1)
class DoublyCL
{
    private :
        PNODE first;
        PNODE last;
        int iCount;

    public:
        DoublyCL();  
        
        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);            

};

DoublyCL :: DoublyCL()  
{
    cout<<"Inside Constructor\n";

    first = NULL;               // this is not used here
    last = NULL;
    iCount = 0;
}        

void DoublyCL :: Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    
    cout<<" <=> ";
    do
    {
        cout<<"| "<<first->data<<" | <=> ";
        first = first->next;

    } while (first != last->next);

    cout<<"\n";
}

int DoublyCL :: Count()
{
    return iCount;
}

void DoublyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;

    }

    last->next = first;                 // Common code
    first->prev = last;

    iCount++;                   // node count should increment.
}

void DoublyCL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else                    //1 node
    {
        last->next = newn;
        newn->prev = last;
        last = newn;

    }

    last->next = first;                 // Common code
    first->prev = last;

    iCount++;                   // node count should increment.

}

void DoublyCL :: InsertAtPos(int iNo, int iPos)
{
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new NODE;
        newn->data = iNo;
        newn->prev = NULL;
        newn->next = NULL;

        temp = first;
        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }

    iCount++;                   // node count should increment.
}

void DoublyCL :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);
        first = NULL;
        last = NULL;
    }
    else
    {
       first = first->next;
        free(first->prev);
        
        last->next = first;             // common code
        first->prev = last; 
    }

    iCount--;
}

void DoublyCL :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);
        first = NULL;
        last = NULL;
    }
    else
    {
       last = last->prev;
       free(last->next);

       last->next = first;             // common code
       first->prev = last; 
    }

    iCount--;
}

void DoublyCL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;
        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

    }

    iCount--;      
}  



int main()
{
    DoublyCL dobj;

    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);


    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes in Doubly Circular Linked List are :"<<iRet<<endl;

    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes in Doubly Circular Linked List are :"<<iRet<<endl;

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes in Doubly Circular Linked List are :"<<iRet<<endl;
    
    dobj.InsertAtPos(105,4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes in Doubly Circular Linked List are :"<<iRet<<endl;
    
    dobj.DeleteAtPos(4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes in Doubly Circular Linked List are :"<<iRet<<endl;
        
    return 0;
}