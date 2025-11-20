import java.util.*;

class C1_set
{
    public static void main(String arg[])
    {
        Set <Integer> c = new HashSet<Integer>();

        Collection <Integer> c2 = new TreeSet<>();

        c.add(10);
        c.add(20);
        c.add(10);
        c.add(30);
        c.add(40);
        c.add(20);

        c2.add(10);
        c2.add(20);
        c2.add(20);
        c2.add(30);
        c2.add(40);
       

        System.out.println("c : "+c);
        System.out.println("c2 : "+c);

        System.out.println("c and c2 are same : " + c.equals(c2));
    }
}