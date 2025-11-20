/* 
write a program which accept radius of circle from user calculate its area. where PI = 3.14
*/

import java.util.Scanner ;

class Program29
{
    public static float area(float fValue)
    {
        float fResult = 0.0f ;

       final float PI = 3.14f  ;

        fResult = PI * fValue * fValue ;

        return fResult ;
        
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        float fRadius = 0.0f, fRet = 0.0f ;

        System.out.println("Enter radius: ");
        fRadius = sobj.nextFloat();
        
        fRet = area(fRadius);

        System.out.println("Area: "+ fRet);
    }
}