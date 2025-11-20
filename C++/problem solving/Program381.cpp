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
        {
            cout<<"Elements inside stack are \n";

            PNODE temp = head ;

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |\n";
                temp = temp->next ;
            }
        }

        int Count()
        {
            return iCount ;
        }

};

int main()
{
    int iRetCount = 0 , iRetPop = 0 ;
    stack sobj ;

    sobj.push(10);
    sobj.push(20);
    sobj.push(30);
    sobj.push(40);
    sobj.push(50);
    sobj.push(60);

    sobj.Display();
    iRetCount = sobj.Count();
    cout<<"Total elements in Stack are : "<<iRetCount<<"\n";

    iRetPop = sobj.pop();
    cout<<"poped element is : "<<iRetPop<<"\n";

    sobj.Display();
    iRetCount = sobj.Count();
    cout<<"Total elements in Stack are : "<<iRetCount<<"\n";

    return 0 ;
}

/*
    OUTPUT

    Elements inside stack are
    | 60 |
    | 50 |
    | 40 |
    | 30 |
    | 20 |
    | 10 |
    Total elements in Stack are : 6
    poped element is : 60
    Elements inside stack are
    | 50 |
    | 40 |
    | 30 |
    | 20 |
    | 10 |
    Total elements in Stack are : 5

*/