import java.util.*;

class C3_iterator
{
    public static void main(String arg[])
    {
        Collection <Integer> num = new ArrayList<>(Arrays.asList(1,2,3,4,5,6,7,8,9,0));

        Iterator <Integer> itNum = num.iterator();

        Integer numValue = 0 ;
        int iCount = 0 ;

        while(itNum.hasNext())
        {
            numValue = itNum.next();
            System.out.print(numValue + "\t");
        }
    }
}