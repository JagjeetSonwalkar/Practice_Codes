import java.util.*;

class C3_Collection
{
    public static void main(String arg[])
    {
        // Object[] toArray()

        Collection <String> colour = new ArrayList<>();

        colour.add("Red");
        colour.add("Bule");
        colour.add("Mango");
        colour.add("black");

        System.out.println(colour);

        Object array[] = colour.toArray();

        for(Object eArray : array)
        {
            System.out.println(eArray);
        }

        System.out.println();
        /////////////////////////////////////////////////////////////////////////
        // <T> T[] toArray(T[] a) 

        Collection <String> city = new ArrayList<>();

        city.add("Pune");
        city.add("Goa");
        city.add("Mumbai");
        city.add("new Delhi");

        System.out.println("city : "+ city);

        String[] cityArray = city.toArray(new String[0]);

        for(String newCity : cityArray)
        {
            System.out.println(newCity);
        }
    }
}