// Accept the String from user and Display the String Reverse.

#include<stdio.h>

void DisplayStringReverse(char *cString)        // 2N
{
    char *R = cString ;

    while(*R != '\0')
    {
        R++;
    }

    R-- ;

    while(R >= cString)
    {
        printf("%c",*R);
        R--;
    }
}

int main()
{
    char cArr[50] ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cArr);

    DisplayStringReverse(cArr);

    return 0 ;
}

/*
    Enter the String :
    Sky is blue.
    .eulb si ykS
    
    Enter the String :
    Time
    emiT

    Enter the String :
    Apple
    elppA
*/