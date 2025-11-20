#include<iostream>
using namespace std ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct node                             // size of struct node is 8 bytes
{
    T data ;                          //  4 bytes
    struct node *next ;                 //  4 bytes
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
class Singly_LL
{
    public:
        struct node<T> * head ;                    //  head pointer : to access the first node of the LL
        int iCount ;                            //  Varibale for Counting the elements present in the LL

        Singly_LL() ;                           // Constructor Defination

        // Function's Defination
        int Count();                             // Count the elements of LL
        void InsertFirst(T no);                  // Insert the node at starting of LL
        void InsertLast(T no);                   // Insert the node at Last of LL
        void InsertAtPos(T no , int iPos);       // Insert the node at the position
        void DeleteFirst();                      // Delete the first node of LL
        void DeleteLast();                       // delete the last node of LL
        void DeleteAtPos(int iPos);              // delete the node from the position
        void Display();                          // Display the data of LL      
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////                                                                                                                                               /////////
/////////                                                Construction & Function's Declaration                                                          /////////
/////////                                                                                                                                               /////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
Singly_LL<T> :: Singly_LL()                     // Constructor
{
    head = NULL ;
    iCount = 0 ;
}

template<class T>
int Singly_LL<T> ::  Count()                             // Count the elements of LL
{
    return iCount ;
}

template<class T>
void Singly_LL<T> ::  InsertFirst(T no)            // Insert the node at starting of LL
{
    struct node<T> * newn = NULL ;             // new node 

    newn = new (struct node<T>);                // Dynamic memory allocation for new node

    newn->data = no ;
    newn->next = NULL ;

    if(head == NULL)               // if LL is empty
    {
        head = newn ;
    }
    else                            // if LL contain more than 1 node 
    {
        newn->next = head ;
        head = newn ;
    }
    iCount++ ;
}

template<class T>
void Singly_LL<T> ::  InsertLast(T no)                 // Insert the node at Last of LL
{
    struct node<T> * newn = NULL ;             // new node 
    struct node<T> * temp = NULL ;             // temp for travelling the node

    newn = new (struct node<T>);                // Dynamic memory allocation for new node

    newn->data = no ;
    newn->next = NULL ;

    if(head == NULL)               // if LL is empty
    {
        head = newn ;
    }
    else                            // if LL contain more than 1 node 
    {
        temp = head ;

        while(temp->next != NULL)
        {
            temp = temp -> next ;
        }
        temp->next = newn ;
    }
    iCount++ ;
}

template<class T>
void Singly_LL<T> ::  DeleteFirst()                           // Delete the first node of LL
{
    struct node<T> * temp = NULL ;                 // temp for storing the delete node into it

    if(head == NULL)                   // if LL is empty
    {
        cout<<"LL is empty!! \n";
        return  ;
    }
    else if(head->next == NULL)         // if LL contain 1 node only
    {
        delete head ;
        head = NULL ;
    }
    else                                // if LL contain more than 1 node
    {
        temp = head ;

        head = head->next ;
        delete temp ;
    }
    iCount-- ;                  
}

template<class T>
void Singly_LL<T> :: DeleteLast()                            // delete the last node of LL
{
    struct node<T> * temp = NULL ;
    struct node<T> * target = NULL ;                 // for storing the delete node into it

    if(head == NULL)                   // if LL is empty
    {
        cout<<"LL is empty!! \n";
        return ;
    }
    else if(head->next == NULL)         // if LL contain 1 node only
    {
        delete head ;
        head = NULL ;
    }
    else                                // if LL contain more than 1 node
    {
        temp = head ;

        while(temp->next->next != NULL)
        {
            temp = temp->next ;
        }
        target = temp->next ;
        temp->next = NULL ;
        delete target ;
    }
    iCount-- ; 
}

template<class T>
void Singly_LL<T> :: DeleteAtPos(int iPos)              // delete the node from the position
{
    int iCnt = 0 ;

    struct node<T> * temp = NULL ;
    struct node<T> * target = NULL ;

    if((iPos < 1) || iPos > (iCount+1))  
    {
        cout<<"Invalid Position !!! \n";
        return;
    }

    if(iPos == 1)                       // if position is 1
    {
        DeleteFirst();
    }
    else if(iPos == iCount+1)           // if position is last
    {
        DeleteLast();
    }
    else                                // Other position
    {
        temp = head ;

        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp -> next ;
        }
        target = temp->next ;
        temp->next = target->next ;
        delete target ;
        
        iCount-- ;
    }       
} 

template<class T>
void Singly_LL<T> :: InsertAtPos(T no , int iPos)                 // Insert the node at the position
{
    int iCnt = 0 ;

    struct node<T> * temp = NULL ;
    struct node<T> * newn = NULL ;

    if((iPos < 1) || iPos > (iCount+1))
    {
        cout<<"Invalid Position !!! \n";
        return;
    }

    if(iPos == 1)                               // position is 1
    {
        InsertFirst(no);
    }
    else if(iPos == iCount+1)                   // position is 2
    {
        InsertLast(no);
    }
    else                                        // other position
    {
        newn = new (struct node<T>) ;

        newn->data = no ;
        newn->next = NULL ;

        temp = head ;

        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp -> next ;
        }
        newn->next = temp->next ;
        temp->next = newn ;

        iCount++ ;
    }       
}

template<class T>
void Singly_LL<T> :: Display()                          // Display the data of LL 
{
    struct node<T> * temp = NULL ;                 // temp for travelling the node

    temp = head ;

    cout<<"Elements of LL are : \n";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next ;
    }
    cout<<" NULL\n";
} 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;       // iRet varible to store the value of iCount 

    Singly_LL <float> sobj ;    // Object of LL

    sobj.InsertFirst(21.25f);
    sobj.InsertFirst(20.30f);
    sobj.InsertFirst(10.25f);
    sobj.InsertFirst(1.22f);

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    sobj.InsertLast(30.11f);
    sobj.InsertLast(31.24f);
    sobj.InsertLast(32.25f);
    sobj.InsertLast(11.11f);

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    sobj.DeleteFirst();

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    sobj.DeleteLast();

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    sobj.InsertAtPos(0000.00f,4);
    sobj.InsertAtPos(1111.1f,5);

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    sobj.DeleteAtPos(5);

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    return 0 ;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    OUTPUT

    Total elements in LL are : 4
    Elements of LL are :
    | 1.22 |->| 10.25 |->| 20.3 |->| 21.25 |-> NULL
    Total elements in LL are : 8
    Elements of LL are :
    | 1.22 |->| 10.25 |->| 20.3 |->| 21.25 |->| 30.11 |->| 31.24 |->| 32.25 |->| 11.11 |-> NULL
    Total elements in LL are : 7
    Elements of LL are :
    | 10.25 |->| 20.3 |->| 21.25 |->| 30.11 |->| 31.24 |->| 32.25 |->| 11.11 |-> NULL
    Total elements in LL are : 6
    Elements of LL are :
    | 10.25 |->| 20.3 |->| 21.25 |->| 30.11 |->| 31.24 |->| 32.25 |-> NULL
    Total elements in LL are : 8
    Elements of LL are :
    | 10.25 |->| 20.3 |->| 21.25 |->| 0 |->| 1111.1 |->| 30.11 |->| 31.24 |->| 32.25 |-> NULL
    Total elements in LL are : 7
    Elements of LL are :
    | 10.25 |->| 20.3 |->| 21.25 |->| 0 |->| 30.11 |->| 31.24 |->| 32.25 |-> NULL

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
