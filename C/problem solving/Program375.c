/*
    <-----------------------------------------------------------------------STACK---------------------------------------------------------------------------------->
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

void push(PPNODE head , int no)             //  insert element into stack
{
    PNODE newn = NULL ;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn->next = NULL ;

    if(*head == NULL)
    {
        *head = newn ;
    }
    else
    {
        newn->next = *head ;
        *head = newn ;
    }
}

int pop(PPNODE head)               // delete element from the stack
{
    int no = -1 ;
    PNODE temp = NULL ;

    if(*head == NULL)               // Stack is empty
    {
        printf("Stack is empty !! \n");
    }
    else if((*head)->next == NULL)      // stack has only one node 
    {
        no = (*head)->data ;
        free (*head) ;
        *head = NULL ;
    }
    else                               // stack has more than one node 
    {
        no = (*head)->data ;
        temp = *head ;
        *head = (*head)->next ;
        free(temp);
    }
    return no ;
}

void Display(PNODE head)            //  Display STACK
{
    printf("Stack is : \n");

    while(head != NULL)
    {
        printf("| %d |\n",head->data);
        head = head->next ;
    }
}

int Count(PNODE head)               // Count of elements from stack
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
    int iRetPop = 0 ;
    int iRetCount = 0 ;

    push(&first,101);
    push(&first,102);
    push(&first,103);
    push(&first,200);
    

    Display(first);
    iRetCount = Count(first);
    printf("Total elements in Stack are : %d\n",iRetCount);

    iRetPop = pop(&first);
    printf("poped element is : %d\n",iRetPop);

    Display(first);
    iRetCount = Count(first);
    printf("Total elements in Stack are : %d\n",iRetCount);

    iRetPop = pop(&first);
    printf("poped element is : %d\n",iRetPop);

    Display(first);
    iRetCount = Count(first);
    printf("Total elements in Stack are : %d\n",iRetCount);

    return 0 ;
}

/*
    OUTPUT

    Stack is :
    | 200 |
    | 103 |
    | 102 |
    | 101 |
    Total elements in Stack are : 4
    poped element is : 200
    Stack is :
    | 103 |
    | 102 |
    | 101 |
    Total elements in Stack are : 3
    poped element is : 103
    Stack is :
    | 102 |
    | 101 |
    Total elements in Stack are : 2

*/