// Create a TreeMap and display elements in sorted order(key).

import java.util.*;

class Program28
{
    public static void main(String arg[]) throws Exception
    {
        TreeMap <Integer,String> name = new TreeMap<>();

        name.put(45,"Rohit");
        name.put(18,"Virat");
        name.put(33,"Hardik");
        name.put(1,"Sun");
        name.put(0,"Moon");

        Iterator nameIterator = name.entrySet().iterator();
        Map.Entry nameIteratorValue = null ;

        while(nameIterator.hasNext())
        {
            nameIteratorValue = (Map.Entry)nameIterator.next();
            System.out.println(nameIteratorValue.getKey()+"\t"+nameIteratorValue.getValue());
        }
    }
}