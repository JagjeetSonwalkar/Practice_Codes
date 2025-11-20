/*
Accept number from user and display its multiplication of factors.
input : 12 output : 144 
input : 13 output : 1
*/

import java.util.Scanner;

class Program14
{
    public static int factorMul(int iValue)
    {
        int i = 0 , iMul = 1 ;

        for(i = 1; i <= iValue/2 ; i++)
        {
            if(iValue%i == 0)
            {
                System.out.print(i + " * ");
                iMul = iMul * i ;
            }
        }
        System.out.println();
        return iMul ;
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iRet = 0 ;

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        iRet = factorMul(iNum);

        System.out.println("input: "+iNum + "  output: "+iRet);
    }
}