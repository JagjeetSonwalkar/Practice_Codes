// Display the String : "Mumbai"

#include<stdio.h>
int main()
{
    char cCity[] = {'M','u','m','b','a','i','\0'};

    // Using String format specifer.
    printf("%s",cCity);

    printf("\n");

    // Using Character format specifer.
    printf("%c",cCity[0]);
    printf("%c",cCity[1]);
    printf("%c",cCity[2]);
    printf("%c",cCity[3]);
    printf("%c",cCity[4]);
    printf("%c",cCity[5]);

    return 0 ;
}

/*
    OUTPUT

    Mumbai
    Mumbai
*/