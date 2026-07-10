// conversion of Singly Linear Linked List in C++

// declare all function inside class & define them outside class...

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
    cout<<"Inside Constructor\n";
    this->first = NULL; 
    this->iCount = 0;                // always use this for non-static characteristics
}

void SinglyLL :: Display()
{}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{}

void SinglyLL :: InsertLast(int iNo)
{}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}
        
void SinglyLL :: DeleteAtPos(int iPos)
{}  


int main()
{
    SinglyLL sobj;   

        
    
    return 0;
}

