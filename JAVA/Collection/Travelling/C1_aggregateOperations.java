import java.util.*;

class C1_aggregateOperations
{
    public static void main(String arg[])
    {
        Collection <Integer> num = new ArrayList<>(Arrays.asList(10,15,20,25,30,40,45,50,60));

        num.stream().
                    forEach(numX->System.out.print(numX + "\t")); System.out.println();


        // display first 4 element

        num.stream().limit(4).forEach(numX->System.out.print(numX+"\t"));

        ////////////////////////////////////////////////////////////////////////////////////
        System.out.println("\n\n");

        num.stream().filter(numX -> numX < 25).forEach(System.out::println);

        ////////////////////////////////////////////////////////////////////////////////////

        num.stream().forEach(numX->System.out.println(numX));
    }
}