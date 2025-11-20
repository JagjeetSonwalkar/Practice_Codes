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
    Queue qobj ;

    qobj.enQueue(10);
    qobj.enQueue(20);
    qobj.enQueue(30);
    qobj.enQueue(40);
    qobj.enQueue(50);
    qobj.enQueue(60);
    qobj.enQueue(70);

    qobj.Display();
    iRetCount = qobj.Count();
    cout<<"Total elements in Queue are : "<<iRetCount<<"\n";

    iRetdeQueue = qobj.deQueue();
    cout<<"removed element is : "<<iRetdeQueue<<"\n";

    qobj.Display();
    iRetCount = qobj.Count();
    cout<<"Total elements in Queue are : "<<iRetCount<<"\n";

    return 0 ;
}

/*
    OUTPUT

    Elements inside Queue are
    | 10 | 20 | 30 | 40 | 50 | 60 | 70 |
    Total elements in Queue are : 7
    removed element is : 10
    Elements inside Queue are
    | 20 | 30 | 40 | 50 | 60 | 70 |
    Total elements in Queue are : 6

*/