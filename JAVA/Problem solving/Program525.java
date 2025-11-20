// Linear_Search

import java.util.*;

class Program525
{
    public  static boolean Linear_Search(int Brr[] , int iNo) // function
    {
        int iCnt = 0 ;

        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                break;
            }
        }

        if(iCnt < Brr.length)
        {
            return true ;
        }
        else
        {
            return false ;
        }
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

        bRet = Linear_Search(Arr,iValue);

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
    5
    Enter the Values :
    10
    11
    12
    14
    15
    The Values of array :
    10      11      12      14      15
    Enter the element that you want to search :
    12
    Element is present.


    Enter the Size of array you need :
    3
    Enter the Values :
    1
    2
    3
    The Values of array :
    1       2       3
    Enter the element that you want to search :
    5
    Element is not present !!

*/