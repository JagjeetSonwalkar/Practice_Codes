import java.util.*;

class C7_set
{
    public static void main(String[] arg)
    {
        Set <String> c = new HashSet<>(List.of("Sun","Bun","Gun","Run","Fun"));

        System.out.println(c + "\n");

        /////////////////////////////////////////////////////////////////////////////////////////////////
        // hashCode() : Returns the hash code value for this set.

        Iterator <String> display = c.iterator();

        String iValue = null ;

        while(display.hasNext())
        {
            iValue = display.next();
            System.out.println("Key : " + iValue.hashCode() + " -> " + "Value : " + iValue);
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////
        // isEmpty() : Returns true if this set contains no elements.

        if(c.isEmpty())
        {
            System.out.print("\nc : empty \n");
        }
        else
        {
            System.out.println("\nobject is not empty");
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////
        // remove(Object o) : Removes the specified element from this set if it is present (optional operation).

        c.remove("Gun");

        System.out.println(c);


        ////////////////////////////////////////////////////////////////////////////////////////////////
        // removeAll(Collection<?> c) : Removes from this set all of its elements that are contained in the specified collection (optional operation).

        Set <String> x = new HashSet <> (c);

        c.removeAll(x);

        System.out.println(c);

        ////////////////////////////////////////////////////////////////////////////////////////////////
        // size() : Returns the number of elements in this set (its cardinality).
        System.out.println("Size of object is : " + c.size());

    }
}