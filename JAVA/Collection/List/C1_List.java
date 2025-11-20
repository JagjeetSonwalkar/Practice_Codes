import java.util.*;

class C1_List
{
    public static void main(String[] arg)
    {
        List <Integer> num = new ArrayList<>(List.of(100,500));

        System.out.println("num : " + num);

        /////////////////////////////////////////////////////////////////////////////////////////////////

        num.add(101);
        num.add(102);
        num.add(103);

        System.out.println("num using add() : " + num);

        /////////////////////////////////////////////////////////////////////////////////////////////////

        num.add(0,201);
        num.add(2,202);
        num.add(7,203);

        System.out.println("num using add(index,data) : " + num);

        /////////////////////////////////////////////////////////////////////////////////////////////////

        List <Integer> xNum = new ArrayList<>(List.of(000,111,222));

        num.addAll(xNum);

        System.out.println("num using addAll(xNum) : " + num);

        /////////////////////////////////////////////////////////////////////////////////////////////////

        List <Integer> iNum = new ArrayList<>(Arrays.asList(777,888,999));

        num.addAll(8,iNum);

        System.out.println("num using addAll(Index,iNum) : " + num);

        /////////////////////////////////////////////////////////////////////////////////////////////////

        num.clear();

        System.out.println(num);


    }
}