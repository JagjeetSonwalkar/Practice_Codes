//  Accept one number from user and print that number of * on screen.

import java.util.Scanner ;

class Program5
{
    public static void display(int iValue)
    {
        int i = 0 ;
        for(i = 1; i<=iValue ; i++)
        {
            System.out.println("*");
        }
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iRange = 0 ;

        System.out.println("Enter the range: ");
        iRange = sobj.nextInt();

        display(iRange);
    }
}