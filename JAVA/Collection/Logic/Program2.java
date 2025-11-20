// Write a program to create a List of 5 integers and print them.

import java.util.*;

class Program2
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,3,4,5));

        for(Integer value : num)
        {
            System.out.println(value);
        }
    }
}