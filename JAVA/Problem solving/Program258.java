// Display the dynamic array and get the length from user and diplay values of array and length (OOP) .

import java.util.*;

class DynamicArray
{
    public int iSize ;                          // STEP 1
    public int Arr[] ;

    public DynamicArray(int A)                  // STEP 2
    {
        iSize = A ;
        Arr = new int[iSize];
    }

    Scanner ssobj = new Scanner(System.in);

    public void Accept ()                               // STEP 3
    {
        int iCnt = 0 ;

        System.out.println("Enter the Value : ");

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = ssobj.nextInt();
        }
    }

    public void Display()                               // STEP 4
    {
        int iCnt = 0 ;

        System.out.println("The Value are : ");

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class Program258
{
    public static void main(String arg[])
    {
        int iLength = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the lenght of array : ");
        iLength = sobj.nextInt();

        DynamicArray dobj = new DynamicArray(iLength);

        dobj.Accept();
        dobj.Display();
    }
}

/*
    OUTPUT

    Enter the lenght of array :
    3
    Enter the Value :
    10
    20
    30
    The Value are :
    10      20      30


    Enter the lenght of array :
    5
    Enter the Value :
    10
    20
    30
    40
    50
    The Value are :
    10      20      30      40      50


    Enter the lenght of array :
    8
    Enter the Value :
    25
    14
    36
    74
    85
    96
    45
    65
    The Value are :
    25      14      36      74      85      96      45      65

*/