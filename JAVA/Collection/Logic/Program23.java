// display map using for each loop

import java.util.*;

class Program23
{
    public static void main(String arg[])
    {
        Map <Integer,String> value = new HashMap<>();

        value.put(1,"Rohit");
        value.put(2,"Aman");
        value.put(3,"Virat");
        value.put(4,"Sun");
        value.put(5,"Bun");

        for(Map.Entry <Integer,String> valuesare : value.entrySet())
        {
            String orgValue = valuesare.getValue();

            System.out.println(orgValue);
        }
    }
}