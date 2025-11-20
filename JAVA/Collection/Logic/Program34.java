// Sort a Map by keys.

import java.util.*;

class Program34
{
    public static void main(String arg[]) 
    {
        Map <Integer,String> name = new HashMap<>();

        name.put(1400,"Jack run");
        name.put(1800,"Anut k");
        name.put(400,"Rohit sharama");
        name.put(2800,"Mumbai cha Raj");
        name.put(300,"Dr Virat");

        SortedMap <Integer,String> sortKey = new TreeMap<>(name);

        Iterator nameIterator = sortKey.entrySet().iterator();
        Map.Entry nameIteratorValue = null ;

        while(nameIterator.hasNext())
        {
            nameIteratorValue = (Map.Entry)nameIterator.next();
            System.out.println("key: "+nameIteratorValue.getKey()+"\tvalue: "+nameIteratorValue.getValue());
        }
    }
}