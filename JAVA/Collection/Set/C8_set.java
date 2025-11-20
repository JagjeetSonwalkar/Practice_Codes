import java.util.*;

class C8_set
{
    public static void main(String[] arg)
    {
        Set <String> c = new HashSet<>(List.of("Sun","Bun","Gun","Run","Fun"));

        System.out.println(c + "\n");

        /////////////////////////////////////////////////////////////////////////////////////////////////
        // retainAll(Collection<?> c) : Retains only the elements in this set that are contained in the specified collection (optional operation).

        Set <String> x = new HashSet<>(List.of("Sun","Run","Gun","done"));

        c.retainAll(x);

        System.out.println("c after retainAll() : " + c + "\n");

        
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // spliterator() : Creates a Spliterator over the elements in this set. (Travelling)

        Spliterator <String> sprint = c.spliterator();

        System.out.println("Printing by using spliterator()");

        sprint.forEachRemaining(System.out::println);

        ////////////////////////////////////////////////////////////////////////////////////////////////
        // Object[]	toArray() : Returns an array containing all of the elements in this set.

        int i = 0 ;

        Object[] newArray = c.toArray();

        System.out.println("\nArray is : ");
        while(i < newArray.length)
        {
            System.out.print(newArray[i] + "\t");
            i++;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////
        // toArray(T[] a) : Returns an array containing all of the elements in this set; the runtime type of the returned array is that of the specified array.
        System.out.println();

        String[] newArray1 = c.toArray(new String[0]);

        System.out.println(Arrays.toString(newArray1));
    }
}