/* 
write a program to display table of that number
input: 2 output: 2 4 6 8 10 12 14 16 18 20
input: -5 output: 5 10 15 20 25 30 35 40 45 50
*/

import java.util.Scanner ;

class Program26
{
    public static void display(int iValue)
    {
        if(iValue < 0)
        {
            iValue = -iValue ;
        }

        int i = 0, iMul = 0 ;

        for(i=1; i <= 10 ; i++)
        {
            iMul = iValue * i ;
            System.out.print(iMul+"  ");
        }
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iRet = 0 ;

        System.out.println("Enter number: ");
        iNum = sobj.nextInt();
        
        display(iNum);
    }
}