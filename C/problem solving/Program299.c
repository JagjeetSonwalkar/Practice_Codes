/*
    1> create a structure(self referencial structure)
    
    2> create a pointer name as first 

    3> Insilize the value to first pointer (to hold the address of 1st object)
*/ 

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node                
{
    int data ;              // size 4 byte
    struct node *next ;     // size 4 byte
};

int main()
{
    struct node *first = NULL ;        // first is pointer 

    struct node obj1 ;               // object of struct node
    struct node obj2 ;
    struct node obj3 ;

    obj1.data = 11 ;                 // inisilization the value by using Dot operator (Direct accessing)
    obj2.data = 21 ;
    obj3.data = 31 ;

    obj1.next = &obj2 ;
    obj2.next = &obj3 ;
    obj3.next = NULL ;

    first = &obj1 ;                 // first is pointer which store the address of 1st object


    printf("Value of obj1 is : %d\n",first->data);
    printf("Value of obj2 is : %d\n",first->next->data);
    printf("Value of obj3 is : %d\n",first->next->next->data);

    return 0 ;
}

/*
    OUTPUT

    Value of obj1 is : 11
    Value of obj2 is : 21
    Value of obj3 is : 31

*/