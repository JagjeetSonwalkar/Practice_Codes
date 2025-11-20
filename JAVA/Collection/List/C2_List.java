import java.util.*;

class C2_List
{
    public static void main(String[] arg)
    {
        List <String> name = new ArrayList<>(List.of("king","Sun","fun","Run","king","Bun","fun"));

        System.out.println(name);
        /////////////////////////////////////////////////////////////////////////////////////////////////

        if(name.contains("fun"))
        {
            System.out.println("Element is present");
        }
        else 
        {
            System.out.println("Element is not Present !!");
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////

        List <String> name1 = new LinkedList<>(List.of("king","Sun","fun"));

        if(name.containsAll(name1))
        {
            System.out.println("Elements are present");
        }
        else 
        {
            System.out.println("Elements are not Present !!");
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////

        if(name.equals(name1))
        {
            System.out.println("Both are same");
        }
        else
        {
            System.out.println("Both are not same !!");
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println("On the index __ element is : " + name.get(1) );
        System.out.println("On the index __ element is : " + name.get(6) );

        /////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println("hash value of name is : " + name.hashCode() );
        System.out.println("hash value of name1 is : " + name1.hashCode() );

        ////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println( "index of sun is : " + name.indexOf("Sun"));
        System.out.println( "index of king is : " + name.indexOf("king"));

        ///////////////////////////////////////////////////////////////////////////////////////////////

        if(name.isEmpty())
        {
            System.out.println("!! Set is empty !!");
        }
        else
        {
            System.out.println("Set is not empty");
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println( "last index of sun is : " + name.lastIndexOf("Sun"));
        System.out.println( "last index of king is : " + name.lastIndexOf("king"));

    }
}

