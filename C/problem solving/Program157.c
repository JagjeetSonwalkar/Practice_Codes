// Display the String without using any loop's .

#include<stdio.h>

int main()
{
    char cString[50];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    printf("String is : %s \n",cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    My name is Sky
    String is : My name is Sky


    Enter the String :
    Time is money
    String is : Time is money


    Enter the String :
    Play the game
    String is : Play the game

*/