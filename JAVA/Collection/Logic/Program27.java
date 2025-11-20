// Find the size of a Map & Clear all entries in a Map.

import java.util.*;

class Program27
{
    public static void main(String arg[]) throws Exception
    {
        Map <Integer,String> name = new HashMap<>();

        name.put(45,"Rohit");
        name.put(18,"Virat");
        name.put(33,"Hardik");
        name.put(1,"Sun");
        name.put(0,"Moon");

        System.out.println("Size of name map: "+name.size());

        name.clear();

        if(name.isEmpty())
        {
            System.out.println("Cleared all entries of name Map");
        }
        else
        {
            System.out.println("NOT Cleared all entries of name Map");
        }
    }
}