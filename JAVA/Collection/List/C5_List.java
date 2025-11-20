import java.util.*;

class C5_List
{
    public static void main(String[] arg)
    {
        List <String> name = new ArrayList<>(List.of("king","Sun","fun","Run","king","Bun","fun"));
        List <Integer> num = new ArrayList<>(Arrays.asList(1,2,3,4,5,6,7,8,9));

        System.out.println(name);
        System.out.println(num);                                                System.out.println();
        /////////////////////////////////////////////////////////////////////////////////////////////////

        name.replaceAll(String::toUpperCase);

        System.out.println(name);
        /////////////////////////////////////////////////////////////////////////////////////////////////

        name.replaceAll(names -> "Dr."+names);

        System.out.println(name);

        /////////////////////////////////////////////////////////////////////////////////////////////////

        num.replaceAll(numx -> (numx % 2 == 0) ? 66 : numx);
        System.out.println(num);

        /////////////////////////////////////////////////////////////////////////////////////////////////
        num.replaceAll(numx -> numx + 10);
        System.out.println(num);
    }
}