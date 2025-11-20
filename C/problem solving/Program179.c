// Convert Low to High Character and  get string from user .

#include<stdio.h>

void LowtoHighCharacter (char *cPtr)
{
    while(*cPtr != '\0')
    {
        if(*cPtr >= 'a' && *cPtr <= 'z')
        {
            *cPtr = *cPtr - 32 ;
        }
        cPtr++;
    }
}

int main()
{
    char cString[50] ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    LowtoHighCharacter(cString);

    printf("Updated String is : %s\n",cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    sky is blue
    Updated String is : SKY IS BLUE


    Enter the String :
    Apple is red
    Updated String is : APPLE IS RED

*/