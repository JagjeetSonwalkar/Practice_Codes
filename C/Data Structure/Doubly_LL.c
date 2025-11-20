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
    int iCountNode = 0 , iCnt = 0  ;

    iCountNode = Count(*head);

    PNODE target = NULL ;
    PNODE temp = NULL ;

    if(iPos < 1 || iPos > iCountNode)
    {
        printf("Invalid Position !!! \n");
        return  ;
    }

    if(iPos == 1)
    {
        DeleteFirst(head);
    }
    if(iPos == iCountNode)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head ;

        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp->next ;
        }
         
        target = temp->next ;           // store delete node into target variable
        temp->next = target->next ;     // insitilse next value of delete node before
        temp->next->prev = temp ;       // insitilse prev value of delete node After
        free(target);                   // Delete node   
    }
}

int main()
{
    PNODE first = NULL ;       // first is pointer

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

            InsertFirst(&first,iNo);

            printf("Element succesfully inserted .\n");
        }
        else if(iOption == 2)
        {
            printf("Enter the Data : \n");
            scanf("%d",&iNo);

            InsertLast(&first,iNo);

            printf("Element succesfully inserted .\n");
        }
        else if(iOption == 3)
        {
            printf("Enter the Position : \n");
            scanf("%d",&iPos);

            printf("Enter the Data : \n");
            scanf("%d",&iNo);

            InsertAtPos(&first,iNo,iPos);

            printf("Element succesfully inserted .\n");
        }
        else if(iOption == 4)
        {
            DeleteFirst(&first);

            printf("First Element Deleted succesfully .\n");
        }
        else if(iOption == 5)
        {
            DeleteLast(&first);

            printf("Last Element Deleted succesfully .\n");
        }
        else if(iOption == 6)
        {
            printf("Enter the Position to delete element : \n");
            scanf("%d",&iPos);

            DeleteAtPos(&first,iPos);

            printf("Element Deleted succesfully .\n");
        }
        else if(iOption == 7)
        {
            Display(first);
        }
        else if(iOption == 8)
        {
            iRet = Count(first);
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