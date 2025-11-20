// Accept the String from user and Display the String Reverse.

#include<stdio.h>

void DisplayStringReverse (char *str)       // N/2
{
    char *Start = str ;
    char *End = str ;

    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
}

int main()
{
    char cString[30];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    DisplayStringReverse(cString);

    printf("Reverse String is : %s\n",cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Sky is Red !
    Reverse String is : ! deR si ykS


    Enter the String :
    Cloud is black!
    Reverse String is : !kcalb si duolC

  
    Enter the String :
    1234456
    Reverse String is : 6544321

*/