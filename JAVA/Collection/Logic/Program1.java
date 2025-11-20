// find the duplicate elements from the list

import java.util.*;

class Program1
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,3,1,2,4,5,5,6));

        Set <Integer> seen = new HashSet<>();

        Set <Integer> duplicate = new HashSet<>();

        for(Integer value : num)
        {
            if(!seen.add(value))
            {
                duplicate.add(value);
            }
        }
        
        System.out.println(duplicate);
    }
}