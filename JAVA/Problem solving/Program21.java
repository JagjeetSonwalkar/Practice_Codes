/*
accept N from user and print all odd number up N.
input: 18
output: 1 3 5 7 9 11 13
*/

import java.util.Scanner;

class DisplayNum
{
    public int iValue ;

    public DisplayNum(int A)
    {
        iValue = A ;
    }

    public void display()
    {
        int i = 0 ;

        for(i = 1; i<iValue; i++)
        {
            if(i%2 != 0)
            {
                System.out.print(i+"  ");
            }
        }
    }
}

class Program21
{
    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        DisplayNum dobj = new DisplayNum(iNum);

        dobj.display();

    }
}