// Accept number from user and retrun summation of all its non factor.

import java.util.Scanner;

class Program17
{
    public static int nonFactor(int iValue)
    {
        int i = 0, iSum = 0 ;

        for(i = 1; i <= iValue ; i++)
        {
            if(!(iValue%i == 0))
            {
                iSum = iSum + i ;
            }
        }
        return iSum;
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iRet = 0;

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        iRet = nonFactor(iNum);

        System.out.println("Summation of non factor: "+ iRet);
    }
}