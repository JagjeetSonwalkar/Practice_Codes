// Display the Full Name and get the Full Name form user .

#include<stdio.h>

int main()
{
    char cFullName[30] ;

    printf("Enter the Full Name : \n");
    scanf("%[^'\n']s",&cFullName);          // Accept the string till new line (Accept the string till he enter)

    printf("Full Name is : %s \n",cFullName);

    return 0 ;
}

/*
    OUTPUT

    Enter the Full Name :
    Virat kholi
    Full Name is : Virat kholi


    Enter the Full Name :
    Rohit Sharma
    Full Name is : Rohit Sharma


    Enter the Full Name :
    Black White
    Full Name is : Black White


    Enter the Full Name :
    Captian Rohit Sharma
    Full Name is : Captian Rohit Sharma
    
*/