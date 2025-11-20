import java.util.*;

class C2_forEach
{
    public static void main(String arg[])
    {
        Collection <String> city = new ArrayList<>(Arrays.asList("pune","mumabi","delhi","goa","UP"));

        for(String eCity : city)
        {
            System.out.println(eCity);
        }
    }
}