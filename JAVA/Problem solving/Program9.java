// Accept number from user and check number is even or odd

import java.util.Scanner ;

class Program9
{
    public static Boolean check(int iValue)
    {
        if(iValue % 2 == 0)
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

        int num = 0;
        Boolean bRet = false;

        System.out.println("Enter the number: ");
        num = sobj.nextInt();

        bRet = check(num);
        
        if(bRet == true)
        {
            System.out.println("Number is even");
        }
        else
        {
            System.out.println("Number is Odd");
        }
    }
}