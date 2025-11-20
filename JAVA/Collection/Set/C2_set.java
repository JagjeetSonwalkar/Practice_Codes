import java.util.*;

class C2_set
{
    public static void main(String arg[])
    {
        Collection <Integer> c = new ArrayList <> ();

        c.add(10);
        c.add(20);
        c.add(30);
        c.add(20);
        c.add(10);

        System.out.println("c as List : "+ c);

        Collection <Integer> x = new HashSet <> (c);

        System.out.println("x as Set : "+ x);
    }
}