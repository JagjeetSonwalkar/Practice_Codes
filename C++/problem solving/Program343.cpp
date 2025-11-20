#include<iostream>
using namespace std ;

struct node
{
    int data ;
    struct node *next ;
    struct node *prev ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;

class Doubly_LL
{
    public:
        PNODE head ;
        int iCount ;

        Doubly_LL()
        {
            head = NULL ;
            iCount = 0 ;
        }

        int Count()
        {
            return iCount ;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = no ;
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
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL ;
            PNODE temp = NULL ;

            newn = new NODE ;

            newn->data = no ;
            newn->next = NULL ;
            newn->prev = NULL ;

            if(head == NULL)
            {
                head = newn ;
            }
            else
            {
                temp = head ;

                while(temp->next != NULL)
                {
                    temp = temp->next ;
                }
                newn->prev = temp->next ;
                temp->next = newn ;
            }
            iCount++;
        }

        void InsertAtPos(int no , int iPos)
        {
            int iCnt = 0 ;

            PNODE newn = NULL ;
            PNODE temp = NULL ;

            if((iPos < 1) || (iPos > iCount+1))
            {
                cout<<"Invalid Position !!!\n";
                return ;
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
                newn->prev = NULL ;

                temp = head ;

                for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
                {
                    temp = temp->next ;
                }
                newn->next = temp->next ;
                temp->next->prev = newn ;
                temp->next = newn ;
                newn->prev = temp ;

                iCount++ ;
            }
        }

        void DeleteFirst()
        {
            PNODE temp = NULL ;

            if(head == NULL)
            {
                cout<<"LL is Allready Empty";
                return ;
            }

            if(head->next == NULL)
            {
                delete head ;
                head = NULL ;
            }
            else
            {
                temp = head ;

                head->next->prev = NULL ;
                head = head->next ;
                delete temp ;
            }
            iCount-- ;
        }

        void DeleteLast()
        {
            PNODE temp = NULL ;

            if(head == NULL)
            {
                cout<<"LL is Allready Empty";
                return ;
            }

            if(head->next == NULL)
            {
                delete head ;
                head = NULL ;
            }
            else
            {
                temp = head ;

                while(temp->next->next != NULL)
                {
                    temp = temp->next ;
                }
                delete (temp->next) ;
                temp->next = NULL ;
            }
            iCount-- ;
        }

        void DeleteAtPos(int iPos)
        {
            int iCnt = 0 ;

            PNODE target = NULL ;
            PNODE temp = NULL ;

            if((iPos < 1) || (iPos > iCount+1))
            {
                cout<<"Invalid Position !!!\n";
                return ;
            }

            if(iPos == 1)
            {
                DeleteFirst();
            }
            else if(iPos == iCount+1)
            {
                DeleteLast();
            }
            else
            {
                temp = head ;

                for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
                {
                    temp = temp->next ;
                }
                target = temp->next ;
                target->next->prev = temp ;
                temp->next = target->next ;
                delete target ;

                iCount-- ;
            }
        }

        void Display()
        {
            PNODE temp = NULL ;
            temp = head ;

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp -> next ;
            }
            cout<<" NULL\n";
        }
};

int main()
{
    int iRet = 0 ;

    Doubly_LL sobj ;

    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    sobj.InsertLast(40);
    sobj.InsertLast(50);
    sobj.InsertLast(60);

    sobj.InsertAtPos(100,4);

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    sobj.DeleteFirst();

    iRet = sobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";
    sobj.Display();

    return 0 ;
}

/*
    OUTPUT

    Total elements in LL are : 7
    | 10 |->| 20 |->| 30 |->| 100 |->| 40 |->| 50 |->| 60 |-> NULL
    Total elements in LL are : 6
    | 20 |->| 30 |->| 100 |->| 40 |->| 50 |->| 60 |-> NULL

*/