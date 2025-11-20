// Linear Search Bi Directional

import java.util.*;

class Program526
{
    public  static boolean Linear_Search_Bi_Directional(int Brr[] , int iNo) // function
    {
        int iStart = 0 , iEnd =0  ;
        boolean bRet = false ;

        for(iStart = 0 , iEnd = Brr.length-1 ; iStart <=  iEnd ; iStart++ , iEnd--)
        {
            if((Brr[iStart] == iNo) || (Brr[iEnd] == iNo))
            {
                bRet = true ;
                break;
            }
        }
        return bRet ;
    }

    public static void main(String arg[])       // main function
    {
        int iSize = 0 , iCnt = 0 , iValue = 0 ;

        boolean bRet = false ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of array you need : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Values : ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("The Values of array : ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
           System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();

        System.out.println("Enter the element that you want to search :");
        iValue = sobj.nextInt();

        bRet = Linear_Search_Bi_Directional(Arr,iValue);

        if(bRet == true)
        {
            System.out.println("Element is present.");
        }
        else
        {
            System.out.println("Element is not present !!");
        }

    }
}

/*
    OUTPUT

    Enter the Size of array you need :
    3
    Enter the Values :
    10
    20
    30
    The Values of array :
    10      20      30
    Enter the element that you want to search :
    20
    Element is present.


    Enter the Size of array you need :
    10
    Enter the Values :
    1
    22
    33
    4444
    55555
    66666
    777
    88
    9
    0
    The Values of array :
    1       22      33      4444    55555   66666   777     88      9       0
    Enter the element that you want to search :
    66666
    Element is present.

*/