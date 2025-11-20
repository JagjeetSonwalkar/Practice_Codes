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
    PNODE first = NULL ;
    PNODE last = NULL ;

    int iOption = 0 , iNo = 0 , iPos = 0 , iRet = 0 ;

    while(1)
    {
        printf("-----------------------------------------------------\n");
        printf("1 : Insert the element at first Position \n");
        printf("2 : Insert the element at Last Position \n");
        printf("3 : Insert the element at Required Position \n");
        printf("4 : Delete the element from first Position \n");
        printf("5 : Delete the element from Last Position \n");
        printf("6 : Delete the element from Required Position \n");
        printf("7 : Display the Linked List \n");
        printf("8 : Total Nodes Counts of LL \n");
        printf("9 : Exit \n");
        printf("-----------------------------------------------------\n");
        printf("Enter the Option : \n");
        scanf("%d",&iOption);
        printf("-----------------------------------------------------\n");

        if(iOption==1)
        {
            printf("Enter the Data : \n");
            scanf("%d",&iNo);

            InsertFirst(&first,&last,iNo);

            printf("Element succesfully inserted .\n");
        }
        else if(iOption == 2)
        {
            printf("Enter the Data : \n");
            scanf("%d",&iNo);

            InsertLast(&first,&last,iNo);

            printf("Element succesfully inserted .\n");
        }
        else if(iOption == 3)
        {
            printf("Enter the Position : \n");
            scanf("%d",&iPos);

            printf("Enter the Data : \n");
            scanf("%d",&iNo);

            InsertAtPos(&first,&last,iNo,iPos);

            printf("Element succesfully inserted .\n");
        }
        else if(iOption == 4)
        {
            DeleteFirst(&first,&last);

            printf("First Element Deleted succesfully .\n");
        }
        else if(iOption == 5)
        {
            DeleteLast(&first,&last);

            printf("Last Element Deleted succesfully .\n");
        }
        else if(iOption == 6)
        {
            printf("Enter the Position to delete element : \n");
            scanf("%d",&iPos);

            DeleteAtPos(&first,&last,iPos);

            printf("Element Deleted succesfully .\n");
        }
        else if(iOption == 7)
        {
            Display(first,last);
        }
        else if(iOption == 8)
        {
            iRet = Count(first,last);
            printf("Total elements in LL are : %d\n",iRet);
        }
        else if(iOption == 9)
        {
            break;
        }
        else
        {
            printf("Invalid Option !!!! \n");
        }
    }
    return 0 ;
}