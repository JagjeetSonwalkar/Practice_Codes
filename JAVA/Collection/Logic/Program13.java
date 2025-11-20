// Shift all elements in a list to the right by 1 position.

import java.util.*;

class Program13
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(14,15,25,1,36,80));

        System.out.println("List: "+num);

        num.addFirst(null);

        System.out.println("Output: "+num);
    }
}