#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;              //$
};

typedef node NODE;
typedef struct node * PNODE;

class DoublyLL                              // object size = 12
{
    private:                                 // should be private: abstraction
        PNODE first;
        int iCount;

    public:
        DoublyLL();                     // Default Constructor declaration

        // Declaration of all functions
        void Display();        
        int Count();  
        void InsertFirst(int iNo);  
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);       

};

//Defination of all functions.
DoublyLL :: DoublyLL()              // Default Constructor defination
{
    this->first = NULL; 
    this->iCount = 0;                       
}

void DoublyLL :: Display()
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
    newn->prev = NULL;                          //$

    if(this->first == NULL)
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

    this->iCount++;              // counting the nodes after every funcion
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
        cout<<"Invalid Position\n";
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
        cout<<"Invalid Position\n";
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
    DoublyLL sobj; 
    int iChoice = 0; 
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while(iChoice != 9)                    //conditional loop till choice 9(exit).
    {
        cout<<"------------------------------------------\n";
        cout<<" DOUBLY LINEAR LINKED LIST OPERATION MENU : \n";
        cout<<"------------------------------------------\n";
        cout<<"1 :  Insert node at First position\n";
        cout<<"2 :  Insert node at Last position\n";
        cout<<"3 :  Insert node at given position\n";
        cout<<"4 :  Delete node at First position\n";
        cout<<"5 :  Delete node at Last position\n";
        cout<<"6 :  Delete node at given position\n";
        cout<<"7 :  Display the Nodes\n";
        cout<<"8 :  Count the number of elements\n";
        cout<<"9 :  Exit\n";
        cout<<"-----------------------------------------\n";
        cout<<"Enter your choice : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the Value :\n";
                cin>>iValue;

                sobj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the Value :\n";
                cin>>iValue;

                sobj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the Value :\n";
                cin>>iValue;

                cout<<"Enter the Position :\n";
                cin>>iPosition;

                sobj.InsertAtPos(iValue,iPosition);
                break;

            case 4:
                sobj.DeleteFirst();
                break;

            case 5:
                sobj.DeleteLast();
                break;
            
            case 6:
                
                cout<<"Enter the Position :\n";
                cin>>iPosition;

                sobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout<<"Elements of Doubly Linked List are :\n";
                sobj.Display();
                break;

            case 8:                
                iRet = sobj.Count();
                cout<<"Number of Nodes in Doubly Linked List are :"<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using Marvellous Infosystem Application\n";
                break;

            default :
                cout<<"Invalid Choice\n";

        }
    
    }
    return 0;

}