/*
    <-----------------------------------------------------------------------Queue---------------------------------------------------------------------------------->
*/

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

void enQueue(PPNODE head , int no)             //  insert element into Queue
{
    PNODE newn = NULL ;
    PNODE temp = NULL ;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn->next = NULL ;

    if(*head == NULL)
    {
        *head = newn ;
    }
    else
    {
        temp = *head ;

        while(temp->next != NULL)
        {
            temp = temp->next ;
        }
        temp->next = newn ;
    }
}

int deQueue(PPNODE head)               // delete element from the Queue
{
    int no = -1 ;
    PNODE temp = NULL ;

    if(*head == NULL)               // Queue is empty
    {
        printf("Queue is empty !! \n");
    }
    else if((*head)->next == NULL)      // Queue has only one node 
    {
        no = (*head)->data ;
        free (*head) ;
        *head = NULL ;
    }
    else                               // Queue has more than one node 
    {
        no = (*head)->data ;
        temp = *head ;
        *head = (*head)->next ;
        free(temp);
    }
    return no ;
}

void Display(PNODE head)            //  Queue STACK
{
    printf("Queue is : \n");

    while(head != NULL)
    {
        printf("|  %d\t",head->data);
        head = head->next ;
    }
    printf("|\n");
}

int Count(PNODE head)               // Count of elements from Queue
{
    int iCount = 0 ;

    while(head != NULL)
    {
        iCount++ ;
        head = head->next ;
    }

    return iCount ;
}

int main()
{
    PNODE first = NULL ;

    int iRetCount = 0 , iRetdeQueue = 0 ;

    enQueue(&first,101);
    enQueue(&first,201);
    enQueue(&first,301);
    enQueue(&first,401);
    enQueue(&first,501);
    enQueue(&first,601);

    Display(first);
    iRetCount = Count(first);
    printf("Total elements in Queue are : %d\n",iRetCount);

    iRetdeQueue = deQueue(&first);
    printf("deQueue element is : %d\n",iRetdeQueue);

    Display(first);
    iRetCount = Count(first);
    printf("Total elements in Queue are : %d\n",iRetCount);

    return 0 ;
}

/*
    OUTPUT

    Queue is :
    |  101  |  201  |  301  |  401  |  501  |  601  |
    Total elements in Queue are : 6
    deQueue element is : 101
    Queue is :
    |  201  |  301  |  401  |  501  |  601  |
    Total elements in Queue are : 5

*/