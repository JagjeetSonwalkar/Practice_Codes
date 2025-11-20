/* 
write a program which accept width & height of rectangle from user calculate its area.
*/

import java.util.Scanner ;

class Program30
{
    public static float area(float fValue1, float fValue2)
    {
        return (fValue1*fValue2) ;       
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        float fWidth = 0.0f, fHeight = 0.0f, fRet = 0.0f ;

        System.out.println("Enter Width: ");
        fWidth = sobj.nextFloat();

        System.out.println("Enter Height: ");
        fHeight = sobj.nextFloat();
        
        fRet = area(fWidth,fHeight);

        System.out.println("Area: "+ fRet);
    }
}