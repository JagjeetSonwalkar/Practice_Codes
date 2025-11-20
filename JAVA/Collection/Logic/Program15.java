// Convert a List<String> to a comma-separated string.

import java.util.*;

class Program15
{
    public static void main(String arg[])
    {
        List <String> name = new ArrayList<>(List.of("ant","lion","tiger","cat"));

        String sAdd = String.join(", ", name);

        System.out.println(sAdd);

    }
}