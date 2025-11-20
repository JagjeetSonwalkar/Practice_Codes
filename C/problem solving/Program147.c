// Display the Full Name and get the Full Name form user .

#include<stdio.h>

int main()
{
    char cName[30] ;

    printf("Enter the Full Name : \n");
    scanf("%s",&cName);                      // Accepts till first space only

    printf("Full Name is : %s \n",cName);
    
    return 0 ;
}

/*
    OUTPUT

    Enter the Full Name :
    Virat sharma
    Full Name is : Virat

    C:\Users\DELL\OneDrive\Desktop\Logic>myexe
    Enter the Full Name :
    Tom Green
    Full Name is : Tom
    
*/