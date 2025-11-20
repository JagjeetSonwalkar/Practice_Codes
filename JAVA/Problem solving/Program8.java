/* 
Accept two number from the user and display first number in second number of times.
Input : 12 5
O/P   : 12 12 12 12 12

Input : -2 3
O/P   : -2 -2 -2

Input : -2 0
O/P   :

*/

import java.util.Scanner ;

class Program8
{
    public static void display(int iValue, int iFrequency)
    {
        int i = 0 ;

        if(iFrequency < 0)
        {
            iFrequency = -iFrequency ;
        }

        for(i = 1; i <= iFrequency; i++)
        {
            System.out.print(iValue + "\t");
        }
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int num = 0, iRange = 0 ;

        System.out.println("Enter the number: ");
        num = sobj.nextInt();

        System.out.println("Enter range: ");
        iRange = sobj.nextInt();

        display(num, iRange);
        
    }
}