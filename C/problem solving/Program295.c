// 1> create a structure(self referencial structure)

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

    printf("Size of struct node is : %d \n",sizeof(obj));       // size of struct node is : 8

    return 0 ;
}

/*
    OUTPUT

    Size of struct node is : 8

*/