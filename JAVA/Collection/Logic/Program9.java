// Reverse a List without using built-in Collections.reverse().

import java.util.*;

class Program9
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,3,4,5,1,2,3,9,11));

        ListIterator <Integer> itnum = num.listIterator(num.size());

        int rev;

        while(itnum.hasPrevious())
        {
            rev = itnum.previous();
            System.out.println(rev);
        }
    }
}