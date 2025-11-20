// Display the dynamic array and get the length from user and diplay values of array and Count digits of Array values (OOP) .

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    public int CountArray()                       
    {                                               
        int iCnt = 0 , iCount = 0 ;                 
                                                    
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)       
        {                                           
            while(Arr[iCnt] != 0)                               // this code effect your original values.
            {
                iCount++;                                                               
                Arr[iCnt] = Arr[iCnt] / 10 ;
            }
        }
        return iCount ;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected void finalize()                           
    {
        Arr = null ;
        System.out.println("Inside the finalise method.");
    }
}

class Program263
{
    public static void main(String arg[])
    {
        int iLength = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the lenght of array : ");
        iLength = sobj.nextInt();

        DynamicArray dobj = new DynamicArray(iLength);

        dobj.Accept();

        iRet = dobj.CountArray();
        System.out.println("The Count of Array Values is : "+iRet);

        dobj.Display();

        dobj = null ;                           
        System.gc();                             

    }
}

/*

    CMD 

    javac Program263.java
    Program263.java:58: warning: [removal] finalize() in Object has been deprecated and marked for removal
        protected void finalize()
                    ^
    1 warning

    java Program263

    OUTPUT

    Enter the lenght of array :
    3
    Enter the Value :
    10
    20
    30
    The Count of Array Values is : 6
    The Value are :
    0       0       0
    Inside the finalise method.


    Enter the lenght of array :
    5
    Enter the Value :
    12
    13
    14
    15
    16
    The Count of Array Values is : 10
    The Value are :
    0       0       0       0       0
    Inside the finalise method.


    Enter the lenght of array :
    2
    Enter the Value :
    10
    20
    The Count of Array Values is : 4
    The Value are :
    0       0
    Inside the finalise method.

*/