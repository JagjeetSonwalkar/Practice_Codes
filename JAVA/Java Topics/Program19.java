////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                    user defined Exception
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class AgeInvalidException extends Exception
{
    public AgeInvalidException(String str)  // constructor
    { 
    //     System.out.println("Inside AgeInvalidException class ");
        super(str);
        System.out.println("Exit AgeInvalidException class ");
    }
}

class Program19
{
    public static void main(String arg[])
    {
        System.out.println("Inside main");
        int age = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the age  : ");
        age = sobj.nextInt();
        try
        {
            System.out.println("Inside try block ");
            if(age < 18)
            {
                AgeInvalidException aobj = new AgeInvalidException("Age is under 18");      // userdefined exception
                throw aobj ;                                                                // throw userdefined exception
            }
        }
        catch(AgeInvalidException cobj)
        {
            System.out.println("Inside catch block ");
            System.out.println(cobj);
        }
        finally
        {
            System.out.println("Inside finally block");
        }

        System.out.println("Age is : "+age);

        System.out.println("exit main");
    }
}

/*

Enter the age  :
8
Inside try block
Exit AgeInvalidException class
Inside catch block
AgeInvalidException: Age is under 18
Inside finally block
Age is : 8
exit main

*/