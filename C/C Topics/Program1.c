// # is pre preocessor directive symbol ,
// it a preporcessor with standard input output header file(stdio.h) which contain functionality to display the output as well as to accept the input
#include<stdio.h>

// The Operating System will call the main function implicitly
// int is a premitive datatype of numeric type (for example 1248) , main is a entry point function from where the exection of a program gets start
int main()
{
    // printf(); is inbuilt function of C Programming to display the content on console.
    // The String Jay Ganesh.. is written inside the Double cot i.e, "" 
    // \n is used to display the content on new line 
    // semi_colon indicate that the end of the statement for example (in english after ending any sentance we writte a dot(.) to indicate the sentance is end)
    printf("Jay Ganesh..\n");

    //  As C is Native programming language as it can communicate with Operating System , 
    // So it return main function value i.e, zero(0) to Operating System to indicate that the program is successfully terminated without any failure
    return 0 ;
}

/*
/////////////////////////////////////////////////////////////////////////////////////////////////////////

OUTPUT :-

C:\Users\DELL>cd OneDrive/Desktop/PPA

C:\Users\DELL\OneDrive\Desktop\PPA>gcc Program1.c -o myexe

C:\Users\DELL\OneDrive\Desktop\PPA>myexe
Jay Ganesh..

/////////////////////////////////////////////////////////////////////////////////////////////////////////

    . gcc       : it is a name of C Programming language compiler
    . Program1  : it is a name of C file (*it can be any name)
    . -o        : it a flag to genrate output
    . myexe     : it is a name of exexutable file (*it can be any name)

/////////////////////////////////////////////////////////////////////////////////////////////////////////

C:\Users\DELL\OneDrive\Desktop\PPA>gcc Program1.c -save-temps -o myexe

C:\Users\DELL\OneDrive\Desktop\PPA>myexe
Jay Ganesh..

(This below command is used to check the intermediate file created by gcc commands )

/////////////////////////////////////////////////////////////////////////////////////////////////////////

*/