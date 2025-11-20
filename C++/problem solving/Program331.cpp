#include<iostream>
using namespace std ;

struct node
{
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;

class Singly_LL
{
    public:
        PNODE head ;

        Singly_LL()
        {
            head = NULL ;
        }

        void InsertFirst()
        {}

        void InsertLast()
        {}

        void DeleteFirst()
        {}

        void DeleteLast()
        {}

        void Display()
        {}

        int Count()
        {
            return 0 ;
        }

        void InsertAtPos()
        {}

        void DeleteAtPos()
        {}

};

int main()
{

    return 0 ;
}