/*
Remove an element at index 2 from a List.
Get the first and last element of a List.
*/

import java.util.*;

class Program7
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,3,4,5,1,2,3,9,11));

        num.remove(1);
        System.out.println(num);

        //////////////////////////////////////////////////////////////////

        List <Integer> firstLast = new ArrayList<>();

        firstLast.add(num.getFirst());
        firstLast.add(num.getLast());

        System.out.println(firstLast);
    }
}