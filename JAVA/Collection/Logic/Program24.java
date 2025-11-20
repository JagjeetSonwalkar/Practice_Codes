// display map using iterator inreverse order

import java.util.*;

class Program24
{
    public static void main(String arg[])
    {
        Map <Integer,String> value = new HashMap<>();

        value.put(1,"Rohit");
        value.put(2,"Aman");
        value.put(3,"Virat");
        value.put(4,"Sun");
        value.put(5,"Bun");

        List <Map.Entry<Integer,String>> newList = new ArrayList<>(value.entrySet());
        ListIterator <Map.Entry<Integer,String>> itvalue = newList.listIterator(newList.size());

        while(itvalue.hasPrevious())
        {
            Map.Entry <Integer, String> nextValue = itvalue.previous();
            System.out.println(nextValue.getValue());
        }
    }
}