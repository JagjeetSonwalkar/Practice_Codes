// Accept number from the user if number is less than 10 then print "hello" otherwise print "Demo".

import java.util.Scanner ;

class Program7
{
    public static Boolean check(int iValue)
    {
        if(iValue < 10)
        {
            return true ;
        }
        else
        {
            return false ;
        }
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int num = 0 ;
        Boolean bRet = false ;

        System.out.println("Enter the number: ");
        num = sobj.nextInt();

        bRet = check(num);

        if(bRet == true)
        {
            System.out.println("Hello");
        }
        else
        {
            System.out.println("Demo");
        }
        
    }
}