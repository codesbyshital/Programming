// conversion of Singly Linear Linked List in C++    

// declare all function inside class & define them outside class...  ( design pattern)

// InsetFirst logic, InsertLast, DeleteFirst, deleteLast, InsertAtPos, DeleteAtPos

// Switch case : 


#include<iostream>
using namespace std;

#pragma pack(1)

struct node                                 // size of structure = 12
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;



class SinglyLL                              // object size = 12
{
    private:                    // should be private: abstraction
        PNODE first;
        int iCount;

    public:
        SinglyLL();                     // Default Constructor

        void Display();        
        int Count();  
        void InsertFirst(int iNo);  
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);       

};

SinglyLL :: SinglyLL()          // return_value classname :: function name  : This is constructor so no return value
{
    this->first = NULL; 
    this->iCount = 0;                // always use this for non-static characteristics
}

void SinglyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;     
}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

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

void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = new NODE;


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

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i = 0;  

    newn = new NODE;

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

void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;                  // temp required 

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

void SinglyLL :: DeleteLast()
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
            temp = temp->next;
        }
        delete temp->next;              // delete last node
        temp->next = NULL;              // next null

    }

    this->iCount--;                 // as node is deleted node count should be --

}
        
void SinglyLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
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
    SinglyLL sobj; 
    int iChoice = 0; 
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while(iChoice != 9)                    //unconditional loop till we break it.
    {
        cout<<"------------------------------------------\n";
        cout<<" SINGLY LINEAR LINKED LIST OPERATION MENU : \n";
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
                cout<<"Elements of Linked List are :\n";
                sobj.Display();
                break;

            case 8:                
                iRet = sobj.Count();
                cout<<"Number of Nodes in Linked List are :"<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using Marvellous Infosystem Application\n";
                break;

            default :
                cout<<"Invalid Choice";

        }

    }
    
    return 0;
}

