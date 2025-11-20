// Count how many times an element appears in a List.

import java.util.*;

class Program6
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,3,4,5,1,2,3,9,1));

        Iterator <Integer> itnum = num.iterator();

        Scanner sobj = new Scanner(System.in);

        int iNext = 0, iValue = 0, iCount = 0 ;

        System.out.println("Enter the element: ");
        iValue = sobj.nextInt();

        while(itnum.hasNext())
        {
            iNext = itnum.next();

            if(iValue == iNext)
            {
                iCount++ ;
            }
        }

        System.out.println("Count of apperes of element " + iValue+" from the list: "+iCount);
    }
}