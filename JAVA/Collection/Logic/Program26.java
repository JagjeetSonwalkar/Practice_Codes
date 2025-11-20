// Replace a value for a specific key .

import java.util.*;
import java.io.*;

class Program26
{
    public static void main(String arg[]) throws Exception
    {
        Map <Integer,String> name = new HashMap<>();

        name.put(45,"Rohit");
        name.put(18,"Virat");
        name.put(33,"Hardik");
        name.put(1,"Sun");
        name.put(0,"Moon");

        Scanner sobj = new Scanner(System.in);
        BufferedReader ssobj = new BufferedReader(new InputStreamReader(System.in));

        Iterator nameIterator = name.entrySet().iterator();
        Map.Entry nextValue = null ;
        Integer iKey = 0;
        String sValue = null ;

        while(nameIterator.hasNext())
        {
            nextValue = (Map.Entry)nameIterator.next();
            System.out.println("key: "+nextValue.getKey()+"\tValue: "+nextValue.getValue());
        }

        System.out.println("Enter the key to change the value: ");
        iKey = Integer.parseInt(ssobj.readLine());
    
        if(name.containsKey(iKey))
        {
            System.out.println("Enter the value: ");
            sValue = sobj.nextLine();

            name.put(iKey,sValue);
            System.out.println("Value updated.");
        }
        else
        {
            System.out.println("Key not found");
        }

        System.out.println(name);
    }
}