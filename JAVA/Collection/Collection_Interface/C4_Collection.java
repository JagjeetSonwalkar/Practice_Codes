import java.util.*;

class C4_Collection
{
    public static void main(String[] arg)
    {
        // c.removeAll(Collections.singleton(e));
        // is to remove all occurrences of a specific element (x) from a collection (name) in a single step.
        
        Collection <String> name = new ArrayList<>(Arrays.asList("ant","tiger","Lion","ant","tiger","ant","horse"));

        System.out.println("Total elements in name are : " + name); // Total elements in name are : [ant, tiger, Lion, ant, tiger, ant, horse]

        String x = "ant" ;

        name.removeAll(Collections.singleton(x));

        System.out.println("\n" + name + "\n\n");    // [tiger, Lion, tiger, horse]

        //////////////////////////////////////////////////////////////////////////////////////////////////////////

        // c.removeAll(Collections.singleton(null));
        // is used to remove all null values from the collection c.

        Collection <String> city = new ArrayList<>(Arrays.asList(null,"pune",null,"Mumbai","Delhi","goa",null));

        System.out.println("Before : " + city);

        city.removeAll(Collections.singleton(null));

        System.out.println("After : " + city);

        /*
            Before : [null, pune, null, Mumbai, Delhi, goa, null]
            After : [pune, Mumbai, Delhi, goa]
        */
    }
}