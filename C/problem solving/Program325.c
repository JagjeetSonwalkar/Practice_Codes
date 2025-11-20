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
    if((*head) == NULL)
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
        // LOGIC
    }
}

void InsertAtPos()
{}

void DeleteAtPos()
{}

int main()
{
    PNODE first = NULL ;       // first is pointer
    int iRet = 0 ;

    InsertFirst(&first,101);
    InsertFirst(&first,100);

    InsertLast(&first,500);
    InsertLast(&first,501);

    Display(first);
    iRet = Count(first);
    printf("Total elements in singly circlualr LL : %d\n",iRet);

    DeleteFirst(&first);

    Display(first);
    iRet = Count(first);
    printf("Total elements in singly circlualr LL : %d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    | 100 |<=>| 101 |<=>| 500 |<=>| 501 |<=>NULL
    Total elements in singly circlualr LL : 4
    | 101 |<=>| 500 |<=>| 501 |<=>NULL
    Total elements in singly circlualr LL : 3

*/