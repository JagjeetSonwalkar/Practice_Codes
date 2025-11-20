import java.util.*;
import java.util.stream.Collectors;

class C3_set
{
    public static void main(String[] arg)
    {
        Collection <Integer> c = new ArrayList <> (Arrays.asList(1,2,2,1,3)) ;

        Set <Integer> s = c.stream()
                    .collect(Collectors.toSet());

        System.out.println("c : " + c);
        System.out.println("s : " + s);
    }
}