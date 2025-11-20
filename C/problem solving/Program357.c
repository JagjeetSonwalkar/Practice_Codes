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

    if((*head == NULL) && (*tail == NULL))
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

    if((*head == NULL) && (*tail == NULL))
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

void DeleteFirst(PPNODE head , PPNODE tail)
{
    if((*head == NULL) && (*tail == NULL))
    {
        printf("LL is Already empty !! \n");
        return ;
    }

    if(*head == *tail)
    {
        free(*head);

        *head = NULL ;
        *tail = NULL ;
    }
    else
    {
        *head = (*head)->next ;

        free((*tail)->next);

        (*tail)->next = *head ;
    }
}

void DeleteLast(PPNODE head , PPNODE tail)
{
    PNODE temp = NULL ;

    if((*head == NULL) && (*tail == NULL))
    {
        printf("LL is Already empty !! \n");
        return ;
    }

    if(*head == *tail)
    {
        free(*head);

        *head = NULL ;
        *tail = NULL ;
    }
    else
    {
        temp = *head ;

        while(temp->next != *tail)
        {
            temp = temp->next ;
        }
        free(*tail);
        *tail = temp ;
        (*tail)->next = *head ;       
    }
}

void Display(PNODE head , PNODE tail)
{
    printf("Elements of LL are : \n->");
    if(head == NULL && tail == NULL)
    {
        printf("LL is already empty !!\n");
        return ;
    }

    do
    {
        printf("| %d |->",head->data);
        head = head->next ;
    }while(head != tail->next);
    printf("\n");
}

int Count (PNODE head , PNODE tail)
{
    int iCount = 0 ;

    if(head == NULL && tail == NULL)
    {
        printf("LL is already empty !!\n");
        return 0;
    }

    do
    {
        iCount++ ;
        head = head->next ;
    }while(head != tail->next);

    return iCount ;
}

void InsertAtPos(PPNODE head , PPNODE tail , int no , int iPos)
{
    int iCountNode = 0 , iCnt = 0 ;

    PNODE temp = NULL ;
    PNODE newn = NULL ;

    iCountNode = Count(*head,*tail);

    if(iPos < 1 || iPos > iCountNode+1)
    {
        printf("Invalid Position !! \n");
        return ;
    }

    if(iPos == 1)
    {
        InsertFirst(head,tail,no);
    }
    else if(iPos == iCountNode+1)
    {
        InsertLast(head,tail,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE)) ;
        newn->data = no ;
        newn->next = NULL ;

        temp = *head ;

        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp->next ;
        }
        newn->next = temp->next ;
        temp->next = newn ;
    }
}

void DeleteAtPos (PPNODE head , PPNODE tail , int iPos)
{
    int iCountNode = 0 , iCnt = 0 ;

    PNODE temp = NULL ;
    PNODE target = NULL ;

    iCountNode = Count(*head,*tail);

    if(iPos < 1 || iPos > iCountNode)
    {
        printf("Invalid Position !! \n");
        return ;
    }

    if(iPos == 1)
    {
        DeleteFirst(head,tail);
    }
    else if(iPos == iCountNode+1)
    {
        DeleteLast(head,tail);
    }
    else
    {
        temp = *head ;

        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp->next ;
        }
        target = temp->next ;
        temp->next = target->next ;

        free(target);
    }
}

int main()
{
    int iRet = 0 ;

    PNODE first = NULL ;
    PNODE last = NULL ;

    InsertFirst(&first,&last,10);
    InsertFirst(&first,&last,20);
    InsertFirst(&first,&last,30);

    InsertLast(&first,&last,40);
    InsertLast(&first,&last,50);
    InsertLast(&first,&last,60);

    Display(first,last);
    iRet = Count(first,last);
    printf("Total elements in LL are : %d\n",iRet);

    InsertAtPos(&first,&last,100,4);

    Display(first,last);
    iRet = Count(first,last);
    printf("Total elements in LL are : %d\n",iRet);

    DeleteAtPos(&first,&last,4);

    Display(first,last);
    iRet = Count(first,last);
    printf("Total elements in LL are : %d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Elements of LL are :
    ->| 30 |->| 20 |->| 10 |->| 40 |->| 50 |->| 60 |->
    Total elements in LL are : 6
    Elements of LL are :
    ->| 30 |->| 20 |->| 10 |->| 100 |->| 40 |->| 50 |->| 60 |->
    Total elements in LL are : 7
    Elements of LL are :
    ->| 30 |->| 20 |->| 10 |->| 40 |->| 50 |->| 60 |->
    Total elements in LL are : 6

*/