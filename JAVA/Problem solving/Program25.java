// write a program to find factorial of given number
// input: 5 output: 120 (5*4*3*2*1)
// input: -5 output: 120 (5*4*3*2*1)
// input: 4 output: 24 (4*3*2*1)

import java.util.Scanner ;

class Program25
{
    public static int display(int iValue)
    {
        if(iValue < 0)
        {
            iValue = -iValue ;
        }

        int i = 0, iMul = 1 ;

        for(i=iValue; i >= 1; i--)
        {
            System.out.print(i+" ");
            iMul = iMul * i ;
        }

        return iMul ;
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iRet = 0 ;

        System.out.println("Enter number: ");
        iNum = sobj.nextInt();
        
        iRet = display(iNum);

        System.out.println("OUTPUT: "+iRet);
    }
}