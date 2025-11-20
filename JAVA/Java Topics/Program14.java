////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                     Array : Single dimensional
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program14
{
    public static void main(String arg[])
    {
        // static array
        int Arr[] = {10,20,30};

        // dynamic array
        int Brr[] = new int[5];
        Brr[0] = 10 ;
        Brr[1] = 20 ;
        Brr[2] = 30 ;
        Brr[3] = 40 ;
        Brr[4] = 50 ;

        // Array travellser
        int iCnt = 0 ;
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();

        iCnt = 0 ;
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
    }
}

/*

10      20      30
10      20      30      40      50

*/