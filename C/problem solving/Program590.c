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

    10> Create a function(DeleteFirst) for Deleting the value from first by using CALL BY ADDRESS.

    11> Create a function(DeleteLast) for Deleting the value from last by using CALL BY ADDRESS.

    12> Create a function(InsertAtPos) for Inserting the Value at position by using  CALL BY ADDRESS .

    13> Create a function(DeleteAtPos) for Delete the Value from position by using  CALL BY ADDRESS .

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
        printf("Linked List is empty !...");
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

void DeleteLast (PPNODE head)      // Call by Address
{
    PNODE temp = NULL ;             //  new Pointer temp (temporaray node) for holding the first node.

    if(*head == NULL)               // if LinkedList is Empty
    {
        printf("Linked List is empty !...");
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

        while(temp->next->next != NULL)
        {
            temp = temp->next ;
        }
        free(temp->next);
        temp->next = NULL ;       
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

void InsertAtPos(PPNODE head , int no , int iPos)       // Call by Address
{
    int iCountNode = 0 ;
    int iCnt = 0 ;

    PNODE newn = NULL ;
    PNODE temp = NULL ;

    iCountNode = Count(*head);                          // Passing the paramter to Count function for get the count of elements

    if( (iPos < 1) || (iPos > iCountNode+1) )
    {
        printf("Invalid Position !!!\n");
        return ;
    }

    if(iPos == 1)                                       // insert Pos == first
    {
        InsertFirst(head,no);                           // Passing the paramter to InsetFirst function
    }
    else if(iPos == iCountNode+1  )                     // insert Pos == last
    {
        InsertLast(head,no);                            // Passing the paramter to InsetLast function
    }
    else                                                // insert at Pos (between first and last)
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no ;
        newn->next = NULL ;

        temp = *head ;

        for(iCnt = 1 ; iCnt <= (iPos-1) ; iCnt++ )
        {
            temp = temp->next ;
        }
        newn->next = temp->next ;
        temp->next = newn ; 
    }
}

void DeleteAtPos(PPNODE head , int iPos)            // Call by Address
{
    int iCountNode = 0 ;
    int iCnt = 0 ;

    PNODE temp = NULL ;
    PNODE target = NULL ;

    iCountNode = Count(*head);                              // Passing the paramter to Count function for get the count of elements

    if(iPos < 1 || iPos > iCountNode)
    {
        printf("Inavlid Position !!\n");
        return ;
    }

    if(iPos == 1)                                           // Delete at Pos == first
    {
        DeleteFirst(head);                                  // Passing the paramter to DeleteFirst function
    }
    else if(iPos == iCountNode)                             // Delete at Pos == Last         
    {
        DeleteLast(head);                                   // Passing the paramter to DeleteLast function
    }
    else                                                    // Delete at Pos (between first and last)
    {
        temp = *head ;

        for(iCnt = 1 ; iCnt <= (iPos-1) ; iCnt++ )
        {
            temp = temp->next ;
        }
        target = temp -> next ;
        temp->next = target->next ;

        free(target);
    }
}

int main()
{
    PNODE first = NULL ;        // first is pointer 
    int iNo = 0 , iPos = 0 , iRet = 0 ;

    int iOption = 0 ;

    while(1)
    {
        printf("______________________________________________________________________________________________________\n");
        printf("1 : Insert new element at first position \n");
        printf("2 : Insert new element at last position \n");
        printf("3 : Insert new element at given position \n");
        printf("4 : Delete the element from first position \n");
        printf("5 : Delete the element from last position \n");
        printf("6 : Delete the element from given position \n");
        printf("7 : Display the elements \n");
        printf("8 : Count of elements \n");
        printf("9 : Terminate the application \n");
        printf("______________________________________________________________________________________________________\n");
        printf("Please Select the targeted operation : \n");
        scanf("%d",&iOption);
        printf("______________________________________________________________________________________________________\n");

        if(iOption == 1)
        {
            printf("Enter the element : \n");
            scanf("%d",&iNo);

            InsertFirst(&first,iNo);

            printf("Element succesfully inserted.\n");
        }

        else if(iOption == 2)
        {
            printf("Enter the element : \n");
            scanf("%d",&iNo);

            InsertLast(&first,iNo);

            printf("Element succesfully inserted.\n");
        }

        else if(iOption == 3)
        {
            printf("Enter the element : \n");
            scanf("%d",&iNo);

            printf("Enter the position to insert the element : \n");
            scanf("%d",&iPos);

            InsertAtPos(&first,iNo,iPos);

            printf("Element succesfully inserted.\n");
        }

        else if(iOption == 4)
        {
            DeleteFirst(&first);

            printf("Element deleted succesfully.\n");
        }

        else if(iOption == 5)
        {
            DeleteLast(&first);

            printf("Element deleted succesfully.\n");
        }

        else if(iOption == 6)
        {
            printf("Enter the position to delete the element :\n");
            scanf("%d",&iPos);

            DeleteAtPos(&first,iPos);

            printf("Element deleted succesfully.\n");
        }

        else if(iOption == 7)
        {
            printf("Elements of LL are : \n");
            Display(first);
        }

        else if(iOption == 8)
        {
            iRet = Count(first);
            printf("Total Elements in LL are : %d\n",iRet);
        }

        else if(iOption == 9)
        {
            printf("Thank you for using the application \n");
            break ;
        }

        else
        {
            printf("Invalid Option !!!\n");
        }
    }

   

    return 0 ;
}

/*
OUTPUT

______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
1
______________________________________________________________________________________________________
Enter the element :
100
Element succesfully inserted.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
7
______________________________________________________________________________________________________
Elements of LL are :
| 100 |-> NULL
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
1
______________________________________________________________________________________________________
Enter the element :
200
Element succesfully inserted.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
2
______________________________________________________________________________________________________
Enter the element :
900
Element succesfully inserted.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
2
______________________________________________________________________________________________________
Enter the element :
1000
Element succesfully inserted.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
7
______________________________________________________________________________________________________
Elements of LL are :
| 200 |->| 100 |->| 900 |->| 1000 |-> NULL
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
3
______________________________________________________________________________________________________
Enter the element :
5000
Enter the position to insert the element :
3
Element succesfully inserted.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
7
______________________________________________________________________________________________________
Elements of LL are :
| 200 |->| 100 |->| 900 |->| 5000 |->| 1000 |-> NULL
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
1
______________________________________________________________________________________________________
Enter the element :
300
Element succesfully inserted.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
7
______________________________________________________________________________________________________
Elements of LL are :
| 300 |->| 200 |->| 100 |->| 900 |->| 5000 |->| 1000 |-> NULL
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
3
______________________________________________________________________________________________________
Enter the element :
111111
Enter the position to insert the element :
3
Element succesfully inserted.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
7
______________________________________________________________________________________________________
Elements of LL are :
| 300 |->| 200 |->| 100 |->| 111111 |->| 900 |->| 5000 |->| 1000 |-> NULL
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
4
______________________________________________________________________________________________________
Element deleted succesfully.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
7
______________________________________________________________________________________________________
Elements of LL are :
| 200 |->| 100 |->| 111111 |->| 900 |->| 5000 |->| 1000 |-> NULL
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
5
______________________________________________________________________________________________________
Element deleted succesfully.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
7
______________________________________________________________________________________________________
Elements of LL are :
| 200 |->| 100 |->| 111111 |->| 900 |->| 5000 |-> NULL
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
6
______________________________________________________________________________________________________
Enter the position to delete the element :
3
Element deleted succesfully.
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
7
______________________________________________________________________________________________________
Elements of LL are :
| 200 |->| 100 |->| 111111 |->| 5000 |-> NULL
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
8
______________________________________________________________________________________________________
Total Elements in LL are : 4
______________________________________________________________________________________________________
1 : Insert new element at first position
2 : Insert new element at last position
3 : Insert new element at given position
4 : Delete the element from first position
5 : Delete the element from last position
6 : Delete the element from given position
7 : Display the elements
8 : Count of elements
9 : Terminate the application
______________________________________________________________________________________________________
Please Select the targeted operation :
9
______________________________________________________________________________________________________
Thank you for using the application
    
*/