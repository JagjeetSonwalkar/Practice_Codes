// Display the Count  of caharacter 'm' of String and get string from user .

#include<stdio.h>

int CountCharacter (char *cPtr , char ch)
{
    int iCount = 0 ;

    while(*cPtr != '\0')
    {
        if(*cPtr == ch)
        {
            iCount++;
        }
        cPtr++;
    }
    return iCount ;
}

int main()
{
    char cString[50] ;
    int iRet = 0 ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    printf("String is : %s \n",cString);

    iRet = CountCharacter(cString,'m');

    printf("%d\t",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    I am Virat
    String is : I am Virat
    1
    
    Enter the String :
    mango is sweet and mango is tasty
    String is : mango is sweet and mango is tasty
    2
    
    Enter the String :
    men and women are same if....
    String is : men and women are same if....
    3
    

*/