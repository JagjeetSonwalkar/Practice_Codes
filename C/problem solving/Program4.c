// Sum the two values & get the two values from user

#include<stdio.h>

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iSum = 0 ;

    printf("Enter the First Number : \n ");
    scanf("%d",&iValue1);

    printf("Enter the Second Number : \n ");
    scanf("%d",&iValue2);

    iSum = iValue1 + iValue2 ;

    printf("Sum of two Number is : %d \n",iSum);

    return 0;
}

/*
OUTPUT

Enter the First Number :
 10
Enter the Second Number :
 20
Sum of two Number is : 30

Enter the First Number :
 11
Enter the Second Number :
 21
Sum of two Number is : 32

Enter the First Number :
 500
Enter the Second Number :
 896
Sum of two Number is : 1396

Enter the First Number :
 852
Enter the Second Number :
 963
Sum of two Number is : 1815

*/