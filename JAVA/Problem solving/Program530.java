// Bubble sort

import java.util.*;

class Program530
{
    public static void Bubble_sort(int Arr[])
    {
        int i = 0 , j = 0 , temp = 0 , k = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr.length - i - 1 ; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp ;
                }
            }
            System.out.println("Data after Pass : "+(i+1));

            for(k = 0; k < Arr.length; k++)
            {
                System.out.print(Arr[k]+"\t");
            }
            System.out.println();
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
    17
    18
    14
    11
    10
    Element in array are :
    17      18      14      11      10
    Data after Pass : 1
    17      14      11      10      18
    Data after Pass : 2
    14      11      10      17      18
    Data after Pass : 3
    11      10      14      17      18
    Data after Pass : 4
    10      11      14      17      18
    Data after Pass : 5
    10      11      14      17      18
    Element of array after sorting :
    10      11      14      17      18

*/