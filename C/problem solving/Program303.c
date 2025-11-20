/*
    1> create a structure(self referencial structure)
    
    2> create a pointer name as first 

    3> Insitilize the value to first pointer ( this first pointer will hold the address of 1st node of the LL , Using this address we can access the whole LL)

    4> Create 2 function for :  CALL BY ADDRESS & CALL BY VALUE 

        CALL BY ADDRESS : if the function is going to modifiy the LL we are using the call by address technique.

        CALL BY Value : if the function is not going to modifiy the LL we are using the call by value technique.

    5> Now using typedef to make the code more readable and less confusiable 

    6> Create a function for Inserting the Value by using  CALL BY ADDRESS .
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

void InsertFirst(PNODE head , int no)       // Call by value
{}

void Demo2(PPNODE head)      // Call by Address
{}

int main()
{
    PNODE first = NULL ;        // first is pointer 

    InsertFirst(&first , 11) ;
    InsertFirst(&first , 21) ;
    InsertFirst(&first , 21) ;

    return 0 ;
}