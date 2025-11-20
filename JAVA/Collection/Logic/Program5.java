// Check if a specific element exists in a List<>.

import java.util.*;

class Program5
{
    public static void main(String arg[])
    {
        List <Integer> num = new ArrayList<>(List.of(1,2,3,4,5,6,7,8,9,10));

        Iterator <Integer> itnum = num.iterator();

        Scanner sobj = new Scanner(System.in);

        int iNum = 0 , iNext = 0 ;
        Boolean bRet = false ;

        System.out.println("Enter the elments to check it exists or not: ");
        iNum = sobj.nextInt();

        while(itnum.hasNext())
        {
            iNext = itnum.next();

            if(iNext == iNum)
            {
                bRet = true ;
                break ;
            }
            else 
            {
                bRet = false ;
            }
        }

        if(bRet == true)
        {
            System.out.println("Element exists");
        }
        else
        {
            System.out.println("Element not exists");
        }
    }
}