/* 
accept the amount in US dollar and return its coressponding value in Indian Currency. Consider 1$ as 86.68 ruppes.
*/

import java.util.Scanner ;

class Program28
{
    public static float currency(float fValue)
    {
        float fResult = 0.0f ;

       final float fRuppes = 86.68f  ;

        fResult = fRuppes * fValue ;

        return fResult ;
        
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        float fAmount = 0.0f, fRet = 0.0f ;

        System.out.println("Enter Amount in Dollar: ");
        fAmount = sobj.nextFloat();
        
        fRet = currency(fAmount);

        System.out.println("US: "+ fAmount + "<--->Indian: "+ fRet);
    }
}