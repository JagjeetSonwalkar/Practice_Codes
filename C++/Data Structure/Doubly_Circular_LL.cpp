#include<iostream>
using namespace std ;

struct node
{
    int data ;
    struct node* next ;
    struct node* prev ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;

class Doubly_Circular
{
    public:
        PNODE head ;
        PNODE tail ;
        int iCountNode ;

        Doubly_Circular()
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
            if(head == NULL && tail == NULL)
            {
                cout<<"LL is Already Empty \n";
                return ;
            }

            PNODE temp = NULL ;
            temp = head ;
            
            cout<<"<=>";
            do
            {
                cout<<"|"<<temp->data<<"|<=>";
                temp = temp->next ;
            }
            while(temp != head);
            cout<<"\n";
        }

        void InsertFirst(int iNo)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = iNo ;
            newn->next = NULL ;
            newn->prev = NULL ;

            if(head == NULL && tail == NULL)
            {
                head = newn ;
                tail = newn ;
            }
            else
            {
                newn->next = head ;
                head->prev = newn ;
                head = newn ;
            }
            tail->next = head ;
            head->prev = tail ;

            iCountNode++ ;
        }

        void InsertLast(int iNo)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = iNo ;
            newn->next = NULL ;
            newn->prev = NULL ;

            if(head == NULL && tail == NULL)
            {
                head = newn ;
                tail = newn ;
            }
            else
            { 
                newn->prev = tail ;
                tail->next = newn ;
                tail = newn ;
            }
            tail->next = head ;
            head->prev = tail ;

            iCountNode++ ;
        }

        void DeleteFirst()
        {
            if(head == NULL && tail == NULL)
            {
                cout<<"LL is empty unable to delete first element\n";
                return ;
            }
            else if(head == tail)
            {
                delete head ;

                head = NULL ;
                tail = NULL ;
            }
            else
            {
                head = head->next ;

                delete (tail->next) ;

                tail->next = head ;
                head->prev = tail ;
            }
            iCountNode-- ;
        }

        void DeleteLast()
        {
            if(head == NULL && tail == NULL)
            {
                cout<<"LL is empty unable to delete first element\n";
                return ;
            }
            else if(head == tail)
            {
                delete head ;

                head = NULL ;
                tail = NULL ;
            }
            else
            {
                tail = tail->prev ;
                delete (tail->next) ;

                tail->next = head ;
                head->prev = tail ;
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
                int iCnt = 0 ;

                PNODE temp = NULL ;
                PNODE newn = NULL ;

                newn = new NODE ;

                newn->data = iNo ;
                newn->next = NULL ;
                newn->prev = NULL ;

                temp = head ;

                for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
                {
                    temp = temp->next ;
                }
                newn->next = temp->next ;
                temp->next->prev = newn ;
                newn->prev = temp->next ;
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
                int iCnt = 0 ;

                PNODE temp = NULL ;
                PNODE target = NULL ;

                temp = head ;

                for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
                {
                    temp = temp->next ;
                }

                target = temp->next;
                temp->next = temp->next->next;
                temp->next->prev = temp;
                delete target;

                iCountNode-- ;
            }
        }

        void DeleteAllNode()
        {
            if(head == NULL)
            return;

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

    Doubly_Circular sobj ;

    cout<<"_________________________________________________________________________\n";
    cout<<"Doubly Circular Linked List started...\n";

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