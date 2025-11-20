// create a matrix (dynamically) , accept and display the values , also sum all values , count even values , sum all even values


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
}

class Program577
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

        iRet = mobj.Sumation();

        System.out.println("Summation of all values are : "+ iRet);

        iRetEvenCount = mobj.CountEven();

        System.out.println("Count of all even values are : "+ iRetEvenCount);

        iRetEvenSum = mobj.SumEven();
        System.out.println("Summation of all even values are : "+ iRetEvenSum);
    }
}

/*

Enter number of row
3
Enter number of coloums
3
Please Enter the values :
3
6
9
12
15
18
21
24
27
Elements of matrix are :
3       6       9
12      15      18
21      24      27
Summation of all values are : 135
Count of all even values are : 4
Summation of all even values are : 60


Enter number of row
3
Enter number of coloums
3
Please Enter the values :
2
4
6
8
10
12
14
16
18
Elements of matrix are :
2       4       6
8       10      12
14      16      18
Summation of all values are : 90
Count of all even values are : 9
Summation of all even values are : 90

*/