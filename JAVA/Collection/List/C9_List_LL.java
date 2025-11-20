import java.util.*;

class C9_List_LL
{
    public static void main(String[] arg)
    {
        LinkedList <Integer> num = new LinkedList<>(List.of(1,9,3,7,4,6,2,8,5));

        System.out.println(num);

        //////////////////////////////////////////////////////////////////////////////////////////////////////

        num.sort(Comparator.naturalOrder());

        System.out.println(num);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////
        System.out.println();

        Iterator<Integer> itNum = num.descendingIterator();
        Integer idata = 0 ;

        while(itNum.hasNext())
        {
            idata = itNum.next();
            System.out.println(idata);
        }

        System.out.println();
        //////////////////////////////////////////////////////////////////////////////////////////////////////////
        
    }
}