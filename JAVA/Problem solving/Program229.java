// Display Addition of two number and get the value from the user .

import java.util.*;

class Program229
{
    public static void main(String ag[])
    {
        int iNo1 = 0 , iNo2 = 0 , iSum = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second number : ");
        iNo2 = sobj.nextInt();

        iSum = iNo1 + iNo2 ;

        System.out.println("Sum of two number is : "+iSum);
    }
}

/*
    OUTPUT

    Enter the first number :
    10
    Enter the Second number :
    20
    Sum of two number is : 30

  
    Enter the first number :
    50
    Enter the Second number :
    50
    Sum of two number is : 100

   
    Enter the first number :
    -50
    Enter the Second number :
    100
    Sum of two number is : 50
*/