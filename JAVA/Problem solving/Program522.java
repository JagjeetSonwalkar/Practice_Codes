import java.util.*;

class Program522
{
    public static void main(String arg[])
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
    11
    22
    33
    The Values of array :
    11      22      33

*/