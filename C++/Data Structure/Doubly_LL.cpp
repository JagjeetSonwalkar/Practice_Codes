#include<iostream>
using namespace std ;

struct node
{
    int data ;
    struct node* prev ;
    struct node* next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;

class Doubly
{
    public:
        PNODE head ;
        int iCountNode ;

        Doubly()
        {
            head = NULL ;
            iCountNode = 0 ;
        }

        int CountNode()
        {
            return iCountNode ;
        }

        void InsertFirst(int iNo)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = iNo ;
            newn->next = NULL ;
            newn->prev = NULL ;

            if(head == NULL)
            {
                head = newn ;
            }
            else 
            {
                newn->next = head ;
                head->prev = newn ;
                head = newn ;
            }

            iCountNode++ ;
        }

        void InsertLast(int iNo)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = iNo ;
            newn->next = NULL ;
            newn->prev = NULL ;

            if(head == NULL)
            {
                head = newn ;
            }
            else 
            {
                PNODE temp = NULL ;

                temp = head ;

                while(temp->next != NULL)
                {
                    temp = temp->next ;
                }
                newn->prev = temp ;
                temp->next = newn ;
            }
            iCountNode++ ;
        }

        void DeleteFirst()
        {
            if(head == NULL)
            {
                cout<<"Linked List is empty !";
                return ;
            }
            else if(head->next == NULL)
            {
                delete (head);
                head = NULL ;
            }
            else
            {
                PNODE target = NULL ;

                target = head->next->prev ;
                head->next->prev = NULL ;
                head = head->next ;

                delete (target);
            }
            iCountNode-- ;
        }

        void DeleteLast()
        {
            if(head == NULL)
            {
                cout<<"Linked List is empty !";
                return ;
            }
            else if(head->next == NULL)
            {
                delete (head);
                head = NULL ;
            }
            else
            {
                PNODE target = NULL ;
                PNODE temp = NULL ;

                temp = head ;

                while(temp->next->next != NULL)
                {
                    temp = temp->next ;
                }

                target = temp->next ;
                delete (target);

                temp->next = NULL ;
            }
            iCountNode-- ;
        }

        void InsertAtPos(int iNo , int iPos)
        {
            if(iPos < 1 || iPos > iCountNode+1)
            {
                cout<<"Invalid Position !!\n";
                return ;
            }
            else if(iPos == 1)
            {
                InsertFirst(iNo);
            }
            else if(iPos == iCountNode+1)
            {
                InsertLast(iNo);
            }
            else
            {
                PNODE newn = NULL ;
                PNODE temp = NULL ;

                int iCnt = 0 ;

                temp = head ;

                newn = new NODE ;
                
                newn->data = iNo ;
                newn->next = NULL ;
                newn->prev = NULL ;

                for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
                {
                    temp = temp->next ;
                }
                newn->next = temp->next ;
                newn->prev = temp ;
                temp->next->prev = newn ;
                temp->next = newn ;

                iCountNode++ ;
            }
        }

        void DeleteAtPos(int iPos)
        {
            if(iPos < 1 || iPos > iCountNode)
            {
                cout<<"Invalid Position !!\n";
                return ;
            }
            else if(iPos == 1)
            {
                DeleteFirst();
            }
            else if(iPos == iCountNode)
            {
                DeleteLast();
            }
            else
            {
                PNODE temp = NULL ;
                PNODE target = NULL ;

                int iCnt = 0 ;

                temp = head ;

                for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
                {
                    temp = temp->next ;
                }
                target = temp->next ;
                temp->next = target->next ;
                target->next->prev = temp->next ;
                

                delete target ;

                iCountNode-- ;
            }
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

        void Display()
        {
            PNODE temp = NULL ;
            temp = head ;

            cout<<"NULL<=>";
            while(temp != NULL)
            {
                cout<<"|"<<temp->data<<"|<=>";
                temp = temp->next ;
            }
            cout<<"NULL\n";
        }
};

int main()
{
    int iOption = 0 , iNo = 0 , iPos = 0 , iRet = 0  ;

    Doubly sobj ;

    cout<<"_________________________________________________________________________\n";
        cout<<"Doubly Linked List started...\n";

    while(1)
    {
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