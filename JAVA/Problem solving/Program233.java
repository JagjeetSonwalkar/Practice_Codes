// Display Percentage and get the obtained marks and total marks from the user using object oriented programming (OOP) .

import java.util.*;

class Arithmatic
{
    public int iMark1 ;
    public int iMark2 ;

    public Arithmatic(int A , int B)
    {
        iMark1 = A ;
        iMark2 = B ;
    }

    public float CalculatePercantage()
    {
        float fPercentage = 0.0f ;

        fPercentage = ( (float)iMark1/(float)iMark2 ) * 100 ;

        return fPercentage ;
    }
}

class Program233
{
    public static void main(String Aa[])
    {
        int iObtMark = 0 , iTotalMark = 0 ;
        float fRet = 0.0f ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Obtained Marks:");
        iObtMark = sobj.nextInt();

        System.out.println("Enter the Total Marks :");
        iTotalMark = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iObtMark , iTotalMark);

        fRet = aobj.CalculatePercantage();

        System.out.println("Percentage is : "+fRet+"%");

    }
}

/*
    output

    Enter the Obtained Marks:
    200
    Enter the Total Marks :
    400
    Percentage is : 50.0%

   
    Enter the Obtained Marks:
    250
    Enter the Total Marks :
    400
    Percentage is : 62.5%


    Enter the Obtained Marks:
    400
    Enter the Total Marks :
    400
    Percentage is : 100.0%


    Enter the Obtained Marks:
    420
    Enter the Total Marks :
    800
    Percentage is : 52.499996%

*/