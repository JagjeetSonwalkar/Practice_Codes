// Display the Full Name and get the Full Name form user using Character specifier .

#include<stdio.h>

int main()
{
    char cName[30] ;
    char *ptr = cName ;

    printf("Enter the Full Name : \n");
    scanf("%[^'\n']s",&cName);

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    printf("%c",*ptr);
    ptr++;

    return 0 ;
}

/*
    OUTPUT

    Enter the Full Name :
    Virat Kholi
    Virat Kholi
    
    Enter the Full Name :
    Rohit yadav
    Rohit yadav

*/