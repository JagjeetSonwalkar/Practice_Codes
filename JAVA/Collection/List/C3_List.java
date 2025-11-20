import java.util.*;

class C3_List
{
    public static void main(String[] arg)
    {
        List <String> name = new ArrayList<>(List.of("king","Sun","fun","Run","king","Bun","fun"));

        System.out.println(name);
        /////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println();

        Iterator <String> itName = name.iterator();
        String data = null ;

        while(itName.hasNext())
        {
            data = itName.next();
            System.out.println(data);
        }

        System.out.println();

        ///////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println("\n Display in forword direction :");

        ListIterator <String> listItName = name.listIterator();
        String data1 = null ;

        while(listItName.hasNext())
        {
            data1 = listItName.next();
            System.out.print(data1 + "\t");
        }

        System.out.println("\nDisplaying in backword direction : ");

        while(listItName.hasPrevious())
        {
            data1 = listItName.previous();
            System.out.print(data1 + "\t");
        }

        System.out.println();

        ///////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println("\n Display in forword direction from index 2 :");

        ListIterator <String> listItName1 = name.listIterator(2);
        String data2 = null ;

        while(listItName1.hasNext())
        {
            data2 = listItName1.next();
            System.out.print(data2 + "\t");
        }

        System.out.println("\nDisplaying in backword direction from index : ");

        ListIterator <String> listItName2 = name.listIterator(5);
        String data3 = null ;
        while(listItName2.hasPrevious())
        {
            data3 = listItName2.previous();
            System.out.print(data3 + "\t");
        }

        System.out.println();

        ///////////////////////////////////////////////////////////////////////////////////////////////
        System.out.println();

        ListIterator <String> x = name.listIterator();
        String datax = null ;
        int iIndex = 0 ;

        while(x.hasNext())
        {
            iIndex = x.nextIndex();
            datax = x.next();
            
            System.out.print("index : " + iIndex  + "\t");
            System.out.print("Data : " + datax);
            System.out.println();
        }

        System.out.println();
        /////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println();

        ListIterator <String> x1 = name.listIterator(name.size());

        while(x1.hasPrevious())
        {
            iIndex = x1.previousIndex();
            datax = x1.previous();
            
            System.out.print("index : " + iIndex  + "\t");
            System.out.print("Data : " + datax);
            System.out.println();
        }

        System.out.println();
    }
}