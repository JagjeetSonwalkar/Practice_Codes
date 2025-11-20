// create a matrix (dynamically)

class Matrix
{
    public int Arr[][] ;

    public Matrix(int iRow , int iCol)
    {
        Arr = new int[iRow][iCol];
    }
}

class Program572
{
    public static void main(String arg[])
    {
        Matrix mobj = new Matrix(4,3);

    }
}