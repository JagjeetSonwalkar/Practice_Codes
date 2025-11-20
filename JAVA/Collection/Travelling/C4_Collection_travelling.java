import java.util.*;
import java.util.stream.*;

class C4_Collection_travelling
{
    public static void main(String arg[])
    {
        Collection <Integer> num = new ArrayList<>(Arrays.asList(10,40,70,20,50,80,30,60,90));


        // Streams (forEach() with lambda)

        System.out.println("1. Tracelling : Streams \n");

        num.stream().forEach(numX -> System.out.println(numX));

        System.out.println("\nusing filter : \n");

        num.stream()
            .filter(numX -> (numX > 35))
            .forEach(System.out::println);

        System.out.println("\nusing map : \n");

        num.stream()
            .map(numX -> (numX * 2))
            .forEach(System.out::println);

        System.out.println("\nusing collect + filter + map to get new Num : \n");

        Collection <Integer> newNum = num.stream()
                                        .filter(numX -> numX > 10)
                                        .map(numX -> numX*2)
                                        .collect(Collectors.toList());
        System.out.println(newNum);

        // Using Enhanced for-loop (for-each)

        System.out.println("\n\n2. Tracelling : Using Enhanced for-loop (for-each)\n");

        for(Integer numX1 : num)
        {
            System.out.println(numX1);
        }

        // Using Iterator

        System.out.println("\n\n2. Using Iterator\n");

        Iterator<Integer> numX3 = num.iterator();
        Integer iValue = 0 ;

        while(numX3.hasNext())
        {
            iValue = numX3.next();
            System.out.println(iValue);
        }
    }
}