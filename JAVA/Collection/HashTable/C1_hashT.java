import java.util.*;

class C1_hashT
{
    public static void main(String[] arg)
    {
        // constructor's

        Map <Integer,String> name1 = new Hashtable<>();  // Constructs a new, empty hashtable with a default initial capacity (11) and load factor (0.75).

        Map <Character,String> name2 = new Hashtable<>(10);   //Constructs a new, empty hashtable with the specified initial capacity and default load factor (0.75).

        Map <String,String> name3 = new Hashtable<>(50,0.7f);   
        // Constructs a new, empty hashtable with the specified initial capacity and the specified load factor.
        // It resizes when 70% of 50 = 35 entries are added

        name2.put('a',"sun");
        name2.put('b',"bun");
        name2.put('c',"fun");
        name2.put('d',"gun");

        System.out.println(name2);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Constructs a new hashtable with the same mappings as the given Map.

        Map <Character,String> namex = new Hashtable<>(name2);

        System.out.println(namex);
    }
}

/*

O/P :
{c=fun, b=bun, a=sun, d=gun}
{b=bun, a=sun, d=gun, c=fun}

*/