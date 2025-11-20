//  Get the length from user and diplay values of length .

import java.util.*;

class DynamicArray
{
    public int iSize ;                      // STEP 1
    public int Arr[] ;

    public DynamicArray(int A)              // STEP 2
    {
        iSize = A ;
        Arr = new int[iSize];
    }
}

class Program257
{
    public static void main(String arg[])
    {
        int iLength = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the lenght of array : ");
        iLength = sobj.nextInt();

        DynamicArray dobj = new DynamicArray(iLength);

    }
}

/*
    OUTPUT

    Enter the lenght of array :
    3

    Enter the lenght of array :
    5

*/