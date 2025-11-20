// display map using iterator

import java.util.*;

class Program22
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

        while(itvalue.hasNext())
        {
            Map.Entry nextValue = (Map.Entry)itvalue.next();
            // String name = (String)nextValue.getValue();
            // int iValue = (int)nextValue.getKey();
            System.out.println(nextValue);
        }
    }
}