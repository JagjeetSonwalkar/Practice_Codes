// Create a HashMap and insert key-value pairs & Retrieve a value from a Map using a key. & Remove a key-value pair from a Map.

import java.util.*;

class Program20
{
    public static void main(String arg[])
    {
        Map <String,Integer> name = new HashMap<>();

        name.put("Rohit",45);
        name.put("Virat",18);
        name.put("Hardik",33);
        name.put("SKY",63);

        System.out.println(name.get("Rohit"));

        name.remove("Virat");

        System.out.println(name);
    }
}