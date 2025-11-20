// Convert a Map to a List of keys.

import java.util.*;

class Program31
{
    public static void main(String arg[]) throws Exception
    {
        Map <String,Integer> name = new HashMap<>();

        name.put("Rohit",200);
        name.put("Virat",100);
        name.put("Hardik",6);
        name.put("Sun",1);
        name.put("Moon",0);

        List <String> nameKeyList = new ArrayList<>();

        Iterator nameIterator = name.entrySet().iterator();
        Map.Entry nameIteratorValue = null ;

        while(nameIterator.hasNext())
        {
            nameIteratorValue = (Map.Entry)nameIterator.next();
            String newStr = nameIteratorValue.getKey().toString();
            nameKeyList.add(newStr);
        }

        System.out.println(nameKeyList);
    }
}