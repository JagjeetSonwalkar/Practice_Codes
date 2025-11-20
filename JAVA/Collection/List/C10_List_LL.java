import java.util.*;

class C10_List_LL
{
    public static void main(String[] arg)
    {
        /////// offer - add , peek - remove
        LinkedList <Integer> num = new LinkedList<>();

        //////////////////////////////////////////////////////////////////////////////////////////////////////

        num.offer(10);
        num.offer(20);
        num.offer(30);

        System.out.println(num);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////

        num.offerFirst(111);
        num.offerFirst(101);
        num.offerFirst(121);

        System.out.println(num);
    
        //////////////////////////////////////////////////////////////////////////////////////////////////////////

        num.offerLast(777);
        num.offerLast(888);
        num.offerLast(999);

        System.out.println(num);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////

        int iRemove = 0 ;

        iRemove = num.poll();
        System.out.println("Removed : " + iRemove);
        iRemove = num.poll();
        System.out.println("Removed : " + iRemove);

        System.out.println(num);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////

        iRemove = num.pollFirst();
        System.out.println("Removed : " + iRemove);
        iRemove = num.pollFirst();
        System.out.println("Removed : " + iRemove);

        System.out.println(num);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////

        iRemove = num.pollLast();
        System.out.println("Removed : " + iRemove);

        iRemove = num.pollLast();
        System.out.println("Removed : " + iRemove);

        System.out.println(num);        
    }
}