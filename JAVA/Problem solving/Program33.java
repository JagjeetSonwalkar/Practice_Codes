/* 
write a program which accept range from user and display all number in between that range in reveser order.
*/

import java.util.Scanner ;

class Program33
{
    public static void displayRange(int iStartPoint, int iEndPoint)
    {
        if(iStartPoint >= iEndPoint)
        {
            System.out.println("Invalid range:"+ iStartPoint + "  " + iEndPoint);
            return ;
        }

        int i = 0 ;

        System.out.println("Range is: ");
        for(i = iEndPoint-1; i > iStartPoint; i--)
        {
            System.out.print(i+"\t");
        }
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iStart = 0, iEnd = 0 ;

        System.out.println("Enter the start & end range: ");
        iStart = sobj.nextInt();
        iEnd = sobj.nextInt();

        displayRange(iStart, iEnd);
    }
}