#include<stdio.h>
#include<stdlib.h>

struct node                 // size 12 byte
{
    int data ;              // size 4 bytes
    struct node *next ;     // size 4 bytes
    struct node *prev ;     // size 4 bytes
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void InsertFirst(PPNODE head , int no)
{
    PNODE newn = NULL ;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn->next = NULL ;
    newn->prev = NULL ;

    if(*head == NULL)
    {
        *head = newn ;
    }
    else
    {
        newn->next = *head ;        // 1st initilise newnode next 
        (*head)->prev = newn ;      // 2nd initilise firstnode prev
        *head = newn ;              // 3rd assigine newnode as first node
    }
}

void InsertLast(PPNODE head , int no)
{
    PNODE newn = NULL ;
    PNODE temp = NULL ;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn->next = NULL ;
    newn->prev = NULL ;

    if(*head == NULL)
    {
        *head = newn ;
    }
    else
    {
        temp = *head ;

        while(temp->next != NULL)       // stop before last element
        {
            temp = temp->next ;         // go to last element
        }
        temp->next = newn ;            // insitile last node next value  
        newn->prev = temp ;            // insitile new node prev value
        
    }
}

void Display(PNODE head)
{
    printf("NULL <=> ");
    while(head != NULL)
    {
        printf("| %d |<=>",head->data);
        head = head->next ;
    }
    printf(" NULL \n");
}

int Count(PNODE head)
{
    int iCount = 0 ;

    while(head != NULL)
    {
        iCount++ ;
        head = head->next ;
    }
    return iCount ;
}

void DeleteFirst(PPNODE head)       // Delete first node without using temp pointer
{
    if(*head == NULL)
    {
        printf("LL is Allready empty !!!\n");
        return ;
    }
    else if((*head)->next == NULL)
    {
        free((*head)->next);
        *head = NULL ;
    }
    else
    {
        *head = (*head)->next ;
        free((*head)->prev);
        (*head)->prev = NULL ;
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL ;

    if((*head) == NULL)
    {
        printf("LL is Allready empty !!!\n");
        return ;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL ;
    }
    else
    {
        temp = *head ;

        while(temp->next->next != NULL)
        {
            temp = temp->next ;
        }
        free(temp->next);
        temp->next = NULL ;
    }
}

void InsertAtPos(PPNODE head , int no , int iPos)
{
    int iCountNode = 0 , iCnt = 0 ;

    PNODE newn = NULL ;
    PNODE temp = NULL ;

    iCountNode = Count(*head);

    if(iPos < 1 || iPos > iCountNode+1)
    {
        printf("Invalid Position !!! \n");
        return  ;
    }

    if(iPos == 1)
    {
        InsertFirst(head,no);
    }
    if(iPos == iCountNode+1)
    {
        InsertLast(head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no ;
        newn->next = NULL ;
        newn->prev = NULL ;

        temp = *head ;

        for(iCnt = 1 ; iCnt <= iPos-1 ; iCnt++);
        {
            temp = temp->next ;
        }
        newn->next = temp->next ;       // inisitilise newnode next 
        temp->next->prev = newn ;       // initilise newnode nextnode prev value
        temp->next = newn ;             // iniitiise newnode prevnode next value
        newn->prev = temp ;             // iniitilise newnode preves 
        
    }
}

void DeleteAtPos(PPNODE head , int iPos)
{
    // LOGIC
}

int main()
{
    PNODE first = NULL ;       // first is pointer
    int iRet = 0 ;

    InsertFirst(&first,101);
    InsertFirst(&first,100);
    InsertFirst(&first,51);
    InsertFirst(&first,50);

    InsertLast(&first,200);
    InsertLast(&first,201);

    Display(first);
    iRet = Count(first);
    printf("Total elements in LL are : %d\n",iRet);

    DeleteFirst(&first);

    Display(first);
    iRet = Count(first);
    printf("Total elements in LL are : %d\n",iRet);

    DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Total elements in LL are : %d\n",iRet);

    InsertAtPos(&first,555,3);

    Display(first);
    iRet = Count(first);
    printf("Total elements in LL are : %d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    NULL <=> | 50 |<=>| 51 |<=>| 100 |<=>| 101 |<=>| 200 |<=>| 201 |<=> NULL
    Total elements in LL are : 6
    NULL <=> | 51 |<=>| 100 |<=>| 101 |<=>| 200 |<=>| 201 |<=> NULL
    Total elements in LL are : 5
    NULL <=> | 51 |<=>| 100 |<=>| 101 |<=>| 200 |<=> NULL
    Total elements in LL are : 4
    NULL <=> | 51 |<=>| 100 |<=>| 555 |<=>| 101 |<=>| 200 |<=> NULL
    Total elements in LL are : 5

*/