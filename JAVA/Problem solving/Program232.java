// Display Addition of two number and get the value from the user using object oriented programming (OOP) .

import java.util.*;

class Arithmatic
{
    public int iValue1 ;
    public int iValue2 ;

    public Arithmatic(int A , int B)
    {
        iValue1 = A ;
        iValue2 = B ;
    }

    public int Addition()
    {
        int iSum = 0 ;

        iSum = iValue1 + iValue2 ;

        return iSum ;
    }
}

class Program232
{
    public static void main(String Aa[])
    {
        int iNo1 = 0 , iNo2 = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First number :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second number :");
        iNo2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iNo1,iNo2);

        iRet = aobj.Addition();

        System.out.println("Addition of two Values is : "+iRet);

    }
}

/*
    output

    Enter the First number :
    10
    Enter the Second number :
    20
    Addition of two Values is : 30

    
    Enter the First number :
    16
    Enter the Second number :
    24
    Addition of two Values is : 40

    
    Enter the First number :
    -18
    Enter the Second number :
    -22
    Addition of two Values is : -40

    
    Enter the First number :
    100
    Enter the Second number :
    98
    Addition of two Values is : 198

*/