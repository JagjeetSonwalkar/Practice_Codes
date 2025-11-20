// Display the length of String using unbuilt function and get string from user .

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);  

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