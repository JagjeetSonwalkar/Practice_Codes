// Accepts the mark from the user and calculate the percantage .

#include<stdio.h>

int main()
{
    int iObtainedMarks = 0 , iTotalMarks = 0 ;
    float  fPercentage = 0.0f ;

    printf("Enter the obtained Marks : \n ");
    scanf("%d",&iObtainedMarks);

    printf("Enter the total marks : \n ");
    scanf("%d",&iTotalMarks);

    fPercentage = ((float)iObtainedMarks / (float)iTotalMarks) * 100 ;      // Typecasting

    printf("Percentage is : %f \n ",fPercentage);

    return 0 ;
}

/*
    OUTPUT

    Enter the obtained Marks :
    250
    Enter the total marks :
    500
    Percentage is : 50.000000


    Enter the obtained Marks :
    12
    Enter the total marks :
    500
    Percentage is : 2.400000


    Enter the obtained Marks :
    500
    Enter the total marks :
    500
    Percentage is : 100.000000


    Enter the obtained Marks :
    490
    Enter the total marks :
    500
    Percentage is : 98.000000

*/