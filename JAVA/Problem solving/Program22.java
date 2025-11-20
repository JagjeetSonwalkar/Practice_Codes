/*
accept N and print first 5 multiples of N.
input: 4
output: 4 8 12 16 20
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
        int i = 0 , iMul = 1 ;

        for(i = 1 ; i<=5; i++)
        {
            iMul = iValue * i ;
            System.out.print(iMul+"  ");
        }
    }
}

class Program22
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