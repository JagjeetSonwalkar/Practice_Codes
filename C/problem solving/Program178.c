// Convert High to Low Character and  get string from user .

#include<stdio.h>

void HightoLowCharacter (char *cPtr)
{
    while(*cPtr != '\0')
    {
        if(*cPtr >= 'A' && *cPtr <= 'Z')
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

    HightoLowCharacter(cString);

    printf("Updated String is : %s\n",cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    SKY IS BLUE
    Updated String is : sky is blue


    Enter the String :
    APPLE IS RED
    Updated String is : apple is red

*/