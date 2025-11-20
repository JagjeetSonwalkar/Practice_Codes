import java.util.*;

class C7_List
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,3,4,6,7,9,8,2,5));

        System.out.println(num + "\n");

        ////////////////////////////////////////////////////////////////////////////////////

        num.sort(Comparator.naturalOrder());    System.out.println(num);

        num.sort(Comparator.reverseOrder());    System.out.println(num);                                                                System.out.println();

        ////////////////////////////////////////////////////////////////////////////////////

        List <Integer> sub = num.subList(2,5);      System.out.println(sub);
//                               .subList(start , before Value);
        List <Integer> sub1 = num.subList(2,7);      System.out.println(sub1);

        /////////////////////////////////////////////////////////////////////////////////////

        Object[] newArray = num.toArray();

        System.out.println(Arrays.toString(newArray));

        //////////////////////////////////////////////////////////////////////////////////////

        Integer[] IntArray = num.toArray(new Integer[0]);

        System.out.println(Arrays.toString(IntArray));

        

        }
}