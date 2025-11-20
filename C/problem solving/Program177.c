// Check the  caharacter 'a' and replace with 'm' and  get string from user .

#include<stdio.h>

void ReplaceCharacter (char *cPtr)
{
    while(*cPtr != '\0')
    {
        if(*cPtr == 'a')
        {
            *cPtr = 'm';
        }
        cPtr++;
    }
}

int main()
{
    char cString[50] ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    ReplaceCharacter(cString);

    printf("Updated String is : %s \n",cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Sky is an blue
    Updated String is : Sky is mn blue

    Enter the String :
    mango is sweet
    Updated String is : mmngo is sweet

*/