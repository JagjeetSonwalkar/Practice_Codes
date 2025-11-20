#include<iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;

class Singly_Circular
{
    public:
        PNODE head ;
        PNODE tail ;
        int iCount ;

        Singly_Circular()
        {
            head = NULL ;
            tail = NULL ;
            iCount = 0 ;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = no ;
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

            iCount++ ;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = no ;
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

            iCount++ ;
        }

        void DeleteFirst()
        {
            if(head == NULL || tail == NULL)
            {
                cout<<"LL is already empty \n";
                return ;
            }

            if(head == tail)
            {
                delete head ;

                head = NULL ;
                tail = NULL ;
            }
            else
            {
                head = head->next ;
                delete(tail->next);

                tail->next = head ;
            }
            iCount-- ;
        }

        void DeleteLast()
        {
            PNODE temp = NULL ;

            if(head == NULL || tail == NULL)
            {
                cout<<"LL is already empty \n";
                return ;
            }

            if(head == tail)
            {
                delete head ;

                head = NULL ;
                tail = NULL ;
            }
            else
            {
                temp = head ;

                while(temp->next != tail)
                {
                    temp = temp->next ;
                }
                delete (temp->next);
                tail = temp ;
                
                tail->next = head ;
            }
            iCount-- ;
        }

        void InsertAtPos(int no , int iPos)
        {
            int iCnt = 0 ;

            PNODE newn = NULL ;
            PNODE temp = NULL ;

            if(iPos < 1 || iPos > iCount+1)
            {
                cout<<"Invalid Position !! \n";
                return ;
            }

            if(iPos==1)
            {
                InsertFirst(no);
            }
            else if(iPos == iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                temp = head ;

                newn = new NODE ;

                newn->data = no ;
                newn->next = NULL ;

                for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
                {
                    temp = temp -> next ;
                }

                newn->next = temp->next ;
                temp->next = newn ;

                iCount++ ;
            }
        }

        void DeleteAtPos(int iPos)
        {
            int iCnt = 0 ;

            PNODE temp = NULL ;
            PNODE target = NULL ;

            if(iPos < 1 || iPos > iCount)
            {
                cout<<"Invalid Position !! \n";
                return ;
            }

            if(iPos==1)
            {
                DeleteFirst();
            }
            else if(iPos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = head ;

                for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
                {
                    temp = temp -> next ;
                }

                target = temp->next ;
                temp->next = target->next ;
                delete (target);

                iCount-- ;
            }
        }

        void Display()
        {
            if(head == NULL || tail == NULL)
            {
                cout<<"LL is empty !!\n";
                return ;
            }

            cout<<"Elements of LL are : \n->";
            do
            {
                cout<<"|"<<head->data<<"|->";
                head = head->next ;
            }while(head != tail->next);
            cout<<"\n";
        }

        int Count()
        {
            if(head == NULL || tail == NULL)
            {
                return 0;
            }

            return iCount ;
        }
};

int main()
{
    int iRet = 0 ;

    Singly_Circular sobj ;

    sobj.InsertFirst(100);
    sobj.InsertFirst(101);
    sobj.InsertFirst(102);

    sobj.InsertLast(200);
    sobj.InsertLast(201);
    sobj.InsertLast(202);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Total elements of LL are : "<<iRet<<"\n";

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Total elements of LL are : "<<iRet<<"\n";

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Total elements of LL are : "<<iRet<<"\n";

    sobj.InsertAtPos(111,3);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Total elements of LL are : "<<iRet<<"\n";

    sobj.DeleteAtPos(2);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Total elements of LL are : "<<iRet<<"\n";

    return 0 ;
}

/*

    OUTPUT

    Elements of LL are :
    ->|102|->|101|->|100|->|200|->|201|->|202|->
    Total elements of LL are : 6
    Elements of LL are :
    ->|101|->|100|->|200|->|201|->|202|->
    Total elements of LL are : 5
    Elements of LL are :
    ->|101|->|100|->|200|->|201|->
    Total elements of LL are : 4
    Elements of LL are :
    ->|101|->|100|->|111|->|200|->|201|->
    Total elements of LL are : 5
    Elements of LL are :
    ->|101|->|111|->|200|->|201|->
    Total elements of LL are : 4

*/