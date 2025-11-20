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

        void InsertFirst(int no)
        {}

        void InsertLast(int no)
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

        void InsertAtPos(int no , int iPos)
        {}

        void DeleteAtPos(int iPos)
        {}
};

int main()
{
    Singly_LL obj ;

    return 0 ;
}