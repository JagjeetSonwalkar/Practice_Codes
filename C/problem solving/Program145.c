// Display the String : "Mumbai"

#include<stdio.h>

int main()
{
    char Name[] = "Mumbai";

    // Using String format specifer.
    printf("%s",Name);

    printf("\n");

    // Using Character format specifer.
    printf("%c",Name[0]);
    printf("%c",Name[1]);
    printf("%c",Name[2]);
    printf("%c",Name[3]);
    printf("%c",Name[4]);
    printf("%c",Name[5]);

    return 0 ;
}

/*
    OUTPUT

    Mumbai
    Mumbai
*/