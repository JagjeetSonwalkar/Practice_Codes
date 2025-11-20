// Display the dynamic array and get the length from user and diplay values of array and Sum of Array values (OOP) .

import java.util.*;

class DynamicArray
{
    public int iSize ;                          
    public int Arr[] ;

    public DynamicArray(int A)                  
    {
        iSize = A ;
        Arr = new int[iSize];
    }

    Scanner ssobj = new Scanner(System.in);

    public void Accept ()                               
    {
        int iCnt = 0 ;

        System.out.println("Enter the Value : ");

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = ssobj.nextInt();
        }
    }

    public void Display()                               
    {
        int iCnt = 0 ;

        System.out.println("The Value are : ");

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public int SumArray()
    {
        int iCnt = 0 , iSum = 0 ;

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum ;
    }

    protected void finalize()                           
    {
        Arr = null ;
        System.out.println("Inside the finalise method.");
    }
}

class Program261
{
    public static void main(String arg[])
    {
        int iLength = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the lenght of array : ");
        iLength = sobj.nextInt();

        DynamicArray dobj = new DynamicArray(iLength);

        dobj.Accept();
        dobj.Display();

        iRet = dobj.SumArray();
        System.out.println("The sum of Array is : "+iRet);

        dobj = null ;                           
        System.gc();                             

    }
}

/*
    
    CMD

    javac Program261.java
    Program261.java:54: warning: [removal] finalize() in Object has been deprecated and marked for removal
        protected void finalize()
                    ^
    1 warning

    java Program261

    OUTPUT

    Enter the lenght of array :
    3
    Enter the Value :
    10
    20
    30
    The Value are :
    10      20      30
    The sum of Array is : 60
    Inside the finalise method.


    Enter the lenght of array :
    5
    Enter the Value :
    11
    11
    11
    11
    11
    The Value are :
    11      11      11      11      11
    The sum of Array is : 55
    Inside the finalise method.


    Enter the lenght of array :
    8
    Enter the Value :
    7
    4
    1
    8
    5
    2
    3
    6
    The Value are :
    7       4       1       8       5       2       3       6
    The sum of Array is : 36
    Inside the finalise method.

*/