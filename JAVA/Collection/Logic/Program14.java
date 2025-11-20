// Write a program to rotate a list by k positions.

import java.util.*;

class Program14
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(14,15,25,1,36,80));

        List <Integer> numLL = new LinkedList<>(num);

        Scanner sobj = new Scanner(System.in);

        int iNext = 0, iPos = 0 ;

        System.out.println("Enter the position: ");
        iPos = sobj.nextInt();

        ListIterator <Integer> itnumLL = numLL.listIterator(iPos);
        
        System.out.println();
        while(itnumLL.hasNext())
        {
            iNext = itnumLL.next();
            System.out.println(iNext);
        }
        Iterator <Integer> itnumLL2 = numLL.iterator();
        iNext = 0;
        while(itnumLL2.hasNext())
        {
            iNext = itnumLL2.next();
            if(num.indexOf(iNext) < iPos)
            {
                System.out.println(iNext);
            }
        }
    }
}