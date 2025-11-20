// Dynamic Array : Accept n number for user and perform the addition of that n number's 

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;
    //      1           2          3 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];    // 4
    }
    return iSum;
}

int main()
{
    int *ptr = NULL , iLength = 0, iCnt = 0, iRet = 0;

    //Step 1 : Accept the number of elements form user
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //Step 2 : Allocate that memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));

    //Step 3 : Accept the values and store into the dynamic memory
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    //Step 4 : Perform the operations (Logic)
    iRet = Addition(ptr,iLength);
    printf("Addition is : %d\n",iRet);

    //Step 5 : Deallocate that memory 
    free(ptr);

    return 0;
}

/*
    OUTPUT

    Enter number of elements :
    3
    Enter the elements :
    10
    20
    30
    Addition is : 60

    Enter number of elements :
    5
    Enter the elements :
    1
    -1
    1
    -1
    100
    Addition is : 100

*/