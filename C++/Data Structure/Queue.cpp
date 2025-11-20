#include<iostream>
using namespace std ;

struct node
{
    int data ;
    struct node* next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;

class Queuee
{
    public:
        int iCountNode ;
        PNODE head ;

        Queuee()
        {
            iCountNode = 0 ;
            head = NULL ;
        }

        int CountNode()
        {
            return iCountNode ;
        }

        void Display()
        {
            PNODE temp = NULL ;

            temp = head ;

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |<-";
                temp = temp->next ;
            }
            cout<<"NULL\n";
        }

        void EnQueue(int iNo)
        {
            PNODE newn = NULL ;

            newn = new NODE ;

            newn->data = iNo ;
            newn->next = NULL ;

            if(head == NULL)
            {
                head = newn ;
            }
            else
            {
                PNODE temp = NULL ;

                temp = head ;

                while(temp->next != NULL)
                {
                    temp = temp->next ;
                }
                temp->next = newn ;
            }
            iCountNode++ ;
        }

        int DeQueue()
        {
            PNODE target = NULL ; 
            int no = -1 ;

            if(head == NULL)
            {
                cout<<"Queue is empty , Unable to Delete element !!";
                return -1 ;
            }
            else if(head->next == NULL)
            {
                no = head->data ;

                target = head ;

                delete target;
                head = NULL ;
            }
            else
            {
                no = head->data ;

                target = head ;
                head = head->next ;

                delete target ;
            }

            iCountNode-- ;

            return no ;
        }
};

int main()
{
    int iOption = 0 , iRetCountNode = 0 , iNo = 0 , iRetDeQueue = 0 ;

    Queuee qobj ;

    cout<<"<-- You are using Queue module -->\n";
    cout<<"--------------------------------------------------------\n";

    while(1)
    {
        cout<<"______________________________________________________\n";
        cout<<"1 Display the Queue\n";
        cout<<"2 Count the total elements from the Queue\n";
        cout<<"3 EnQueue(Insert at first position) the element into the Queue\n";
        cout<<"4 DeQueue(delete from first position) the element from thr Queue\n";
        cout<<"5 Exit the Application\n";
        cout<<"______________________________________________________\n";
        cout<<"Enter your option\n";
        cin>>iOption;
        cout<<"______________________________________________________\n";

        if(iOption == 1)
        {
            qobj.Display();
        }
        else if(iOption == 2)
        {
            iRetCountNode = qobj.CountNode() ;
            cout<<"Total nodes in Queue are : "<<iRetCountNode<<"\n";
        }
        else if(iOption == 3)
        {
            cout<<"Enter the data : \n";
            cin>>iNo ;

            qobj.EnQueue(iNo);
        }
        else if(iOption == 4)
        {
            iRetDeQueue = qobj.DeQueue();
            cout<<"Removed Element is : "<<iRetDeQueue<<"\n";
        }
        else if(iOption == 5)
        {
            cout<<"Thankyou for using your module\n";
            break;
        }
        else
        {
            cout<<"!! Invalid Option !!\n";
        }   
    }
    return 0 ;
}