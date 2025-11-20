import java.util.*;

class C1_Vector_Constructor
{
    public static void main(String[] arg)
    {
        Vector <Integer> sun = new Vector<>();

        System.out.println("sun : "+sun);

        System.out.println("capacity of sun : "+sun.capacity());  System.out.println();

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /*
            Vector(int initialCapacity);
            Constructs an empty vector with the specified initial capacity and with its capacity increment equal to zero.
        */
        Vector <Integer> num = new Vector<>(3);    

        num.add(10);
        num.add(20);
        num.add(30);

        System.out.println("num : "+num);           System.out.println("size of : "+num.size());    System.out.println("capacity of num : "+num.capacity());

        num.add(40);
        num.add(50);

        System.out.println("num : "+num);           System.out.println("size of : "+num.size());    System.out.println("capacity of num : "+num.capacity());

        System.out.println();
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /*
            Vector(int initialCapacity, int capacityIncrement)
            Constructs an empty vector with the specified initial capacity and capacity increment.
        */
        Vector <String> name = new Vector<>(4,6);

        name.add("ant");
        name.add("apple");
        name.add("done");
        name.add("bun");

        System.out.println("name : "+name);         System.out.println("size of : "+name.size());       System.out.println("capacity of name : "+name.capacity());

        name.add("run");
        name.add("done");

        System.out.println("name : "+name);         System.out.println("size of : "+name.size());        System.out.println("capacity of name : "+name.capacity());

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Enumeration <String> em = name.elements();

        while(em.hasMoreElements())
        {
            System.out.println(em.nextElement());
        }

    }
}