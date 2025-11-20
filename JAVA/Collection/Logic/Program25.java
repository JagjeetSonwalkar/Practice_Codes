// Iterate over all keys in a Map.

import java.util.*;

class Program25
{
    public static void main(String arg[])
    {
        Map <Integer,String> value = new HashMap<>();

        value.put(1,"Rohit");
        value.put(2,"Aman");
        value.put(3,"Virat");
        value.put(4,"Sun");
        value.put(5,"Bun");

        Iterator itvalue = value.entrySet().iterator();

        Map.Entry mNext ;

        while(itvalue.hasNext())
        {
            mNext = (Map.Entry)itvalue.next();
            System.out.println(mNext.getKey());
        }
    }
}