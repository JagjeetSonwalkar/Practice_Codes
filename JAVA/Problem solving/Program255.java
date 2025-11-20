// Display the dynamic array and get the length from user and diplay values of array and length .

import java.util.*;

class Program255
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, iCnt = 0;

        System.out.println("Enter the number of elements : ");  // Step 1
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];                             // Step 2

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)                              // Step 3
        {
            Arr[iCnt] = sobj.nextInt();
        }
                                                                // Logic Step 4
        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
                                                                // Deallocation Step 5
    }
}

/*
    OUTPUT

    Enter the number of elements :
    5
    Enter the elements :
    125
    124
    123
    122
    121
    Elements of the array are :
    125
    124
    123
    122
    121


    Enter the number of elements :
    3
    Enter the elements :
    120
    121
    122
    Elements of the array are :
    120
    121
    122

*/