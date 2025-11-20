// Swap two elements at given indices in a list.

import java.util.*;

class Program19
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(100,200,300,400,700,600));
        System.out.println(num);

        Scanner sobj = new Scanner(System.in);

        int iIndex1 = 0, iIndex2 = 0, iNext = 0, temp1 = 0, temp2 = 0 ;

        System.out.println("Enter the 2 index: ");
        iIndex1 = sobj.nextInt();
        iIndex1 = sobj.nextInt();

        Iterator <Integer> itnum = num.iterator();

        System.out.println(num);
    }
}