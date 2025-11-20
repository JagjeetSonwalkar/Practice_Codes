// Bubble sort

import java.util.*;

class Program528
{
    public static void Bubble_sort(int Arr[])
    {
        int i = 0 , j = 0 , temp = 0 , k = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr.length - i - 1 ; j++)       // OR for(j = 0 ; j < Arr.length - 1 ; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp ;
                }
            }
        }
    }

    public static void main(String arg[])       // main function
    {
        int iSize = 0 , iCnt = 0  ;

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

        Bubble_sort(Arr);

        System.out.println("Element of array after sorting : ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();
    }
}

/*
    OUTPUT

    Enter the size of array :
    5
    Enter the elements into array :
    14
    18
    19
    15
    20
    Element in array are :
    14      18      19      15      20
    Element of array after sorting :
    14      15      18      19      20

*/