/* 
Accept number from user and retrun difference between summation of all its factor and non factor.

input = 12
output = -34 (16-50)

input = 10
output = -29 (8-37)
*/

import java.util.Scanner;

class Program18
{
    public static void def(int iValue)
    {
        int i = 0, iSumNonFac = 0, iSumFac = 0, iDifference = 0 ;

        for(i = 1; i < iValue; i++)
        {
            if(iValue%i == 0)
            {
                iSumFac = iSumFac + i ;
            }
        }

        for(i = 1; i <= iValue; i++)
        {
            if(!(iValue%i == 0))
            {
                iSumNonFac = iSumNonFac + i ;
            }
        }
        iDifference = iSumFac - iSumNonFac;

        System.out.println("Input: "+iValue+ "\nOutput: "+iDifference+" ("+iSumFac+"-"+iSumNonFac+")");
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iRet = 0;

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        def(iNum);
    }
}