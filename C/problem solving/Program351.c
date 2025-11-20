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

void InsertLast(PPNODE head , PPNODE tail , int no) 
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
        (*tail)->next = newn ;
        *tail = newn ;
    }
    (*tail)->next = *head ;
}

void InsertAtPos(PPNODE head , PPNODE tail , int no , int iPos) {}

void DeleteFirst(PPNODE head , PPNODE tail) {}
void DeleteLast(PPNODE head , PPNODE tail) {}
void DeleteAtPos(PPNODE head , PPNODE tail , PPNODE iPos) {}

void Display(PNODE head , PNODE tail) 
{
    if(head == NULL && tail == NULL)
    {
        printf("LL is empty !!\n");
        return ;
    }

    printf("Elements of LL are : \n");
    printf("->");
    do
    {
        printf("| %d |->",head->data);
        head = head->next ;
    }while(head != tail->next);
    printf("\n");
}

int Count(PNODE head , PNODE tail) 
{
    if(head == NULL && tail == NULL)
    {
        printf("LL is empty !!\n");
        return 0 ;
    }

    int iCount = 0 ;
    do
    {
        iCount++ ;
        head = head->next ;
    }while(head != tail->next);
    return iCount ;
}

int main()
{
    int iRet = 0 ;

    PNODE first = NULL ;        // pointing to first node
    PNODE last = NULL ;         // pointing to last node

    // InsertFirst(&first,&last,102);
    // InsertFirst(&first,&last,101);
    // InsertFirst(&first,&last,100);

    // InsertLast(&first,&last,200);
    // InsertLast(&first,&last,201);
    // InsertLast(&first,&last,202);

    Display(first,last);

    iRet = Count(first,last);
    printf("Total number of elements in LL are : %d\n",iRet);
    
    
    return 0 ;
}

/*
    OUTPUT

    LL is empty !!
    LL is empty !!
    Total number of elements in LL are : 0

*/