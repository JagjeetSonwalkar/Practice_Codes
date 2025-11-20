// Display the String and get string from user .

#include<stdio.h>

void DisplayString (char *cPtr)
{
    while(*cPtr != '\0')
    {
        printf("%c",*cPtr);
        cPtr++;
    }

}

int main()
{
    char cString[50];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    printf("Entered String is : \n");
    DisplayString(cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Hello Ram
    Entered String is :
    Hello Ram
  
    Enter the String :
    Heloo virat
    Entered String is :
    Heloo virat

    Enter the String :
    your hello spelling is wrong
    Entered String is :
    your hello spelling is wrong

    Enter the String :
    sorry
    Entered String is :
    sorry

*/