// Remove all duplicates from a List<Integer>.

import java.util.*;

class Program11
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,4,5,1,2,3,3,6,7,4,8,9));

        Set <Integer> copy = new HashSet<>(num);

        List <Integer> nonDuplicate = new ArrayList<>(copy);

        System.out.println("Original values: "+num);
        System.out.println("Original values and removing duplicates: "+nonDuplicate);
    }
}