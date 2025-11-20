// Check if a key exists in a Map.

import java.util.*;

class Program21
{
    public static void main(String arg[])
    {
        Map <Integer,String> value = new HashMap<>();

        value.put(1,"Rohit");
        value.put(2,"Aman");
        value.put(3,"Virat");
        value.put(4,"Sun");
        value.put(5,"Bun");

        Boolean bRet = value.containsKey(100);

        if(bRet == true)
        {
            System.out.println("it exists..");
        }
        else
        {
            System.out.println("It does NOT exists");
        }
    }
}