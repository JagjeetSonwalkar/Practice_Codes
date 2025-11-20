//  Accept the radius from the user and diplay Area of Circle .

#include<stdio.h>

int main()

{
    float fRadius = 0.0f , fArea = 0.0f ;

    printf("Enter the Radius : \n ");
    scanf("%f",&fRadius);

    fArea = 3.14 * fRadius * fRadius ;

    printf("Area of Circle is : %f \n ",fArea);

    return 0 ;
}

/* 
    OUTPUT

    Enter the Radius :
    25.10
    Area of Circle is : 1978.231445

    Enter the Radius :
    5
    Area of Circle is : 78.500000

*/