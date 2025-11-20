// Display the dynamic array and get the length from user and diplay values of array and Max value of Array (OOP) .

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

    public int MaxArray()
    {
        int iCnt = 0 , iMax = Arr[0] ;

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax ;
    }

    protected void finalize()                           
    {
        Arr = null ;
        System.out.println("Inside the finalise method.");
    }
}

class Program262
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

        iRet = dobj.MaxArray();
        System.out.println("The Max Value of Array is : "+iRet);

        dobj = null ;                           
        System.gc();                             

    }
}

/*
    
    CMD

    javac Program262.java
    Program262.java:57: warning: [removal] finalize() in Object has been deprecated and marked for removal
        protected void finalize()
                    ^
    1 warning

    java Program262

    OUTPUT

    Enter the lenght of array :
    3
    Enter the Value :
    1
    2
    3
    The Value are :
    1       2       3
    The Max Value of Array is : 3
    Inside the finalise method.

    C:\Users\DELL\OneDrive\Desktop\Logic>java Program262
    Enter the lenght of array :
    5
    Enter the Value :
    12
    15
    16
    18
    14
    The Value are :
    12      15      16      18      14
    The Max Value of Array is : 18
    Inside the finalise method.

    C:\Users\DELL\OneDrive\Desktop\Logic>java Program262
    Enter the lenght of array :
    8
    Enter the Value :
    1
    8
    4
    6
    0
    25
    8
    9
    The Value are :
    1       8       4       6       0       25      8       9
    The Max Value of Array is : 25
    Inside the finalise method.

*/