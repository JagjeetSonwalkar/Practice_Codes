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
    struct node obj1 ;               // object of struct node
    struct node obj2 ;
    struct node obj3 ;

    struct node *ptr = &obj1 ;        // ptr is pointer which store the address of 1st object

    obj1.data = 11 ;                 // inisilization the value by using Dot operator (Direct accessing)
    obj2.data = 21 ;
    obj3.data = 31 ;

    obj1.next = &obj2 ;
    obj2.next = &obj3 ;
    obj3.next = NULL ;

    return 0 ;
}

