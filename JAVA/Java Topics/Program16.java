////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                     Array : Ragged Array
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Program16
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        // static Ragged Array // NA

        // dynamic Ragged Array
        int Crr[][] = new int[4][] ;        // Creating a ragged array with 4 rows, but columns are undefined

        Crr[0] = new int[2];    // Row 0 will have 2 columns
        Crr[1] = new int[6];    // Row 1 will have 3 columns
        Crr[2] = new int[3];    // Row 2 will have 1 columns
        Crr[3] = new int[2];    // Row 3 will have 4 columns

        System.out.println("Enter the elements");
        int i = 0 , j = 0 ;
        for(i = 0 ; i < 4 ; i++)
        {
            for(j = 0 ; j < Crr[i].length ; j++)
            {
                Crr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Display Ragged Array elements");
        // Ragged Array travellser
        i = 0 ; j = 0 ;
        for(i = 0 ; i < 4 ; i++)
        {
            for(j = 0 ; j < Crr[i].length ; j++)
            {
                System.out.print(Crr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

/*

Enter the elements
1
2
3
4
5
6
7
8
9
10
11
12
13
Display Ragged Array elements
1       2
3       4       5       6       7       8
9       10      11
12      13

*/