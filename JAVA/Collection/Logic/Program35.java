// Sort a Map by values.

import java.util.*;

class Program35
{
    public static void main(String arg[]) 
    {
        Map <Integer,String> name = new HashMap<>();

        name.put(1400,"Jack run");
        name.put(1800,"Anut k");
        name.put(400,"Rohit sharama");
        name.put(2800,"Mumbai cha Raj");
        name.put(300,"Dr Virat");

        List <Map.Entry<Integer,String>> nameList = new ArrayList<>(name.entrySet());

        Collections.sort(nameList, (entry1, entry2) -> entry1.getValue().compareTo(entry2.getValue()));

        LinkedHashMap<Integer,String> nameSort = new LinkedHashMap<>();

        for(Map.Entry<Integer,String> entry : nameList)
        {
            nameSort.put(entry.getKey(), entry.getValue());
        }
    
        Iterator nameIterator = nameSort.entrySet().iterator();
        Map.Entry nameIteratorValue = null ;

        while(nameIterator.hasNext())
        {
            nameIteratorValue = (Map.Entry)nameIterator.next();
            System.out.println("key: "+nameIteratorValue.getKey()+"\tvalue: "+nameIteratorValue.getValue());
        }
    }
}