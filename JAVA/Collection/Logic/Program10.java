// Merge two List<Integer> objects into one.

import java.util.*;

class Program10
{
    public static void main(String arg[])
    {
        List <Integer> num1 = new ArrayList<>(List.of(1,2,3,4,5,1,2,3,9,11));
        List <Integer> num2 = new ArrayList<>(List.of(10,20,30));

        List <Integer> num = new ArrayList<>();
        num.addAll(num1);
        num.addAll(num2);

        System.out.println(num);
    }
}