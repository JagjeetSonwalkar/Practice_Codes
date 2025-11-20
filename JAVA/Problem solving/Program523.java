import java.util.*;

class Program523
{
    public  static void Update(int Brr[]) // function
    {
        Brr[0]++;
    }

    public static void main(String arg[])       // main function
    {
        int iSize = 0 , iCnt = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of array you need : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Values : ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        Update(Arr);

        System.out.println("The Values of array : ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
           System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}

/*
    OUTPUT

    Enter the Size of array you need :
    3
    Enter the Values :
    10
    20
    50
    The Values of array :
    11      20      50

*/