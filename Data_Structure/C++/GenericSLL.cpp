// Generic: Singly Linear Linked List in C++
// InsetFirst logic, InsertLast, DeleteFirst, deleteLast, InsertAtPos, DeleteAtPos


#include<iostream>
using namespace std;

#pragma pack(1)

template <class T>
struct node                                 // size of structure = 12
{
    T data;
    struct node *next;
};


template <class T>
class SinglyLL                              // object size = 12
{
    private:                    // should be private: abstraction
        struct node <T> * first;
        int iCount;

    public:
        SinglyLL();                     // Default Constructor

        void Display();        
        int Count();  
        void InsertFirst(T iNo);  
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, int iPos);        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);       

};

template <class T>
SinglyLL <T>:: SinglyLL()          // return_value classname :: function name  : This is constructor so no return value
{
    this->first = NULL; 
    this->iCount = 0;                // always use this for non-static characteristics
}

template <class T>
void SinglyLL <T> :: Display()
{
    struct node <T>* temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;     
}

template <class T>
int SinglyLL <T>:: Count()
{
    return this->iCount;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T iNo)
{
    struct node <T> * newn = NULL;
    newn = new struct node <T> ;

    newn->data = iNo;
    newn->next = NULL;

    if(this->first == NULL )                //*first
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;                 
    }

    this->iCount++;              // counting the nodes after every funcion, so this is important line
}

template <class T>
void SinglyLL <T> :: InsertLast(T iNo)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;
    newn = new struct node <T>;


    newn->data = iNo;
    newn->next = NULL;

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
        
    }

    this->iCount++;              // counting the nodes after every funcion, so this is important line

}

template <class T>
void SinglyLL<T> :: InsertAtPos(T iNo, int iPos)
{
    struct node <T>* temp = NULL;
    struct node <T>* newn = NULL;
    int i = 0;  

    newn = new struct node <T> ;

    newn->data = iNo;
    newn->next = NULL;

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
        temp->next = newn; 


        this->iCount++;                             // to count number of node should be inside else
    }

}

template <class T>
void SinglyLL<T> :: DeleteFirst()
{
    struct node <T> * temp = NULL;                  // temp required 

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
        temp = this->first;             // 100     to preserve first    
        first = first->next;

        delete temp;

    }

    this->iCount--;                 // as node is deleted node count should be --
}

template <class T>
void SinglyLL <T> :: DeleteLast()
{
    struct node<T> * temp = NULL;

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
            temp = temp->next;
        }
        delete temp->next;              // delete last node
        temp->next = NULL;              // next null

    }

    this->iCount--;                 // as node is deleted node count should be --

}

template <class T>
void SinglyLL<T> :: DeleteAtPos(int iPos)
{
    struct node<T> * temp = NULL;
    struct node <T>* target = NULL;
    int i = 0;  

    if((iPos < 1 )|| (iPos > iCount))                 // filter   , removed +1
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

        target = temp->next;                // target is to delet node
        temp->next = target->next;
        delete target;

        this->iCount--;                             // to count number of node  ( counting --)  should be inside else
    }

}  


int main()
{
    SinglyLL<int> sobj; 
    int iRet = 0;  

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;
     
    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;
    
    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;

    sobj.InsertAtPos(105,4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;

    sobj.DeleteAtPos(4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are :"<<iRet<<endl;
    
    return 0;
}

