/*
Input : Abiut CstAfB
Output : 4
ABab
*/

#include<stdio.h>

int CountNonCaptialChar (char *cPtr)
{
    int iCount = 0 ;

    while(*cPtr != '\0')
    {
        if(*cPtr == 'a' || *cPtr == 'b' || *cPtr == 'A' || *cPtr == 'B')
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

    iRet = CountNonCaptialChar(cString);

    printf("Count of 'a','A','b','B' character's present in String is : %d\n",iRet);

    return 0;
}

/*
    OUTPUT

    Enter string :
    bat and ball
    Count of 'a','A','b','B' character's present in String is : 5

    
    Enter string :
    cat cow and c is ...
    Count of 'a','A','b','B' character's present in String is : 2

    
    Enter string :
    IPL is fully action
    Count of 'a','A','b','B' character's present in String is : 1

   
    Enter string :
    Abiut CstAfB
    Count of 'a','A','b','B' character's present in String is : 4

    
    Enter string :
    Live match ! or Hilight's match !
    Count of 'a','A','b','B' character's present in String is : 1

*/