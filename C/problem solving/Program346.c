#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void InsertFirst(PPNODE head , PPNODE tail , int no) 
{
    PNODE newn = NULL ;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn->next = NULL ;

    if((*head == NULL) && (*tail == NULL))                 // if LL is empty
    {
        *head = newn ;
        *tail = newn ;
    }
    else
    {
        newn->next = *head ;
        *head = newn ;     
    }
    (*tail)->next = *head ;
}
void InsertLast(PPNODE head , PPNODE tail , int no) {}
void InsertAtPos(PPNODE head , PPNODE tail , int no , int iPos) {}

void DeleteFirst(PPNODE head , PPNODE tail) {}
void DeleteLast(PPNODE head , PPNODE tail) {}
void DeleteAtPos(PPNODE head , PPNODE tail , PPNODE iPos) {}

void Display(PNODE head , PNODE tail) {}
int Count(PNODE head , PNODE tail) {}

int main()
{
    PNODE first = NULL ;        // pointing to first node
    PNODE last = NULL ;         // pointing to last node

    InsertFirst(&first,&last,102);
    InsertFirst(&first,&last,101);
    InsertFirst(&first,&last,100);
    
    return 0 ;
}