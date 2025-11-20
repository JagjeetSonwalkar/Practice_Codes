/*
    1> create a structure(self referencial structure)
    
    2> create a pointer name as first 

    3> Insitilize the value to first pointer ( this first pointer will hold the address of 1st node of the LL , Using this address we can access the whole LL)

    4> Create 2 function for :  CALL BY ADDRESS & CALL BY VALUE 

        CALL BY ADDRESS : if the function is going to modifiy the LL we are using the call by address technique.

        CALL BY Value : if the function is not going to modifiy the LL we are using the call by value technique.

    5> Now using typedef to make the code more readable and less confusiable 
*/ 

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node                
{
    int data ;              // size 4 byte
    struct node *next ;     // size 4 byte
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void Demo1(PNODE head)       // Call by value
{}

void Demo2(PPNODE head)      // Call by Address
{}

int main()
{
    NODE *first = NULL ;        // first is pointer 

    NODE obj1 ;               // object of struct node
    NODE obj2 ;
    NODE obj3 ;

    obj1.data = 11 ;                 // inisilization the value by using Dot operator (Direct accessing)
    obj2.data = 21 ;
    obj3.data = 31 ;

    obj1.next = &obj2 ;
    obj2.next = &obj3 ;
    obj3.next = NULL ;

    first = &obj1 ;                 // first is pointer which store the address of 1st object

    Demo1(first);                   // Call by value : Address of first object or Value of first pointer (&obj1)
    Demo2(&first);                  // call by Address : Address of first pointer (&first)


    printf("Value of obj1 is : %d\n",first->data);                  //  11
    printf("Value of obj2 is : %d\n",first->next->data);            //  21
    printf("Value of obj3 is : %d\n",first->next->next->data);      //  31

    return 0 ;
}

/*
    OUTPUT

    Value of obj1 is : 11
    Value of obj2 is : 21
    Value of obj3 is : 31

*/