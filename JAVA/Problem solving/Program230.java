// Display Addition of two number and get the value from the user .

import java.util.*;

class Program230
{
    public static int Addition (int iValue1 , int iValue2)
    {
        int iSum = 0 ;

        iSum = iValue1 + iValue2 ;

        return iSum ;
    }

    public static void main(String ag[])
    {
        int iNo1 = 0 , iNo2 = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the first number :");
        iNo2 = sobj.nextInt();

        iRet = Addition(iNo1,iNo2);

        System.out.println("Addition of two values is :"+iRet);
    }
}

/*
    OUTPUT

    Enter the first number :
    10
    Enter the first number :
    11
    Addition of two values is :21

    
    Enter the first number :
    151
    Enter the first number :
    -100
    Addition of two values is :51

    
    Enter the first number :
    -10
    Enter the first number :
    -10
    Addition of two values is :-20

    
    Enter the first number :
    88
    Enter the first number :
    2
    Addition of two values is :90

*/