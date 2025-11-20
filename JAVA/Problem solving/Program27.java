/* 
write a program to display table in reverse of that number
*/

import java.util.Scanner ;

class Program27
{
    public static void display(int iValue)
    {
        if(iValue < 0)
        {
            iValue = -iValue ;
        }

        int i = 0, iMul = 0 ;

        for(i=10; i >= 1 ; i--)
        {
            iMul = iValue * i ;
            System.out.print(iMul+"  ");
        }
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0 ;

        System.out.println("Enter number: ");
        iNum = sobj.nextInt();
        
        display(iNum);
    }
}