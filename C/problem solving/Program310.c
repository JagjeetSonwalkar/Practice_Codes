/*
    1> create a structure(self referencial structure)
    
    2> create a pointer name as first 

    3> Insitilize the value to first pointer ( this first pointer will hold the address of 1st node of the LL , Using this address we can access the whole LL)

    4> Create 2 function for :  CALL BY ADDRESS & CALL BY VALUE 

        CALL BY ADDRESS : if the function is going to modifiy the LL we are using the call by address technique.

        CALL BY Value : if the function is not going to modifiy the LL we are using the call by value technique.

    5> Now using typedef to make the code more readable and less confusiable 

    6> Create a function(InsertFirst) for Inserting the Value at first by using  CALL BY ADDRESS .

    7> Create a function(InsertLast) for Inserting the Value at last by using  CALL BY ADDRESS .

    8> Create a function(Display) for Displaying the Value of LL by using CALL BY VALUE

    9> Create a function(Count) for Counting the Value of LL by using CALL BY VALUE

    10> Create a function(DeleteFirst) for Deleting the value at first by using CALL BY ADDRESS.

*/ 

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node                // size of this structure will 8 byte
{
    int data ;              // size 4 byte
    struct node *next ;     // size 4 byte
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void InsertFirst(PPNODE head , int no)       // Call by Address
{
    PNODE newn = NULL ;                     //  new Pointer newn (new node) for insert the values at first .

    // newn = (int *)malloc(sizeof(int));
    newn = (PNODE)malloc(sizeof(NODE));         // Allocate the memory

    newn->data = no ;
    newn->next = NULL ;

    if(*head == NULL )                  // case 1 : LL is empty
    {
        *head = newn ;
    }
    else                                // case 2 : LL conatin atleast 1 node
    {
        newn->next = *head  ;           // First assign the newnodes next 
        *head = newn ;                  // then , Now tell the first node is newn
    }
}

void InsertLast(PPNODE head , int no)       // Call by Address
{
    PNODE newn = NULL ;                     //  new Pointer newn (new node) for insert the values at last .
    PNODE temp = NULL ;                     //  new Pointer temp (temporaray node) for holding the first node. 

    // newn = (int *)malloc(sizeof(int));
    newn = (PNODE)malloc(sizeof(NODE));         // Allocate the memory

    newn->data = no ;
    newn->next = NULL ;

    if(*head == NULL )                  // case 1 : LL is empty
    {
        *head = newn ;
    }
    else                               // case 2 : LL conatin atleast 1 node
    {
        temp = *head ;

        while(temp->next != NULL)
        {
            temp = temp->next ;
        }

        temp->next = newn ;
    }
}

void DeleteFirst (PPNODE head)      // Call by Address
{
    PNODE temp = NULL ;             //  new Pointer temp (temporaray node) for holding the first node.

    if(*head == NULL)               // if LinkedList is Empty
    {
        return ;
    }
    else if( (*head)->next == NULL )        // if LinkedList has only one NODE
    {
        free(*head);
        *head = NULL ;
    }
    else                                    // if LinkedList has more than one NODE                
    {
        temp = *head ;
        *head = (*head)->next ;
        free(temp);
    }
}

void Display(PNODE head)            //  Call by Value
{
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next ;
    }
    printf(" NULL \n");
}

int Count(PNODE head)            //  Call by Value
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
    PNODE first = NULL ;        // first is pointer 
    int iRet = 0 ;

    InsertFirst(&first , 51) ;
    InsertFirst(&first , 31) ;
    InsertFirst(&first , 21) ;

    InsertLast(&first , 101);
    InsertLast(&first , 201);

    iRet = Count(first);

    printf("Number of Elements in LinkedList are : %d \n",iRet);
    Display(first);

    DeleteFirst(&first);
    iRet = Count(first);
    printf("Number of Elements in LinkedList are : %d \n",iRet);
    Display(first);
    
    DeleteFirst(&first);
    iRet = Count(first);
    printf("Number of Elements in LinkedList are : %d \n",iRet);
    Display(first);

    return 0 ;
}

/*
    OUTPUT

    Number of Elements in LinkedList are : 5
    | 21 |->| 31 |->| 51 |->| 101 |->| 201 |-> NULL
    Number of Elements in LinkedList are : 4
    | 31 |->| 51 |->| 101 |->| 201 |-> NULL
    Number of Elements in LinkedList are : 3
    | 51 |->| 101 |->| 201 |-> NULL
    
*/