#include<iostream>
using namespace std ;

struct node                             // size of struct node is 8 bytes
{
    int data ;                          //  4 bytes
    struct node *next ;                 //  4 bytes
};

typedef struct node NODE ;              //  object of struct node OR Node of LL
typedef struct node* PNODE ;            //  pointer node 

class Singly
{
    public:
        PNODE head ;                    //  head pointer : to access the first node of the LL
        int iCountNode ;                    //  Varibale for Counting the elements present in the LL

        Singly()                     // Constructor
        {
            head = NULL ;
            iCountNode = 0 ;
        }

        // ~Singly()
        // {
        //     DeleteAllNode();
        // }

        int CountNode()                             // Count the elements of LL
        {
            return iCountNode ;
        }

        void InsertFirst(int iNo)            // Insert the node at starting of LL
        {
            PNODE newn = NULL ;             // new node 

            newn = new NODE;                // Dynamic memory allocation for new node

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

        void InsertLast(int iNo)                 // Insert the node at Last of LL
        {
            PNODE newn = NULL ;             // new node 
            PNODE temp = NULL ;             // temp for travelling the node

            newn = new NODE;                // Dynamic memory allocation for new node

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

        void InsertAtPos(int iNo , int iPos)                 // Insert the node at the position
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
            else if(iPos == iCountNode+1)                   // position is last
            {
                InsertLast(iNo);
            }
            else                                        // other position
            {
                int iCnt = 0 ;

                PNODE temp = NULL ;
                PNODE newn = NULL ;
    
                newn = new NODE ;

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

        void DeleteFirst()                           // Delete the first node of LL
        {
            PNODE target = NULL ;                 // target for storing the delete node into it

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

        void DeleteLast()                            // delete the last node of LL
        {
            PNODE temp = NULL ;
            PNODE target = NULL ;                 // for storing the delete node into it

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

        void DeleteAtPos(int iPos)              // delete the node from the position
        {
            int iCnt = 0 ;

            PNODE temp = NULL ;
            PNODE target = NULL ;

            if((iPos < 1) || iPos > (iCountNode))  
            {
                cout<<"Invalid Position !!! \n";
                return;
            }

            if(iPos == 1)                       // if position is 1
            {
                DeleteFirst();
            }
            else if(iPos == iCountNode)           // if position is last
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

        void Display()                          // Display the data of LL 
        {
            PNODE temp = NULL ;                 // temp for travelling the node

            temp = head ;

            while(temp != NULL)
            {
                cout<<"| "<< temp->data <<" |->";
                temp = temp->next ;
            }
            cout<<" NULL\n";
        }     

        void DeleteAllNode()
        {
            PNODE temp = NULL ;
            PNODE next = NULL ;

            temp = head;
            while (temp != NULL)
            {
                next = temp->next;
                delete temp;
                temp = next;
            }
            head = NULL;
            iCountNode = 0;
        }
};

int main()
{
    int iOption = 0 , iNo = 0 , iPos = 0 , iRet = 0  ;

    Singly sobj ;       // Object of LL

    cout<<"Singly Linked List started...\n";
    cout<<"_________________________________________________________________________\n";

    while(1)
    {
        cout<<"_________________________________________________________________________\n\n";
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
        cout<<"Enter your option : \n";
        cin>>iOption;
        cout<<"_________________________________________________________________________\n";

        if(iOption == 1)
        {
            cout<<"Enter the data : \n";
            cin>>iNo ;

            sobj.InsertFirst(iNo);
        }
        else if(iOption == 2)
        {
            cout<<"Enter the data : \n";
            cin>>iNo ;

            sobj.InsertLast(iNo);
        }
        else if(iOption == 3)
        {
            cout<<"Enter the data : \n";
            cin>>iNo ;

            cout<<"Enter the position : \n";
            cin>>iPos ;

            sobj.InsertAtPos(iNo,iPos);
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