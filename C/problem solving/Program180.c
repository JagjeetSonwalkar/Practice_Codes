// Convert Low to High and low to high Character and  get string from user .

#include<stdio.h>

void toggleString (char *cPtr)
{
    while(*cPtr != '\0')
    {
        if(*cPtr >= 'a' && *cPtr <= 'z')
        {
            *cPtr = *cPtr - 32 ;
        }
        else
        {
            *cPtr = *cPtr + 32 ;
        }
        cPtr++;
    }
}

int main()
{
    char cString[50] ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    toggleString(cString);

    printf("Updated String is : %s\n",cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Apple is good
    Updated String is : aPPLE@IS@GOOD

    Enter the String :
    apple is red
    Updated String is : APPLE@IS@RED

    Enter the String :
    APPLE IS RED
    Updated String is : apple@is@red

*/