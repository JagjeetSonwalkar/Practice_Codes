// create a matrix (dynamically) , accept and display the values , also sum all values

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
}

class Program575
{
    public static void main(String arg[])
    {
        int iRow = 0 , iCol = 0 , iRet = 0 ;

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

    }
}

/*

Enter number of row
3
Enter number of coloums
2
Please Enter the values :
1
2
3
4
5
6
Elements of matrix are :
1       2
3       4
5       6
Summation of all values are : 21

*/