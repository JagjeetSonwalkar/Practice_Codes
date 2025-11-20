#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data ;
    struct node *next ;
    struct node *prev ;
}NODE , *PNODE , **PPNODE ;

void InsertFirst(PPNODE head , PPNODE tail , int no) 
{
    PNODE newn = NULL ;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn->next = NULL ;
    newn->prev = NULL ;

    if(*head == NULL && *tail == NULL)
    {
        *head = newn ;
        *tail = newn ;
    }
    else
    {
        newn->next = *head ;
        (*head)->prev = newn ;
        *head = newn ;   
    }
    (*head)->prev = *tail;
    (*tail)->next = *head ;
}

void InsertLast(PPNODE head , PPNODE tail , int no) 
{
    PNODE newn = NULL ;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn->next = NULL ;
    newn->prev = NULL ;

    if(*head == NULL && *tail == NULL)
    {
        *head = newn ;
        *tail = newn ;
    }
    else
    {
        (*tail)->next = newn ;  
        newn->prev = *tail ;

        *tail = newn ; 
    }
    (*head)->prev = *tail;
    (*tail)->next = *head ;
}

void InsertAtPos(PPNODE head , PPNODE tail , int no , int iPos) {}

void DeleteFirst(PPNODE head , PPNODE tail) {}
void DeleteLast(PPNODE head , PPNODE tail) {}
void DeleteAtPos(PPNODE head , PPNODE tail , int iPos) {}

void Display(PNODE head , PNODE tail) 
{
    if((head == NULL) && (tail == NULL))
    {
        printf("LL is Empty !! \n");
        return ;
    }

    printf("Elements of LL are : \n<=>");
    do
    {
        printf("| %d |<=>",head->data);
        head = head->next ;
    }while(head != tail->next);
}

int Count(PNODE head , PNODE tail) 
{
    int iCount = 0 ;
    //LOGIC
    return iCount ;
}

int main()
{
    PNODE first = NULL , last = NULL ;

    InsertFirst(&first,&last,100);
    InsertFirst(&first,&last,200);
    InsertFirst(&first,&last,300);

    InsertLast(&first,&last,400);
    InsertLast(&first,&last,500);
    InsertLast(&first,&last,600);

    Display(first,last);
    
    return 0 ;
}