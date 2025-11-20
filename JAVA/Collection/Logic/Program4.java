// Find the sum of all elements in a List<Integer>.

import java.util.*;

class Program4
{
    public static void main(String arg[])
    {
        List <Integer> adds = new ArrayList<>(List.of(1,2,3,4,5,6,7,8,9,10));

        List <Integer> num = new ArrayList<>(adds);

        int iSum = 0 ;

        for(Integer value : num)
        {
            iSum = iSum + value ;
        }

        System.out.println("Sum of all elements of list is: "+iSum);
    }
}