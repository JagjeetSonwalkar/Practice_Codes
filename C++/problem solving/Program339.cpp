#include<iostream>
using namespace std ;

struct node                             // size of struct node is 8 bytes
{
    int data ;                          //  4 bytes
    struct node *next ;                 //  4 bytes
};

typedef struct node NODE ;              //  object of struct node OR Node of LL
typedef struct node* PNODE ;            //  pointer node 
typedef struct node** PPNODE ;          //  pointer to pointer node

class Singly_LL
{
    public:
        PNODE head ;                    //  head pointer : to access the first node of the LL
        int iCount ;                    //  Varibale for Counting the elements present in the LL

        Singly_LL()                     // Constructor
        {
            head = NULL ;
            iCount = 0 ;
        }

        int Count()                             // Count the elements of LL
        {
            return iCount ;
        }

        void InsertFirst(int no)            // Insert the node at starting of LL
        {
            PNODE newn = NULL ;             // new node 

            newn = new NODE;                // Dynamic memory allocation for new node

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

        InsertLast(int no)                 // Insert the node at Last of LL
        {
            PNODE newn = NULL ;             // new node 
            PNODE temp = NULL ;             // temp for travelling the node

            newn = new NODE;                // Dynamic memory allocation for new node

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

        void InsertAtPos(int no , int iPos)
        {
            int iCnt = 0 ;

            PNODE temp = NULL ;
            PNODE newn = NULL ;

            if((iPos < 1) || iPos > (iCount+1))
            {
                cout<<"Invalid Position !!! \n";
                return;
            }

            if(iPos == 1)
            {
                InsertFirst(no);
            }
            else if(iPos == iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new NODE ;

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

        DeleteFirst()                           // Delete the first node of LL
        {
            PNODE temp = NULL ;                 // temp for storing the delete node into it

            if(head == NULL)                   // if LL is empty
            {
                cout<<"LL is empty!! \n";
                return 0 ;
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

        DeleteLast()                            // delete the last node of LL
        {
            PNODE temp = NULL ;
            PNODE target = NULL ;                 // for storing the delete node into it

            if(head == NULL)                   // if LL is empty
            {
                cout<<"LL is empty!! \n";
                return 0 ;
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

        void Display()                          // Display the data of LL 
        {
            PNODE temp = NULL ;                 // temp for travelling the node

            temp = head ;

            cout<<"Elements of LL are : \n";

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next ;
            }
            cout<<" NULL\n";
        }

        DeleteAtPos(int iPos)
        {}       
};

int main()
{
    int iRet = 0;       // iRet varible to store the value of iCount 

    Singly_LL sobj ;    // Object of LL

    sobj.InsertFirst(21);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    sobj.InsertLast(30);
    sobj.InsertLast(31);
    sobj.InsertLast(32);

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    sobj.InsertAtPos(100,4);

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";

    sobj.Display();

    return 0 ;
}

/*
    OUTPUT

    Total elements in LL are : 6
    Elements of LL are :
    | 10 |->| 20 |->| 21 |->| 30 |->| 31 |->| 32 |-> NULL
    Total elements in LL are : 7
    Elements of LL are :
    | 10 |->| 20 |->| 21 |->| 100 |->| 30 |->| 31 |->| 32 |-> NULL

*/