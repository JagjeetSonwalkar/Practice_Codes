/*
accept single digit number from user and print it into word.

input: 9  output: nine
input: -3  output: three
input: 12  output: Invalid number
*/

import java.util.Scanner;

class DisplayNum
{
    public int iValue ;

    public DisplayNum(int A)
    {
        if(A < 0)
        {
            A = -A ;
        }
        iValue = A ;
    }

    public void display()
    {
        if(iValue == 0)
        {
            System.out.println("zero");
        }
        else if(iValue == 1)
        {
            System.out.println("one");
        }
        else if(iValue == 2)
        {
            System.out.println("two");
        }
        else if(iValue == 3)
        {
            System.out.println("three");
        }
        else if(iValue == 4)
        {
            System.out.println("four");
        }
        else if(iValue == 5)
        {
            System.out.println("five");
        }
        else if(iValue == 6)
        {
            System.out.println("six");
        }
        else if(iValue == 7)
        {
            System.out.println("seven");
        }
        else if(iValue == 8)
        {
            System.out.println("eight");
        }
        else if(iValue == 9)
        {
            System.out.println("nine");
        }
        else if(iValue >= 10)
        {
            System.out.println("Invalid Number");
        }
    }
}

class Program23
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