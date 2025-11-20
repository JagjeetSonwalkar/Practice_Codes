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

    public int CountArray()
    {
        int iCnt = 0 , iCount = 0 , iNum = 0 ;

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            iNum = Arr[iCnt] ;
            while(iNum != 0)
            {
                iCount++;
                iNum = iNum / 10 ;
            }
        }
        return iCount ;
    }

    protected void finalize()                           
    {
        Arr = null ;
        System.out.println("Inside the finalise method.");
    }
}

class Program264
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

    javac Program264.java
    Program264.java:59: warning: [removal] finalize() in Object has been deprecated and marked for removal
        protected void finalize()
                    ^
    1 warning

    java Program264

    OUTPUT

    Enter the lenght of array :
    3
    Enter the Value :
    10
    20
    3
    The Count of Array Values is : 5
    The Value are :
    10      20      3
    Inside the finalise method.

   
    Enter the lenght of array :
    5
    Enter the Value :
    10
    20
    30
    40
    50
    The Count of Array Values is : 10
    The Value are :
    10      20      30      40      50
    Inside the finalise method.

    
    Enter the lenght of array :
    6
    Enter the Value :
    1
    4
    10
    210
    210
    11
    The Count of Array Values is : 12
    The Value are :
    1       4       10      210     210     11
    Inside the finalise method.

*/