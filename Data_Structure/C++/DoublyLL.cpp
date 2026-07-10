// conversion of Doubly Linear Linked List in C++    DLL

// declare all function inside class & define them outside class...

#include<iostream>
using namespace std;

#pragma pack(1)

struct node                                 // size of structure = 12
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;


class DoublyLL                              // object size = 12
{
    private:                                 // should be private: abstraction
        PNODE first;
        int iCount;

    public:
        DoublyLL();                     // Default Constructor

        void Display();        
        int Count();  
        void InsertFirst(int iNo);  
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);       

};

DoublyLL :: DoublyLL()              // return_value classname :: function name  : This is constructor so no return value
{
    this->first = NULL; 
    this->iCount = 0;                       // always use this for non-static characteristics
}

void DoublyLL :: Display()                  // return_value classname :: function name
{
    PNODE temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }
    
    cout<<"NULL"<<endl;
}

int DoublyLL :: Count()
{
    return this->iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;      // $

    if(this->first == NULL )                //*first
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;      // $
        this->first = newn;                 
    }

    this->iCount++;              // counting the nodes after every funcion
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = new NODE;


    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;      // $

    if(this->first == NULL )                //*first
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;  
        newn->prev = temp;      // $ 
        
    }

    this->iCount++;              // counting the nodes after every funcion, so this is important line

}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i = 0;  

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((iPos < 1 )|| (iPos > iCount+1))                 // filter
    {
        cout<<"Invalid Position";
        return;     
    }

    if(iPos == 1)                                   // at first
    {
        this->InsertFirst(iNo);                     // behaviour called with this operator
    }
    else if(iPos == iCount+1)                       // at last
    {
        this->InsertLast(iNo);
    }
    else                                            // in between
    {
        temp = this->first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;        // $
        temp->next = newn;
        newn->prev = temp;              // $

        this->iCount++;                             // to count number of node should be inside else
    }

}

void DoublyLL :: DeleteFirst()
{
    
    if(this->first == NULL)                 //LL Empty
    {
        return;
    }
    else if(this->first->next == NULL)      // 1 node
    {
        delete this->first;                 // delete first
        this->first = NULL;                 
    }
    else                                    // more than 1 node
    {
        this->first = this->first->next;             
        delete this->first->prev;                   //$
        this->first->prev = NULL;                   //$        
    }

    this->iCount--;                 // as node is deleted node count should be --

}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this->first == NULL)                 //LL Empty
    {
        return;
    }
    else if(this->first->next == NULL)      // 1 node
    {
        delete this->first;                 // delete first
        this->first = NULL;                 
    }
    else                                    // more than 1 node
    {
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }
        delete temp->next ;
        temp->next = NULL;

    }

    this->iCount--;         // Count number of nodes--
}
        
void DoublyLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    
    int i = 0;  

    if((iPos < 1 )|| (iPos > iCount))                 // filter
    {
        cout<<"Invalid Position";
        return;     
    }

    if(iPos == 1)                                   // at first
    {
        this->DeleteFirst();                     // behaviour called with this operator
    }
    else if(iPos == iCount)                       // at last
    {
        this->DeleteLast();
    }
    else                                            // in between
    {
        temp = this->first;
        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;        // $

        this->iCount--; 
    }       

    
}  


int main()
{
    DoublyLL dobj; 
    int iRet = 0;  

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;
    
    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;
        
    dobj.InsertAtPos(105,4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;
    
    return 0;
}

