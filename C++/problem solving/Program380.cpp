#include<iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;

class stack
{
    public:
        PNODE head ;
        int iCount ;

        stack()
        {
            head = NULL ;
            iCount = 0 ;
        }

        void push(int no)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = no ;
            newn->next = NULL ;

            if(head == NULL)
            {
                head = newn ;
            }
            else
            {
                newn->next = head ;
                head = newn ;
            }

            iCount++ ;
        }

        int pop()
        {
            int no = -1 ;

            PNODE temp = NULL ;

            if(head == NULL)
            {
                cout<<"Stack is empty !!\n";
                return -1 ;
            }
            else if(head->next == NULL)
            {
                no = head->data;

                delete head ;
                head = NULL ;
            }
            else
            {
                no = head->data;

                temp = head ;

                head = head->next ;
                delete temp ;
            }
            iCount-- ;

            return no ;
        }

        void Display()
        {}

        int Count()
        {
            return iCount ;
        }

};

int main()
{  

    return 0 ;
}