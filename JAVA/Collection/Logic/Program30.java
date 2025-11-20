// Merge two Maps into a single Map.

import java.util.*;

class Program30
{
    public static void main(String arg[]) throws Exception
    {
        Map <String,Integer> name1 = new LinkedHashMap<>();

        name1.put("Rohit",200);
        name1.put("Virat",100);
        name1.put("Hardik",6);
        name1.put("Sun",1);
        name1.put("Moon",0);

        Map <String,Integer> name2 = new TreeMap<>();

        name2.put("fun",11);
        name2.put("gun",111);
        name2.put("run",12);
        name2.put("Mun",121);

        Map <String,Integer> name = new HashMap<>();
        name.putAll(name1);
        name.putAll(name2);

        Iterator nameIterator = name.entrySet().iterator();
        Map.Entry nameIteratorValue = null ;

        while(nameIterator.hasNext())
        {
            nameIteratorValue = (Map.Entry)nameIterator.next();
            System.out.println(nameIteratorValue.getKey()+"\t"+nameIteratorValue.getValue());
        }
    }
}