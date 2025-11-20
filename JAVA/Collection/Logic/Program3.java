// Add 10 elements to a List<Integer> and print only even numbers.

import java.util.*;

class Program3
{
    public static void main(String arg[])
    {
        List <Integer> adds = new ArrayList<>(List.of(1,2,3,4,5,6,7,8,9,10));

        List <Integer> num = new ArrayList<>(adds);

        for(Integer value : num)
        {
            if(value % 2 == 0)
            {
                System.out.println(value);
            }
        }
    }
}