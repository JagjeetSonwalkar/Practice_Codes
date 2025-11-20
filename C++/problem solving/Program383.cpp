#include<iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;

class Queue
{
    public:
        PNODE head ;
        int iCount ;

        Queue()
        {
            head = NULL ;
            iCount = 0 ;
        }

        void enQueue(int no)
        {
            PNODE newn = NULL ;
            PNODE temp = NULL ;

            newn = new NODE ;

            newn->data = no ;
            newn->next = NULL ;

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
                temp->next = newn ;
            }

            iCount++ ;
        }

        int deQueue()
        {
            int no = -1 ;

            PNODE temp = NULL ;

            if(head == NULL)
            {
                cout<<"Queue is empty !!\n";
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
            cout<<"Elements inside Queue are \n";

            PNODE temp = head ;

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" ";
                temp = temp->next ;
            }
            cout<<"|\n";
        }

        int Count()
        {
            return iCount ;
        }

};

int main()
{
    int iRetCount = 0 , iRetdeQueue = 0 ;

    Queue qobj1 ;
    Queue qobj2 ;
    Queue qobj3 ;

    qobj1.enQueue(10);
    qobj1.enQueue(20);
    qobj1.enQueue(30);
    qobj1.enQueue(40);

    qobj3.enQueue(50);
    qobj3.enQueue(60);
    qobj3.enQueue(70);

    qobj2.enQueue(80);
    qobj2.enQueue(90);

    qobj1.Display();
    iRetCount = qobj1.Count();
    cout<<"Total elements in Queue1 are : "<<iRetCount<<"\n";

    qobj2.Display();
    iRetCount = qobj2.Count();
    cout<<"Total elements in Queue2 are : "<<iRetCount<<"\n";

    qobj3.Display();
    iRetCount = qobj3.Count();
    cout<<"Total elements in Queue3 are : "<<iRetCount<<"\n";

    return 0 ;
}

/*
    OUTPUT

    Elements inside Queue are
    | 10 | 20 | 30 | 40 |
    Total elements in Queue1 are : 4
    Elements inside Queue are
    | 80 | 90 |
    Total elements in Queue2 are : 2
    Elements inside Queue are
    | 50 | 60 | 70 |
    Total elements in Queue3 are : 3

*/