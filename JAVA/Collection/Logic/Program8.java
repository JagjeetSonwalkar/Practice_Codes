// Create a List of strings and sort them alphabetically.

import java.util.*;

class Program8
{
    public static void main(String arg[])
    {
        List <String> name = new ArrayList<>(List.of("sun","mun","fun","bun","run","and"));

        Set <String> nameSet = new TreeSet<>(name);

       Iterator <String> itname = nameSet.iterator();

       String sNext = null ;

       while(itname.hasNext())
       {
            sNext = itname.next();
            System.out.println(sNext);
       }
    }
}