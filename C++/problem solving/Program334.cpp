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

        InsertLast(int no)
        {}

        InsertAtPos(int no , int iPos)
        {}

        DeleteFirst()
        {}

        DeleteLast()
        {}

        DeleteAtPos(int iPos)
        {}

        void Display()
        {}

        int Count()
        {
            return iCount ;
        }
};

int main()
{
    int iRet = 0;       // iRet varible to store the value of iCount 

    Singly_LL sobj ;

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";

    sobj.InsertFirst(21);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    

    return 0 ;
}

/*
    OUTPUT

    Total elements in LL are : 0
    Total elements in LL are : 3

*/