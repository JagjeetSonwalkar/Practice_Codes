// Find the second largest number in a list.

import java.util.*;

class Program17
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,3,4,5,4,1,2,3));

        Iterator <Integer> itnum = num.iterator();

        int iMax1 = num.get(0) , iMax2 = num.get(0) , iNext = 0 ;

        while(itnum.hasNext())
        {
            iNext = itnum.next();

            if(iMax1 < iNext)
            {
                iMax2 = iMax1 ;
                iMax1 = iNext ;
            }
        }
        System.out.println("max: "+iMax1+" second max: "+iMax2);
    }
}