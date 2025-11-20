import java.util.*;

class C6_List
{
    public static void main(String[] arg)
    {
        List <String> name = new ArrayList<>(List.of("king","Sun","fun","Run","king","Bun","fun"));
        List <String> xName = new ArrayList<>(Arrays.asList("king","Run","fun","day","night"));

        System.out.println(name);
        System.out.println(xName);                                                System.out.println();
        /////////////////////////////////////////////////////////////////////////////////////////////////

        name.retainAll(xName);
        System.out.println(name);

        xName.retainAll(name);
        System.out.println(xName);                                                System.out.println();
        /////////////////////////////////////////////////////////////////////////////////////////////////
        String iUpdate = null ;

        iUpdate = name.set(3,"Lion");
        System.out.println(name);

        iUpdate = name.set(4,"Done");
        System.out.println(name);                                                   System.out.println();
        /////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println("Total elements in name set are : "+name.size());
    }
}