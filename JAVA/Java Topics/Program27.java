////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                object class (java.lang package)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// In java every class is automically inherited from the object class 

/*
object class contains some important methods :

toString() :
hashCode() : Addrees of the variable in form of hexa decimal number
equals()   :
finalize() : it is like destructor 
getclass() : returns the name of class , who's object is used as a caller object
clone()    :

*/

// Every unreferenced object gets automically collected by the garbage collector 
// When the garbage collector arrives to collect the object then it will call the finalize() automically.

import java.util.*;

class Demo1
{
    public int Arr[] ;
    public int iSize ;

    public Demo1(int A)
    {
        iSize = A ;

        Arr = new int[iSize] ;
    }

    Scanner sobj = new Scanner(System.in);

    public void Accept()
    {
        System.out.println("Enter the Values : ");
        int iCnt = 0 ;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int AddArray()
    {
        int iCnt = 0 , iSum = 0 ;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            iSum = iSum + Arr[iCnt] ;
        }

        return iSum ;
    }

    protected void finalize()
    {
        System.out.println("Inside the finalize()");
    }
}

class Program27
{
    public static void main(String arg[])
    {
       int iRet = 0 ;

       Demo1 dobj = new Demo1(5);

       dobj.Accept();

       iRet = dobj.AddArray();

       System.out.println("Sum of Array elements are : "+ iRet);
       
       dobj = null ;
       System.gc();
    }
}

/*

Enter the Values :
2
2
2
2
2
Sum of Array elements are : 10
Inside the finalize()

*/