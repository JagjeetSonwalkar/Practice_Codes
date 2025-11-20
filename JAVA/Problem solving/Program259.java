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

    protected void finalize()                           // STEP 5
    {
        Arr = null ;
        System.out.println("Inside the finalise method.");
    }
}

class Program259
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
    CMD

    Program259.java:43: warning: [removal] finalize() in Object has been deprecated and marked for removal
    protected void finalize()                           // STEP 5
                   ^
    1 warning

    java Program259

    OUTPUT

    Enter the lenght of array :
    10
    Enter the Value :
    20
    30
    40
    50
    60
    70
    80
    90
    100
    110
    The Value are :
    20      30      40      50      60      70      80      90      100     110

    Enter the lenght of array :
    5
    Enter the Value :
    1
    2
    3
    4
    5
    The Value are :
    1       2       3       4       5

    
    Enter the lenght of array :
    3
    Enter the Value :
    1
    2
    3
    The Value are :
    1       2       3

*/