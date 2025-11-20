// Accepts the mark from the user and calculate the percantage .

#include<stdio.h>

float CalculatePercentage (int iValue1 , int iValue2 )
{
    float fPercentage = 0.0f ;                                      

    fPercentage = ((float)iValue1 / (float)iValue2 ) * 100 ;        // Typecasting

    return fPercentage ;
}

int main()
{
    int iObtainedMarks = 0 , iTotalMarks = 0 ;
    float fRet = 0.0f ;

    printf("Enter the obtained mark : \n ");
    scanf("%d",&iObtainedMarks);

    printf("Enter the total marks : \n ");
    scanf("%d",&iTotalMarks);

    fRet = CalculatePercentage(iObtainedMarks , iTotalMarks);  

    printf("Percentage is : %f \n ",fRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the obtained mark :
    12
    ENter the total marks :
    500
    Percentage is : 2.400000


    Enter the obtained mark :
    500
    ENter the total marks :
    500
    Percentage is : 100.000000

    Enter the obtained mark :
    480
    ENter the total marks :
    500
    Percentage is : 96.000000


    Enter the obtained mark :
    250
    ENter the total marks :
    500
    Percentage is : 50.000000

*/