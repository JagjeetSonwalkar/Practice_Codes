import java.util.*;

class C6_set
{
    public static void main(String[] arg)
    {
        Set <String> name = new HashSet<>();

        //////////// add(E e) : Adds the specified element to this set if it is not already present (optional operation).
        name.add("Sun");
        name.add("Sky");
        name.add("moon");

        System.out.println("add name : " + name);

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        ////////// addAll(c) : Adds all of the elements in the specified collection to this set if they're not already present (optional operation). [c is an object]

        Set <String> addName = new HashSet<>(List.of("Run","Bun","Gun"));

        name.addAll(addName);

        System.out.println("addAll Name : " + name);
        
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        ////////// contains(Object o) : Returns true if this set contains the specified element.

        if((name.contains("Run")) == true)
        {
            System.out.println("contains elements\n");
        }
        else
        {
            System.out.println("Does not contain element\n");
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        ////////// containsAll(Collection<?> c) : Returns true if this set contains all of the elements of the specified collection.

        Set <String> containAllElement = new HashSet<>(List.of("Run","Bun","Sun"));

        if((name.containsAll(containAllElement)) == true)
        {
            System.out.println("contains all elements\n");
        }
        else
        {
            System.out.println("!! Does not contain all element !!\n");
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        //////// equals(Object o) : Compares the specified object with this set for equality.

        Set <String> sameName = new HashSet<>(name);

        if(name.equals(sameName))
        {
            System.out.println("Both are equals\n");
        }
        else
        {
            System.out.println("!! Both are not equals !! \n");
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        ////////// clear() : Removes all of the elements from this set (optional operation).

        name.clear();

        System.out.println("name after using clear() : "+ name);
    }
}