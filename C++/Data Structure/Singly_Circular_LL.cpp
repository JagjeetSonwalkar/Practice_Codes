#include<iostream>
using namespace std;

struct node 
{
    int data ;
    struct node* next ;
};

typedef struct node NODE ;
typedef struct node* PNODE;

class Singly_Circular
{
    public:
        PNODE head ;
        PNODE tail ;
        int iCountNode ;

        Singly_Circular()
        {
            head = NULL ;
            tail = NULL ;
            iCountNode = 0 ;
        }

        int CountNode()
        {
            return iCountNode ;
        }

        void Display()
        {
            if(head == NULL || tail == NULL)
            {
                cout<<"LL is empty !!\n";
                return ;
            }

            PNODE temp = NULL ;
            temp = head ;

            do
            {
                cout<<"|"<<temp->data<<"|->";
                temp = temp->next ;
            }
            while(temp != (tail->next));

            cout<<"NULL\n";
        }

        void InsertFirst(int iNo)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = iNo ;
            newn->next = NULL ;

            if(head == NULL && tail == NULL)
            {
                head = newn ;
                tail = newn ;
            }
            else
            {
                newn->next = head ;
                head = newn ;
            }
            tail->next = head ;
            iCountNode++ ;
        }

        void InsertLast(int iNo)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = iNo ;
            newn->next = NULL ;

            if(head == NULL && tail == NULL)
            {
                head = newn ;
                tail = newn ;
            }
            else
            {
                tail->next = newn ;
                tail = newn ;
            }
            tail->next = head ;
            iCountNode++ ;
        }

        void DeleteFirst()
        {
            if(head == NULL && tail == NULL)
            {
                cout<<"LL is already empty\n";
                return ;
            }
            else if(head == tail)
            {
                delete head;

                head = NULL ;
                tail = NULL ;
            }
            else
            {
                head = head->next ;
                delete (tail->next);

                tail->next = head ;
            }    
            iCountNode-- ;
        }

        void DeleteLast()
        {
            if(head == NULL && tail == NULL)
            {
                cout<<"LL is already empty\n";
                return ;
            }
            else if(head == tail)
            {
                delete head;

                head = NULL ;
                tail = NULL ;
            }
            else
            {
                PNODE temp = NULL ;
                PNODE target = NULL ;

                temp = head ;

                while(temp->next != tail)
                {
                    temp = temp->next ;
                }
                delete (temp->next);
                tail = temp ;

                tail->next = head ;
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
                PNODE temp = NULL ;
                PNODE newn = NULL ;
                int i = 0 ;

                newn = new NODE ;

                newn->data = iNo ;
                newn->next = NULL ;

                temp = head ;

                for(i = 1 ; i < iPos-1 ; i++)
                {
                    temp = temp->next ;
                }
                newn->next = temp->next ;
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
                int i = 0 ;

                temp = head ;

                for(i = 1 ; i < iPos-1 ; i++)
                {
                    temp = temp->next ;
                }
                target = temp->next ;
                temp->next = temp->next->next ;
                delete (target) ;

                iCountNode-- ;
            }
        }

        void DeleteAllNode()
        {
            if(head == NULL) return;

            PNODE temp = head;
            PNODE next = NULL;

            do
            {
                next = temp->next;
                delete temp;
                temp = next;
            }
            while(temp != head);

            head = NULL;
            tail = NULL;
            iCountNode = 0;
        }     
};

int main()
{
    int iOption = 0 , iNo = 0 , iPos = 0 , iRet = 0  ;

    Singly_Circular sobj ;

    while(1)
    {
        cout<<"_________________________________________________________________________\n";
        cout<<"Singly Circular Linked List started...\n";
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