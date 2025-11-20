// Display the Count Vowel(aeiou) in the String and get string from user . 

#include<stdio.h>

int Count_aeiou (char *cPtr)
{
    int iCount = 0 ;

    while(*cPtr != '\0')        // Case Sensitive
    {
        if(*cPtr == 'a' || *cPtr == 'e' || *cPtr == 'i' || *cPtr == 'o' || *cPtr == 'u')
        {
            iCount++ ;
        }
        cPtr++ ;
    }

    return iCount ;
}

int main()
{
    char cString[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",cString);

    iRet = Count_aeiou(cString);

    printf("Count of vowel in String is : %d\n",iRet);

    return 0;
}

/*
    OUTPUT

    Enter string :
    apple
    Count of vowel in String is : 2

   
    Enter string :
    Apple
    Count of vowel in String is : 1

  
    Enter string :
    aeiou
    Count of vowel in String is : 5

   
    Enter string :
    AEIOU
    Count of vowel in String is : 0

*/