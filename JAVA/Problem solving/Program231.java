// Display Addition of two number and get the value from the user .

import java.util.*;

class Arithmatic
{
    public int Addition(int iValue1 , int iValue2)
    {
        int iSum = 0 ;

        iSum = iValue1 + iValue2 ;

        return iSum ;
    }
}

class Program231
{
    public static void main(String ag[])
    {
        int iNo1 = 0 , iNo2 = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the first number :");
        iNo2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic();

        iRet = aobj.Addition(iNo1,iNo2);

        System.out.println("Addition of two values is :"+iRet);
    }
}

/*
    OUTPUT

    Enter the first number :
    10
    Enter the first number :
    20
    Addition of two values is :30

    
    Enter the first number :
    1
    Enter the first number :
    0
    Addition of two values is :1

    
    Enter the first number :
    -10
    Enter the first number :
    10
    Addition of two values is :0

    
    Enter the first number :
    -10
    Enter the first number :
    -10
    Addition of two values is :-20

*/