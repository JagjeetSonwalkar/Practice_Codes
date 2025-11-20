// Create a LinkedHashMap and preserve insertion order.

import java.util.*;

class Program29
{
    public static void main(String arg[]) throws Exception
    {
        Map <String,Integer> name = new LinkedHashMap<>();

        name.put("Rohit",200);
        name.put("Virat",100);
        name.put("Hardik",6);
        name.put("Sun",1);
        name.put("Moon",0);

        Iterator nameIterator = name.entrySet().iterator();
        Map.Entry nameIteratorValue = null ;

        while(nameIterator.hasNext())
        {
            nameIteratorValue = (Map.Entry)nameIterator.next();
            System.out.println(nameIteratorValue.getKey()+"\t"+nameIteratorValue.getValue());
        }
    }
}