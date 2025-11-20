// Display the length of String using  function and get string from user .

#include<stdio.h>

int StringLength (char cPtr[])
{
    int iCnt = 0 , iCount = 0 ;

    for(iCnt = 0 ; cPtr[iCnt] != '\0' ; iCnt++)
    {
        iCount++;
    }
    return iCount ;
}

int main()
{
    char cString[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",cString);

    iRet = StringLength(cString);  

    printf("String length is : %d\n",iRet);

    return 0;
}

/*
    OUTPUT

    Enter string :
    name
    String length is : 4

    
    Enter string :
    apple is red
    String length is : 12


    Enter string :
    sky is blue
    String length is : 11

*/