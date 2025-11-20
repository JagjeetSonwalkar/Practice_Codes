// Display Area of Rectangle and get the length and breath from the user using object oriented programming (OOP) .

import java.util.*;

class Arithmatic
{
    public float fSize1 ;
    public float fSize2 ;

    public Arithmatic(float A , float B)
    {
        fSize1 = A ;
        fSize2 = B ;
    }

    public float AreaOfRectangle()
    {
        float fArea = 0.0f ;

        fArea = fSize1 * fSize2 ;

        return fArea ;
    }
}

class Program235
{
    public static void main(String Aa[])
    {
        float fLenght = 0.0f , fWidth = 0.0f ;
        float fRet = 0.0f ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Lenght:");
        fLenght = sobj.nextFloat();

        System.out.println("Enter the Width :");
        fWidth = sobj.nextFloat();

        Arithmatic aobj = new Arithmatic(fLenght , fWidth);

        fRet = aobj.AreaOfRectangle();

        System.out.println("Area Of Rectangle is : "+fRet);

    }
}

/*
    output

    Enter the Lenght:
    15.25
    Enter the Width :
    10.50
    Area Of Rectangle is : 160.125

    
    Enter the Lenght:
    10
    Enter the Width :
    15
    Area Of Rectangle is : 150.0

    
    Enter the Lenght:
    150.2525
    Enter the Width :
    80.2020
    Area Of Rectangle is : 12050.552

*/