// Display the String without using any loop's .

#include<stdio.h>

int main()
{
    char cString[50];

    printf("Enter the String : \n");
    scanf("%s",cString);

    printf("String is : %s \n",cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    sky is blue
    String is : sky


    Enter the String :
    black colour is black
    String is : black


    Enter the String :
    black is dark
    String is : black

*/