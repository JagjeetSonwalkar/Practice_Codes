/*
    1> First remove all typedef.
    2> use template when it required.
    3> make function Defination and function declaration seprate
    4> write template<class T> on every class and function (defination proveded function)  
    5> if inside any function or class there is any permivtive data type which is neccesary to change with T then chnage.
    6> change the function(defination provided) into [ return_datatype class_Name<T> :: function_name()]
    7> if we use any struct in any function then use <T> in it, for example : struct node <T> head = NULL ;
    8> In main function , if we create a object of any template class then specifie the datatype also for example : Demo <int> obj;
*/

#include<iostream>
using namespace std ;

template <class T>
struct node                             
{
    T data ;                          
    struct node *next ;                 
};

template<class T>
class Singly
{
    public:
        struct node<T>* head ;                   
        T iCountNode ;                   

        Singly();                               // constructor
        int CountNode();                        // Count the elements of LL
        void InsertFirst(T iNo);              // Insert the node at starting of LL
        void InsertLast(T iNo);               // Insert the node at Last of LL
        void InsertAtPos(T iNo , int iPos);   // Insert the node at the position
        void DeleteFirst();                     // Delete the first node of LL
        void DeleteLast();                      // delete the last node of LL
        void DeleteAtPos(int iPos);             // delete the node from the position
        void Display();                         // Display the data of LL 
        void DeleteAllNode();                   // Delete All nodes
};

template<class T>
Singly<T> :: Singly()                   
{
    head = NULL ;
    iCountNode = 0 ;
}

template<class T>
int Singly<T> :: CountNode()                             // Count the elements of LL
{
    return iCountNode ;
}

template<class T>
void Singly<T> :: InsertFirst(T iNo)            // Insert the node at starting of LL
{
    struct node<T>* newn = NULL ;             // new node 

    newn = new (struct node<T>);                // Dynamic memory allocation for new node

    newn->data = iNo ;
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
    iCountNode++ ;
}

template<class T>
void Singly<T> :: InsertLast(T iNo)                 // Insert the node at Last of LL
{
    struct node<T>* newn = NULL ;             // new node 
    struct node<T>* temp = NULL ;             // temp for travelling the node

    newn = new (struct node <T>);                // Dynamic memory allocation for new node

    newn->data = iNo ;
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
    iCountNode++ ;
}

template<class T>
void Singly<T> :: InsertAtPos(T iNo , int iPos)                 // Insert the node at the position
{
    if((iPos < 1) || iPos > (iCountNode+1))
    {
        cout<<"Invalid Position !!! \n";
        return;
    }
    else if(iPos == 1)                               // position is 1
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCountNode+1)                   // position is 2
    {
        InsertLast(iNo);
    }
    else                                        // other position
    {
        int iCnt = 0 ;

        struct node<T>* temp = NULL ;
        struct node<T>* newn = NULL ;

        newn = new (struct node <T>) ;

        newn->data = iNo ;
        newn->next = NULL ;

        temp = head ;

        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp -> next ;
        }
        newn->next = temp->next ;
        temp->next = newn ;

        iCountNode++ ;
    }       
}

template<class T>
void Singly<T> :: DeleteFirst()                           // Delete the first node of LL
{
    struct node<T>* target = NULL ;                 // target for storing the delete node into it

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
        target = head ;

        head = head->next ;
        delete target ;
    }
    iCountNode-- ;                  
}

template<class T>
void Singly<T> :: DeleteLast()                            // delete the last node of LL
{
    struct node<T>* temp = NULL ;
    struct node<T>* target = NULL ;                 // for storing the delete node into it

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
    iCountNode-- ; 
}

template<class T>
void Singly<T> :: DeleteAtPos(int iPos)              // delete the node from the position
{
    int iCnt = 0 ;

    struct node<T>* temp = NULL ;
    struct node<T>* target = NULL ;

    if((iPos < 1) || iPos > (iCountNode+1))  
    {
        cout<<"Invalid Position !!! \n";
        return;
    }

    if(iPos == 1)                       // if position is 1
    {
        DeleteFirst();
    }
    else if(iPos == iCountNode+1)           // if position is last
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
        
        iCountNode-- ;
    }       
} 

template<class T>
void Singly<T> :: Display()                          // Display the data of LL 
{
    struct node<T>* temp = NULL ;                 // temp for travelling the node

    temp = head ;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next ;
    }
    cout<<" NULL\n";
}     

template<class T>
void Singly<T> :: DeleteAllNode()
{
    struct node<T>* temp = head;
    while (temp != NULL)
    {
        struct node<T>* next = temp->next;
        delete temp;
        temp = next;
    }
    head = NULL;
    iCountNode = 0;
}

int main()
{
    int iOption = 0 , iPos = 0 , iRet = 0  ;

    // int No = 0 ;
    // double No = 0.0d ;
    // float No = 0.0f ;
    char No = '\0' ;


    Singly <char> sobj ;       // Object of LL

    while(1)
    {
        cout<<"_________________________________________________________________________\n";
        cout<<"Singly Linked List started...\n";
        cout<<"_________________________________________________________________________\n";
        cout<<"1 Insert Element at first position\n";
        cout<<"2 Insert Element at Last position\n";
        cout<<"3 Insert Element at Required position, (position start with 1)\n";
        cout<<"4 Delete first node \n";
        cout<<"5 Delete last node \n";
        cout<<"6 Delete node from Required position, (position start with 1)\n";
        cout<<"7 Display Linked List\n";
        cout<<"8 Count of Total elemnets present in Linked List\n";
        cout<<"9 Delete all elements from the Linked List\n";
        cout<<"10 Terminate the Application\n";
        cout<<"_________________________________________________________________________\n";
        cout<<"Enter you option : \n";
        cin>>iOption;
        cout<<"_________________________________________________________________________\n";

        if(iOption == 1)
        {
            cout<<"Enter the data : \n";
            cin>>No ;

            sobj.InsertFirst(No);
        }
        else if(iOption == 2)
        {
            cout<<"Enter the data : \n";
            cin>>No ;

            sobj.InsertLast(No);
        }
        else if(iOption == 3)
        {
            cout<<"Enter the data : \n";
            cin>>No ;

            cout<<"Enter the position : \n";
            cin>>iPos ;

            sobj.InsertAtPos(No,iPos);
        }
        else if(iOption == 4)
        {
            sobj.DeleteFirst();
        }
        else if(iOption == 5)
        {
            sobj.DeleteLast();
        }
        else if(iOption == 6)
        {
            cout<<"Enter the position : \n";
            cin>>iPos ;

            sobj.DeleteAtPos(iPos);
        }
        else if(iOption == 7)
        {
            sobj.Display();
        }
        else if(iOption == 8)
        {
            iRet = sobj.CountNode();
            cout<<"Total nodes in LL are : "<<iRet<<"\n";
        }
        else if(iOption == 9)
        {
            sobj.DeleteAllNode();
        }
        else if(iOption == 10)
        {
            cout<<"Application is terminated.\n";
            break;
        }
        else
        {
            cout<<"Invalid option !!! \n";
        }
    }
    return 0 ;
}