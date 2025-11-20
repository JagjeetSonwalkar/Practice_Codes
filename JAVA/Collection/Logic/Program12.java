// Create a list of 10 random numbers and find the maximum and minimum.

import java.util.*;

class Program12
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(14,15,25,1,36,80,80,69,79,5));

        Iterator <Integer> itnum = num.iterator();

        int iMax = num.get(0) , iMin = num.get(0) , iNext = 0;

        while(itnum.hasNext())
        {
            iNext = itnum.next();

            if(iMax < iNext)
            {
                iMax = iNext ;
            }
            else if(iMin > iNext)
            {
                iMin = iNext ;
            }
        }

        System.out.println(num);
        System.out.println("Max element: "+iMax+" Min element: "+iMin);
    }
}