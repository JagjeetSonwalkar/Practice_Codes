/*
input 5
output: $ * $ * $ * $ * $
*/

import java.util.Scanner;

class DisplayPattern
{
    public int iRange ;

    public DisplayPattern(int A)
    {
        if(A < 0)
        {
            A = -A ;
        }
        iRange = A ;
    }

    public void display()
    {
        int i = 0 ;
        for(i = 1; i<=iRange; i++)
        {
            System.out.print("$  *  ");
        }
    }
}

class Program19
{
    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        DisplayPattern dobj = new DisplayPattern(iNum);

        dobj.display();

    }
}