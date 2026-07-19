// conversion of Doubly Linear Linked List in C++    DLL

// declare all function inside class & define them outside class...

#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>
struct node                                 // size of structure = 12
{
    int data;
    struct node <T>*next;
    struct node <T>*prev;
};

template<class T>
class DoublyLL                              // object size = 12
{
    private:                                 // should be private: abstraction
        struct node <T> * first;
        int iCount;

    public:
        DoublyLL();                     // Default Constructor

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
DoublyLL<T> :: DoublyLL()              // return_value classname :: function name  : This is constructor so no return value
{
    this->first = NULL; 
    this->iCount = 0;                       // always use this for non-static characteristics
}

template<class T>
void DoublyLL <T> :: Display()                  // return_value classname :: function name
{
    struct node<T> * temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }
    
    cout<<"NULL"<<endl;
}

template<class T>
int DoublyLL <T> :: Count()
{
    return this->iCount;
}

template<class T>
void DoublyLL<T> :: InsertFirst(T iNo)
{
    struct node <T>*  newn = NULL;
    newn = new struct node<T>;

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


template<class T>
void DoublyLL <T>:: InsertLast(T iNo)
{
    struct node <T>* newn = NULL;
    struct node <T>* temp = NULL;
    newn = new struct node<T>;

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

template<class T>
void DoublyLL <T>:: InsertAtPos(T iNo, int iPos)
{
    struct node <T> * temp = NULL;
    struct node <T>* newn = NULL;
    int i = 0;  

    newn = new struct node <T>;

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

template<class T>
void DoublyLL <T> :: DeleteFirst()
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

template<class T>
void DoublyLL <T>:: DeleteLast()
{
    struct node <T>* temp = NULL;

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

template <class T>
void DoublyLL <T>:: DeleteAtPos(int iPos)
{
    struct node <T>* temp = NULL;
    
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
    DoublyLL<int> dobj; 
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

