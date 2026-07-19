/*
    Doubly Circular Linked List using C++.
    Operations: InserFirst,InsertLast,Display, count,DeleteFirst, DeleteLast,InsertAtPos,DeleteAtPos

*/

#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};


#pragma pack(1)
template<class T>
class DoublyCL
{
    private :
        struct node<T>* first;
        struct node<T>* last;
        int iCount;

    public:
        DoublyCL();  
        
        void Display();
        int Count();

        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);            

};

template<class T>
DoublyCL <T>:: DoublyCL()  
{
    cout<<"Inside Constructor\n";

    first = NULL;               // this is not used here
    last = NULL;
    iCount = 0;
}        

template<class T>
void DoublyCL <T> :: Display()
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
template<class T>
int DoublyCL <T>:: Count()
{
    return iCount;
}

template<class T>
void DoublyCL <T> :: InsertFirst(T iNo)
{
    struct node<T>* newn = NULL;
    newn = new struct node<T>;

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

template<class T>
void DoublyCL <T> :: InsertLast(T iNo)
{
    struct node<T>* newn = NULL;
    newn = new struct node <T>;

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

template<class T>
void DoublyCL <T> :: InsertAtPos(T iNo, int iPos)
{
    int i = 0;
    struct node <T>* newn = NULL;
    struct node <T>* temp = NULL;

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
        newn = new struct node <T>;
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

template<class T>
void DoublyCL <T>:: DeleteFirst()
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

template<class T>
void DoublyCL <T>:: DeleteLast()
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

template<class T>
void DoublyCL <T> :: DeleteAtPos(int iPos)
{
    int i = 0;
    struct node <T>* temp = NULL;

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
    DoublyCL<int> dobj;    
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