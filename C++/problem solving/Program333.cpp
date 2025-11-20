#include<stdio.h>
using namespace std ;

struct node
{
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

class Singly_LL
{
    public:
        PNODE head ;
        int iCount ;

        Singly_LL()
        {
            head = NULL ;
            iCount = 0 ;
        }

        InsertFirst(int no)
        {}

        InsertLast(int no)
        {}

        InsertAtPos(int no , int iPos)
        {}

        DeleteFirst()
        {}

        DeleteLast()
        {}

        DeleteAtPos(int iPos)
        {}

        void Display()
        {}

        int Count()
        {
            return iCount ;
        }

};

int main()
{
    Singly_LL obj ;

    return 0 ;
}