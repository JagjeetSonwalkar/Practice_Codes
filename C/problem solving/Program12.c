//  Accept the radius from the user and diplay Area of Circle .

#include<stdio.h>

float CalculateRadius (float fValue)
{
    float fArea = 0.0f ;

    fArea = 3.14 * fValue * fValue ;

    return fArea ;
}

int main()
{
    float fRadius = 0.0f , fRet = 0.0f ;

    printf("Enter the Radius : \n");
    scanf("%f",&fRadius);

    fRet = CalculateRadius(fRadius);

    printf("Area of circle is : %f \n ",fRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Radius :
    25.10
    Area of circle is : 1978.231445


    Enter the Radius :
    5
    Area of circle is : 78.500000

*/