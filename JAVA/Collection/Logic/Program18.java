// Create a sublist from index 2 to 5 and print it.

import java.util.*;

class Program18
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,3,4,7,6,5,8,9));

        List <Integer> subListx = new ArrayList<>(num.subList(2,6));

        System.out.println(subListx);
    }
}