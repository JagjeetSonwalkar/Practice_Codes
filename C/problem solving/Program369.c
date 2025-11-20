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

void DeleteFirst(PPNODE head , PPNODE tail) 
{
    if(*head == NULL && *tail == NULL)
    {
        printf("LL is already empty !!!\n");
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
        (*head)->prev = *tail ;
    }
}

void DeleteLast(PPNODE head , PPNODE tail) 
{
    if(*head == NULL && *tail == NULL)
    {
        printf("LL is already empty !!!\n");
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
        *tail = (*tail)->prev ;
        free((*head)->prev);

        (*tail)->next = *head ;
        (*head)->prev = *tail ;
    }
}

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
    printf("\n");
}

int Count(PNODE head , PNODE tail) 
{
    int iCount = 0 ;
    
    if((head == NULL) && (tail == NULL))
    {
        printf("LL is Empty !! \n");
        return 0 ;
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

    iCountNode = Count(*head,*tail);

    PNODE newn = NULL ;
    PNODE temp = NULL ;

    if(iPos < 1 || iPos > iCountNode+1)
    {
        printf("Invalid Position !!! \n");
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
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no ;
        newn->next = NULL ;
        newn->prev = NULL ;

        temp = *head ;

        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp->next ;
        }

        newn->next = temp->next ;
        temp->next->prev = newn ;
        temp->next = newn ;
        newn->prev = temp ;
    }
}

void DeleteAtPos(PPNODE head , PPNODE tail , int iPos)      // without target varaible
{
    int iCountNode = 0 , iCnt = 0 ; 

    iCountNode = Count(*head,*tail);

    PNODE temp = NULL ;

    if(iPos < 1 || iPos > iCountNode)
    {
        printf("Invalid Position !!! \n");
        return ;
    }

    if(iPos == 1)
    {
        DeleteFirst(head,tail);
    }
    else if(iPos == iCountNode)
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

        temp->next = temp->next->next ;
        free(temp->next->prev);
        temp->next->prev = temp ;

    }
}

int main()
{
    int iRet = 0 ;

    PNODE first = NULL , last = NULL ;

    InsertFirst(&first,&last,100);
    InsertFirst(&first,&last,200);
    InsertFirst(&first,&last,300);

    InsertLast(&first,&last,400);
    InsertLast(&first,&last,500);
    InsertLast(&first,&last,600);

    Display(first,last);
    iRet = Count(first,last);
    printf("Total elements in LL are : %d\n",iRet);

    InsertAtPos(&first,&last,1000,4);

    Display(first,last);
    iRet = Count(first,last);
    printf("Total elements in LL are : %d\n",iRet);

    DeleteAtPos(&first,&last,4);

    Display(first,last);
    iRet = Count(first,last);
    printf("Total elements in LL are : %d\n",iRet);

    DeleteAtPos(&first,&last,5);

    Display(first,last);
    iRet = Count(first,last);
    printf("Total elements in LL are : %d\n",iRet);
    
    return 0 ;
}

/*
    OUTPUT

    Elements of LL are :
    <=>| 300 |<=>| 200 |<=>| 100 |<=>| 400 |<=>| 500 |<=>| 600 |<=>
    Total elements in LL are : 6
    Elements of LL are :
    <=>| 300 |<=>| 200 |<=>| 100 |<=>| 1000 |<=>| 400 |<=>| 500 |<=>| 600 |<=>
    Total elements in LL are : 7
    Elements of LL are :
    <=>| 300 |<=>| 200 |<=>| 100 |<=>| 400 |<=>| 500 |<=>| 600 |<=>
    Total elements in LL are : 6
    Elements of LL are :
    <=>| 300 |<=>| 200 |<=>| 100 |<=>| 400 |<=>| 600 |<=>
    Total elements in LL are : 5

*/