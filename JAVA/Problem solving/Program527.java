//  Binary_Search (NOTE : data should be sorted)

import java.util.*;

class Program527
{
    public static boolean Binary_Search(int Arr[] , int iSearch)
    {
        int iStart = 0 , iEnd = Arr.length-1 , iMid = 0 ;
        boolean bRet = false ;

        while(iStart <= iEnd)
        {
            iMid = iStart + (iEnd - iStart) / 2 ;

            if(Arr[iMid] == iSearch)
            {
                bRet = true ;
                break ;
            }

            if(iSearch > Arr[iMid])
            {
                iStart = iMid + 1 ;
            }
            else
            {
                iEnd = iMid - 1 ;
            }
        }
        return bRet ;
    }

    public static void main(String arg[])       // main function
    {
        int iSize = 0 , iValue = 0  , iCnt = 0 , iSearch = 0 ;
        boolean iRet = false ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements into array : ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt(); 
        }

        System.out.println("Element in array are : ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();

        System.out.println("Enter the element that you want to search : ");
        iSearch = sobj.nextInt();

        iRet = Binary_Search(Arr,iSearch);

        if(iRet == true)
        {
            System.out.println("Element is present in Array.");
        }
        else
        {
            System.out.println("Element is not present in Array !!!");
        }
    }
}

/*
    OUTPUT

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                            IF DATA IS NOT SORTED
    Enter the size of array :
    5
    Enter the elements into array :
    14
    15
    16
    13
    12
    Element in array are :
    14      15      16      13      12
    Enter the element that you want to search :
    13
    Element is not present in Array !!!

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                        IF DATA IS SORTED
    Enter the size of array :
    5
    Enter the elements into array :
    12
    13
    14
    15
    16
    Element in array are :
    12      13      14      15      16
    Enter the element that you want to search :
    12
    Element is present in Array.


    Enter the size of array :
    5
    Enter the elements into array :
    12
    13
    14
    15
    16
    Element in array are :
    12      13      14      15      16
    Enter the element that you want to search :
    13
    Element is present in Array.


    Enter the size of array :
    5
    Enter the elements into array :
    12
    13
    14
    15
    16
    Element in array are :
    12      13      14      15      16
    Enter the element that you want to search :
    14
    Element is present in Array.


    Enter the size of array :
    5
    Enter the elements into array :
    12
    13
    14
    15
    16
    Element in array are :
    12      13      14      15      16
    Enter the element that you want to search :
    15
    Element is present in Array.

*/