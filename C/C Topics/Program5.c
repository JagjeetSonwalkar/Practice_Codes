////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                          scanf function && foramt specifier                                  ////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{    
    char cBloodGroup = '\0' ;   
    int iRollNumber = 0 ;       
    float fSalary = 0.0f ;      
    double dSpeedofCar = 0.0 ;  

    printf("Enter the bool group\n");
    // scanf is a inbuilt function for accepting the input from the user
    // %c is format specifer mean in which datatype it will accept the input
    // &cBloodGroup is address of vairable to store the input at that variable
    scanf("%c",&cBloodGroup);
    printf("bool group : %c\n",cBloodGroup);

    printf("Enter the Roll Number\n");
    scanf("%d",&iRollNumber);
    printf("Roll Number : %d\n",iRollNumber);

    printf("Enter the salary\n");
    scanf("%f",&fSalary);
    printf("salary : %f\n",fSalary);

    printf("Enter your car speed\n");
    scanf("%lf",&dSpeedofCar);
    printf("car speed : %lf\n",dSpeedofCar);

    char name[20] = {'\0'} ;

    printf("Enter your full name : \n");
    scanf(" %[^'\n']c",name);           // it is special scanf function , the space before the % is flush.
    printf("Your name is : %s",name);
   
    return 0 ;
}

/*

Enter the bool group
A
bool group : A
Enter the Roll Number
25
Roll Number : 25
Enter the salary
50000.6528
salary : 50000.652344
Enter your car speed
0.5278238735
car speed : 0.527824
Enter your full name :
Tony stark
Your name is : Tony stark

*/