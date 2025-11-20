#include<iostream>
using namespace std ;

template <class T>
struct node
{
    T data ;
    struct node* next ;
};

template <class T>
class Stack
{
    public:
        struct node<T>* head ;
        T iCountNode ;

        Stack();

        T CountNode();
        void Display();
        void Push(T iNo);
        T Pop();
};

template <class T>
Stack <T> :: Stack()
{
    head = NULL ;
    iCountNode = 0 ;
}

template <class T>
T Stack <T> :: CountNode()
{
    return iCountNode ;
}

template <class T>
void Stack <T> :: Display()
{
    if(head == NULL)
    {
        cout<<"Stack is empty !!\n";
        return ;
    }
    struct node<T>* temp = NULL ;
    temp = head ;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next ;
    }
}

template <class T>
void Stack <T> :: Push(T iNo)
{
    struct node<T>* newn = NULL ;

    newn = new (struct node<T>);

    newn->next = NULL ;
    newn->data = iNo ;

    if(head == NULL)
    {
        head = newn ;
    }
    else
    {
        newn->next = head ;
        head = newn ;
    }
    iCountNode++ ;
}

template <class T>
T Stack <T> :: Pop()
{
    T no = -1 ;

    struct node<T>* target = NULL ;

    if(head == NULL)
    {
        cout<<"Stack is already empty ! enable to delete element !!\n";
        return -1 ;
    }
    else if(head->next == NULL)
    {
        target = head ;

        no = head->data ;

        delete target ;

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

int main()
{
    int  iOption = 0 , iRetCountNode = 0  ;

    char iNo = '\0' , iRetPopelement = '\0' ;

    Stack <char> sobj ;

    cout<<"<-- You are using Stack module -->\n";
    cout<<"--------------------------------------------------------\n";
    while(1)
    {
        cout<<"______________________________________________________\n";
        cout<<"1 Display the Stack\n";
        cout<<"2 Count the total elements from the Stack\n";
        cout<<"3 Push the element into the Stack\n";
        // Push and pop is done from the same end.
        cout<<"4 pop the element from thr Stack\n";
        cout<<"5 Exit the Application\n";
        cout<<"______________________________________________________\n";
        cout<<"Enter your option\n";
        cin>>iOption;
        cout<<"______________________________________________________\n";

        if(iOption == 1)
        {
            sobj.Display();
        }
        else if(iOption == 2)
        {
            iRetCountNode = sobj.CountNode();
            cout<<"Total elements in stack are : "<<iRetCountNode<<"\n";
        }
        else if(iOption == 3)
        {
            cout<<"Enter the data : \n";
            cin>>iNo ;

            sobj.Push(iNo);
        }
        else if(iOption == 4)
        {
            iRetPopelement = sobj.Pop();
            cout<<"Poped element is : "<<iRetPopelement<<"\n";
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
}