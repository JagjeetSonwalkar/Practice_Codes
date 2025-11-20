////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                    Exception handling
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

The problem or abnormally stop of program at a time of execting the program , after getting the exception 
Exception handling allows to handle that problematic scenario 
By using the concept of Exception handling we avoid the abnormal termination of a program

To understand the concept of Exception handling in java we have to consider the below keyword.
-> try
-> catch
-> finally
-> throw
-> throws

*/
import java.util.Scanner;

class Program18
{
    public static void main(String arg[])
    {
        System.out.println("Inside main");
/*
        int No1 = 0, No2 = 0, Ans = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first number : ");
        No1 = sobj.nextInt();
        System.out.println("Enter second number : ");
        No2 = sobj.nextInt();
        Ans = No1 / No2;
        System.out.println("Division is : "+Ans);

        Enter first number :
        9
        Enter second number :
        0
        Exception in thread "main" java.lang.ArithmeticException: / by zero
                at Program18.main(Program18.java:34)

*/
            int No1 = 0, No2 = 0, Ans = 0;
        
            Scanner sobj = new Scanner(System.in);
            
            System.out.println("Enter first number : ");
            No1 = sobj.nextInt();

            System.out.println("Enter second number : ");
            No2 = sobj.nextInt();
        try
        {
            System.out.println("Inside try block");
            Ans = No1 / No2;
        }
        catch(ArithmeticException aobj)
        {
            System.out.println("Inside ArithmeticException catch block");
            System.out.println("Execption occured : "+aobj);
        }
        catch(Exception eobj)   // generic catch block 
        {
            /*
                Exception is the parent class of all the types of inbuilt Exception.
                If we write the catch block with the exception class then it can handle all the types of Exception
                If we want to write the generic catch block then it should be written at the end of all catch blocks
            */
            System.out.println("Inside Exception catch block");
            System.out.println("Execption occured : "+eobj);
        }
        finally
        {
            System.out.println("Inside finally block");
        }
        System.out.println("Division is : "+Ans);
        
    }
}

/*

Inside main
Enter first number :
1
Enter second number :
0
Inside try block
Inside ArithmeticException catch block
Execption occured : java.lang.ArithmeticException: / by zero
Inside finally block
Division is : 0

*/