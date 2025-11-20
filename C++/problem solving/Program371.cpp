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

class Doubly_Circular_LL
{
    public:
        PNODE head ;
        PNODE tail ;
        int iCount ;

        Doubly_Circular_LL()
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
            newn->prev = NULL ;

            if((head == NULL) && (tail == NULL))
            {
                head = newn ;
                tail = newn ;    
            }
            else
            {
                newn->next = head ;
                head->next->prev = newn ;

                head = newn ;
            }
            tail->next = head ;
            head->prev = tail ;

            iCount++ ;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = no ;
            newn->next = NULL ;
            newn->prev = NULL ;

            if((head == NULL) && (tail == NULL))
            {
                head = newn ;
                tail = newn ;    
            }
            else
            {
                tail->next = newn ;
                newn->prev = tail ;

                tail = newn ;   
            }
            tail->next = head ;
            head->prev = tail ;

            iCount++ ;
        }

        void DeleteFirst()
        {
            if(head == NULL && tail == NULL)
            {
                cout<<"LL is already Empty!! \n";
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

                delete (tail->next);

                tail->next = head ;
                head->prev = tail ;
            }
            iCount-- ;
        }

        void DeleteLast()
        {
            if(head == NULL && tail == NULL)
            {
                cout<<"LL is already Empty!! \n";
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
                tail = tail->prev ;
                delete(tail->next);

                tail->next = head ;
                head->prev = tail ;
            }
            iCount-- ;
        }

        void InsertAtPos(int no , int iPos)
        {
            int iCnt = 0 ;

            PNODE temp = NULL ;
            PNODE newn = NULL ;

            if(iPos < 1 || iPos > iCount+1)
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

        void DeleteAtPos(int iPos)
        {
            int iCnt = 0 ;

            PNODE temp = NULL ;

            if(iPos < 1 || iPos > iCount)
            {
                cout<<"Invalid Position !!!\n";
                return ;
            }

            if(iPos == 1)
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
                    temp = temp->next ;
                }
                
                temp->next = temp->next->next ;
                free(temp->next->prev);
                temp->next->prev = temp ;

                iCount-- ;
            }
        }

        void Display()
        {
            if(head == NULL && tail == NULL)
            {
                cout<<"LL is Already Empty \n";
                return ;
            }

            cout<<"Elements of LL are : \n<=> ";
            do
            {
                cout<<"| "<<head->data<<"| <=> ";
                head = head->next ;
            }while(head != tail->next);
            cout<<"\n";
        }

        int Count()
        {
            if(head == NULL && tail == NULL)
            {
                return 0;
            }
            return iCount ;
        }
        
};

int main()
{
    int iRet = 0 ;
    Doubly_Circular_LL dobj ;
    
    dobj.InsertFirst(10);
    dobj.InsertFirst(20);
    dobj.InsertFirst(30);

    dobj.InsertLast(40);
    dobj.InsertLast(50);
    dobj.InsertLast(60);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";

    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";

    dobj.InsertAtPos(1000,3);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";

    dobj.DeleteAtPos(3);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Total elements in LL are : "<<iRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    Elements of LL are :
    <=> | 30| <=> | 20| <=> | 10| <=> | 40| <=> | 50| <=> | 60| <=>
    Total elements in LL are : 6
    Elements of LL are :
    <=> | 20| <=> | 10| <=> | 40| <=> | 50| <=> | 60| <=>
    Total elements in LL are : 5
    Elements of LL are :
    <=> | 20| <=> | 10| <=> | 40| <=> | 50| <=>
    Total elements in LL are : 4
    Elements of LL are :
    <=> | 20| <=> | 10| <=> | 1000| <=> | 40| <=> | 50| <=>
    Total elements in LL are : 5
    Elements of LL are :
    <=> | 20| <=> | 10| <=> | 40| <=>

*/