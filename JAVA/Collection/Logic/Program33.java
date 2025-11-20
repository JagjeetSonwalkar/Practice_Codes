// Convert a Map to a Set of entries.

import java.util.*;

class Program33
{
    public static void main(String arg[]) 
    {
        Map <String,Integer> name = new HashMap<>();

        name.put("Rohit",200);
        name.put("Virat",100);
        name.put("Hardik",6);
        name.put("Sun",1);
        name.put("Moon",0);

        Iterator nameIterator = name.entrySet().iterator();
        Map.Entry nameIteratorValue = null ;

        Set <Object> newSet = new HashSet<>();

        while(nameIterator.hasNext())
        {
            nameIteratorValue = (Map.Entry)nameIterator.next();
            newSet.add(nameIteratorValue);
        }

        System.out.println(newSet);
    }
}