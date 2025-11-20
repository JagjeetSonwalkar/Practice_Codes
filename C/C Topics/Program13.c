////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                  structure                                             
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

# pragma pack(1)            // 1,2,4,8

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct Demo
{
    int no ;
    char BG ;
    float salary ;
    double tSalary ;
};

int main()
{
    struct Demo dobj ;

    // initialize the member of structure by (Dot operator OR direct accessing operator)
    dobj.no = 10 ;
    dobj.BG = 'A' ;
    dobj.salary = 50000.8989f ;
    dobj.tSalary = 555555.555555 ;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    struct Demo dobjx ;
    struct Demo *ptr = NULL ;
    ptr = &dobjx ;

    // initialize the member of structure by (Arrow operator OR Indirect accessing operator)

    ptr->no = 20 ;
    ptr->BG = 'B';
    ptr->salary = 125125.125125f ;
    ptr->tSalary = 12.121245 ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Array of Strcuture object
    struct Demo obj[2] ;

    obj[0].no = 10 ;
    obj[0].BG = 'A';
    obj[0].salary = 60000.2334f ;
    obj[0].tSalary = 2313232.23434 ;

    obj[1].no = 20 ;
    obj[1].BG = 'B';
    obj[0].salary = 65000.2334f ;
    obj[0].tSalary = 225458585.23434 ;

    obj[2].no = 30 ;
    obj[2].BG = 'C';
    obj[0].salary = 56000.2334f ;
    obj[0].tSalary = 2101010.23434 ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Size of struct Demo is :%d\n",sizeof(dobj));        // 24 , But by using #pragma pack(1) we get 17 size of struct Demo
   
    printf("%d\n",dobj.no);
    printf("%c\n",dobj.BG);
    printf("%f\n",dobj.salary);
    printf("%lf\n",dobj.tSalary);

    printf("%d\n",ptr->no);
    printf("%c\n",ptr->BG);
    printf("%f\n",ptr->salary);
    printf("%lf\n",ptr->tSalary);

    return 0 ;
}

/*

Size of struct Demo is :17
10
A
50000.898438
555555.555555
30
C
125125.125000
12.121245

*/