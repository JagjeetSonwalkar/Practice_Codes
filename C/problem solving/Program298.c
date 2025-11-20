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

    return 0 ;
}
