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
        System.out.println("Inside the finalize method.");
    }
}

class Program260
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

        dobj = null ;                           
        System.gc();                                // STEP 6 (it is Request to come Garbage Collector)

    }
}

/*
    CMD

    javac Program260.java
    Program260.java:43: warning: [removal] finalize() in Object has been deprecated and marked for removal
        protected void finalize()                           // STEP 5
                    ^
    1 warning

    java Program260

    OUTPUT

    Enter the lenght of array :
    10
    Enter the Value :
    1
    2
    3
    4
    5
    6
    7
    8
    9
    11
    The Value are :
    1       2       3       4       5       6       7       8       9       11
    Inside the finalize method.

    
    Enter the lenght of array :
    5
    Enter the Value :
    12
    15
    18
    40
    45
    The Value are :
    12      15      18      40      45
    Inside the finalize method.

  
    Enter the lenght of array :
    3
    Enter the Value :
    10
    20
    30
    The Value are :
    10      20      30
    Inside the finalize method.

*/