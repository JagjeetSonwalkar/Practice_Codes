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
        {}

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