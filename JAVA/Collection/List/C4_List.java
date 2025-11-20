import java.util.*;

class C4_List
{
    public static void main(String[] arg)
    {
        List <String> name = new ArrayList<>(List.of("king","Sun","fun","Run","king","Bun","fun","Ten","pen","ant","done"));

        System.out.println(name);

        /////////////////////////////////////////////////////////////////////////////////////////////////

        String iRet = null ;

        iRet = name.remove(0);
        System.out.println("Removed : "+iRet);

        iRet = name.remove(5);
        System.out.println("Removed : "+iRet);

        iRet = name.remove(8);
        System.out.println("Removed : "+iRet);

        System.out.println(name);                                                                   System.out.println();

        /////////////////////////////////////////////////////////////////////////////////////////////////

        Boolean bRet = false ;

        bRet = name.remove("Superman");
        System.out.println("Removed : "+bRet);

        bRet = name.remove("ant");
        System.out.println("Removed : "+bRet);

        bRet = name.remove("pen");
        System.out.println("Removed : "+bRet);

        System.out.println(name);                                                                   System.out.println();

        /////////////////////////////////////////////////////////////////////////////////////////////////

        List <String> removeItem = new ArrayList<>(List.of("Sun", "fun", "Run", "king", "Bun", "Ten"));

        bRet = name.removeAll(removeItem);
        System.out.println(bRet);

        System.out.println(name);                                                                   System.out.println();
    }
}