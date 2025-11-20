#include<stdio.h>

struct node 
{
    int data ;
    struct node *next ;
    struct node *prev ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void InsertFirst(PPNODE head , PPNODE tail , int no) {}
void InsertLast(PPNODE head , PPNODE tail , int no) {}
void InsertAtPos(PPNODE head , PPNODE tail , int no , int iPos) {}

void DeleteFirst(PPNODE head , PPNODE tail) {}
void DeleteLast(PPNODE head , PPNODE tail) {}
void DeleteAtPos(PPNODE head , PPNODE tail , int iPos) {}

void Display(PNODE head , PNODE tail) {}
int Count(PNODE head , PNODE tail) 
{
    int iCount = 0 ;
    //LOGIC
    return iCount ;
}

int main()
{
    PNODE first = NULL , last = NULL ;

    return 0 ;
}