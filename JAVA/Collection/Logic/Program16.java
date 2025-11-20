// Print all elements of a list that start with a given letter.

import java.util.*;

class Program16
{
    public static void main(String arg[])
    {
        List <String> name = new ArrayList<>(List.of("aun","bun","cun","dun","ant","ball","cat","apple"));

        Iterator <String> itname = name.iterator();

        Scanner sobj = new Scanner(System.in);

        String sNext = null;
        Character cValue = '\0';

        System.out.println("Enter the character: ");
        cValue = sobj.next().charAt(0);

        while(itname.hasNext())
        {
            sNext = itname.next();

            if(sNext.charAt(0) == cValue)
            {
                System.out.println(sNext);
            }
        }
    }
}