// Convert a Map to a List of values.

import java.util.*;

class Program32
{
    public static void main(String arg[]) 
    {
        Map <String,Integer> name = new HashMap<>();

        name.put("Rohit",200);
        name.put("Virat",100);
        name.put("Hardik",6);
        name.put("Sun",1);
        name.put("Moon",0);

        Collection <Integer> nameValues = name.values();

        List <Integer> namelist = new ArrayList<>(nameValues);

        System.out.println(namelist);
    }
}