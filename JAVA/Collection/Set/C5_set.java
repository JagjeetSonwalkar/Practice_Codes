import java.util.*;

class C5_set
{
    /*
        <E>: This is a generic type placeholder. It means the method works for any data type — Integer, String, Fruit, etc.
        Set<E>: The method returns a Set that holds elements of type E.
        Collection<E> c: The method takes a Collection (like a List, Set, etc.) of type E as input.
        
        new LinkedHashSet<E>(c):
            Converts the input collection c into a LinkedHashSet
            Removes duplicates
            Preserves the original order of elements
    */
    public static <E>Set<E> removeDup(Collection<E> c)
    {
        return new LinkedHashSet<E>(c);
    }

    public static void main(String[] arg)
    {
        List <Integer> num = Arrays.asList(1,2,3,5,2,1);

        Set <Integer> newNum = removeDup(num);

        System.out.println("num : "+ num);
        System.out.println("New num : "+ newNum);

        //////////////////////////////////////////////////////////////////////////

        List <String> name = Arrays.asList("Ant","Apple","Sun","Water","Apple","Sun");

        Set <String> newName = removeDup(name);

        System.out.println("\nname : "+ name);
        System.out.println("New name : "+ newName);
    }
}