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
        {}

        void Display()
        {}

        int Count()
        {}

};

int main()
{
    return 0 ;
}