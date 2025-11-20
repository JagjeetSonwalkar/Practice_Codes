/*
accept the number from user and dislay the number line]
input: 4
output: -4 -3 -2 -1 0 1 2 3 4
*/

import java.util.Scanner;

class DisplayPattern
{
    public int iRange ;

    public DisplayPattern(int A)
    {
        iRange = A ;
    }

    public void display()
    {
        int iStart = 0;

        for(iStart = -iRange; iStart <= iRange ; iStart++)
        {
            System.out.print(iStart + " ");
        }
    }
}

class Program20
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