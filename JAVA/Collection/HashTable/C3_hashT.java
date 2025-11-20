import java.util.*;

class C3_hashT
{
    public static void main(String[] arg)
    {
        Hashtable <Integer,String> name = new Hashtable<>();

        name.put(1,"Jack");
        name.put(3,"Rahul");
        name.put(4,"Rohit");
        name.put(2,"Virat");
        name.put(11,"hard");

        System.out.println(name);

        //////////////////////////////////////////////////////////////////////////////////////

        @SuppressWarnings("unchecked")
        Hashtable<Integer,String> newHashTable = (Hashtable<Integer, String>) name.clone() ;

        System.out.println(newHashTable);

        //////////////////////////////////////////////////////////////////////////////////////
        
        System.out.println("contains(object) : "+ name.contains("Jack"));

        System.out.println("containsKey(object) : "+ name.containsKey(1));

        Hashtable <Integer,String> nameX = new Hashtable<>();
        nameX.put(1,"Jack");
        nameX.put(3,"Rahul");
        nameX.put(4,"Rohit");

        System.out.println("containsValue(object) : "+ nameX.containsValue(name));

        ///////////////////////////////////////////////////////////////////////////////////////////
        System.out.println();
        
        Enumeration <String> e1 = name.elements();

        while(e1.hasMoreElements())
        {
            System.out.println(e1.nextElement());
        }

    }
}