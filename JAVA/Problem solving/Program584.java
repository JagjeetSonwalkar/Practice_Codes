/* 

create a matrix (dynamically) , accept and display the values , also sum all values , count even values , sum all even values , Count Digits of whole array's ,
Display addtion of Digits , find the maximum element from array , find the minimum element from the array , Upadate all odd number by adding 1 ,
find all maxmium element from rows , find all minimum element from rows .

*/

import java.util.*;

class Matrix
{
    public int Arr[][] ;

    public Matrix(int iRow , int iCol)
    {
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        System.out.println("Please Enter the values : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0 , j = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of matrix are : ");

        int i = 0 , j = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public int Sumation()
    {
        int i = 0 , j = 0 , iSum = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum ;
    }

    public int CountEven()
    {
        int i = 0 , j = 0 , iCount = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] % 2) == 0)
                {
                    iCount++ ;
                }
            }
        }
        return iCount ;
    }

    public int SumEven()
    {
        int i = 0 , j = 0 , iSum = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] % 2) == 0)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum ;
    }

    public void DigitCount()
    {
        int i = 0 , j = 0 , iCount = 0 , iNum = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                iNum = Arr[i][j] ;

                while(iNum != 0)
                {
                    iCount++ ;
                    iNum = iNum / 10 ;
                }
                System.out.println("Number of digits in "+ Arr[i][j] + " is : " + iCount);
                iCount = 0 ;
            }
        }
    }

    public void DigitSum()
    {
        int i = 0 , j = 0 , iSum = 0 , iNum = 0 , iDigit = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                iNum = Arr[i][j] ;

                while(iNum != 0)
                {
                    iDigit = iNum % 10 ;
                    iSum = iSum + iDigit ;
                    iNum = iNum / 10 ;
                }
                System.out.println("Sum of digits is "+ Arr[i][j] + " is : " + iSum);
                iSum = 0 ;
            }
        }
    }

    public int Max()
    {
        int i = 0 , j = 0 , iMax = 0 ;

        iMax = Arr[0][0] ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax ;
    }

    public int Min()
    {
        int i = 0 , j = 0 , iMin = 0 ;

        iMin = Arr[0][0] ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }
            }
        }
        return iMin ;
    }

    public void updateOdd()
    {
        int i = 0 , j = 0  ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] % 2) != 0)
                {
                    Arr[i][j] ++ ;
                }
            }
        }
    }

    public void MaxRow()
    {
        int i = 0 , j = 0 , iMax = 0 ;

        iMax = Arr[i][0];

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
            System.out.println("Max Element of row "+ i + " is :"+iMax);
        }
    }

    public void MinRow()
    {
        int i = 0 , j = 0 , iMin = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            iMin = Arr[i][0];

            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }
            }
            System.out.println("Min Element of row "+ i + " is :"+iMin);
        }
    }
}

class Program584
{
    public static void main(String arg[])
    {
        int iRow = 0 , iCol = 0 , iRet = 0 , iRetEvenCount = 0 , iRetEvenSum = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of row");
        iRow = sobj.nextInt();

        System.out.println("Enter number of coloums");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        mobj.MaxRow();
        mobj.MinRow();
    }
}

/*

Enter number of row
3
Enter number of coloums
3
Please Enter the values :
10
11
3
6
9
12
15
18
21
Elements of matrix are :
10      11      3
6       9       12
15      18      21
Max Element of row 0 is :11
Max Element of row 1 is :12
Max Element of row 2 is :21
Min Element of row 0 is :3
Min Element of row 1 is :6
Min Element of row 2 is :15

*/