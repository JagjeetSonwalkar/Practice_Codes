// Accept one number and check whether is is divisible by 5 or not

import java.util.Scanner ;

class Program4
{
    public static Boolean check(int iValue)
    {
        if(iValue % 5 == 0)
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

        int no = 0 ;
        Boolean bRet = false ;

        System.out.println("Enter the number: ");
        no = sobj.nextInt();

        bRet = check(no);

        if(bRet == true)
        {
            System.out.println("No. is divisible by 5");
        }
        else
        {
            System.out.println("No. is NOT divisible by 5");
        }
    }
}