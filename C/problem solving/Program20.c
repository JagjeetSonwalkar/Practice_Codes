 /* we have three class in school 8th,9th,10th classes 
    and diplay there exam timing  
    8th -> 9.30 , 9th -> 10.30 , 10th -> 11.30
*/

#include<stdio.h>

void Display (int iValue)
{
    if(iValue == 8)
    {
        printf("Exam timing of 8th standard is ' 9.30 AM '.\n");
    }
    else if(iValue == 9)
    {
        printf("Exam timing of 9th standard is ' 10.30 AM '.\n");
    }
    else if(iValue == 10)
    {
        printf("Exam timing of 10th standard is ' 11.30 AM '.\n");
    }
    else
    {
        printf("Sorry we dont have any information !!! \n");
    }
}

int main()
{
    int iStandard = 0 ;

    printf("Enter the standard : \n ");
    scanf("%d",&iStandard);

    Display(iStandard);

}

/*
    OUTPUT

    Enter the standard :
    1
    Sorry we dont have any information !!!

    Enter the standard :
    8
    Exam timing of 8th standard is ' 9.30 AM '.


    Enter the standard :
    9
    Exam timing of 9th standard is ' 10.30 AM '.


    Enter the standard :
    10
    Exam timing of 10th standard is ' 11.30 AM '.


    Enter the standard :
    11
    Sorry we dont have any information !!!

*/