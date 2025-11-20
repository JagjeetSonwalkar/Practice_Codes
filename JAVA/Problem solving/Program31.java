/* 
write a program which accept distance in kilometre and convert it into meter (1 kilometre = 1000 Meter)
*/

import java.util.Scanner ;

class Program31
{
    public static float distance(float fValue)
    {
        final float fMeter = 1000 ; 

        float fResult = fValue * fMeter ;    

        return fResult ; 
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        float fKilometer = 0.0f, fRet = 0.0f ;

        System.out.println("Enter kilometer: ");
        fKilometer = sobj.nextFloat();
        
        fRet = distance(fKilometer);

        System.out.println("Area: "+ fRet);
    }
}