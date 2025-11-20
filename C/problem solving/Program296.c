/*
    1> create a structure(self referencial structure)
    
    2> create a pointer to store the address of 1st object
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
    struct node obj ;       // object of struct node

    struct node *ptr = &obj ;      // ptr is pointer which store the address of 1st object

    obj.data = 11 ;                // inisilization the value by using Dot operator (Direct accessing)
    ptr->data = 11 ;              //  inisilization the value by using Arrow operator (InDirect accessing)

    obj.next = NULL ;
    ptr->next = NULL ;

    printf("value is : %d\n",obj.data);
    printf("value is : %d\n",ptr->data);

    return 0 ;
}

/*
    OUTPUT

    value is : 11
    value is : 11

*/