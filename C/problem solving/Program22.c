 /* we have three class in school 8th,9th,10th classes 
    and diplay there exam timing  
    8th -> 9.30 , 9th -> 10.30 , 10th -> 11.30
*/

#include<stdio.h>

void Display (int iValue)
{
    switch(iValue)
    {
        case 8 :
            printf("Exam timing of 8th standard is ' 9.30 AM '.\n");
            break ;

        case 9 :
            printf("Exam timing of 9th standard is ' 10.30 AM '.\n");
            break ;

        case 10 :
            printf("Exam timing of 10th standard is ' 11.30 AM '.\n");
            break ;

    }
}

int main()
{
    int iStandard = 0 ;

    printf("Enter the Standard : \n ");
    scanf("%d",&iStandard);

    Display(iStandard);

    return 0 ;
}

/*
    OUTPUT

    Enter the Standard :
    1

    Enter the Standard :
    8
    Exam timing of 8th standard is ' 9.30 AM '.

    Enter the Standard :
    9
    Exam timing of 9th standard is ' 10.30 AM '.

    Enter the Standard :
    10
    Exam timing of 10th standard is ' 11.30 AM '.

    Enter the Standard :
    11

*/