////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                     Array : multi dimensional
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program15
{
    public static void main(String arg[])
    {
        // static 2D array
        int Arr[][] = {{10,20,30},{100,200,300},{11,22,33},{111,222,333}};

        // dynamic 2D array
        int Brr[][] = new int[3][3];
        Brr[0][0] = 10 ;
        Brr[0][1] = 10 ;
        Brr[0][2] = 10 ;

        Brr[1][0] = 20 ;
        Brr[1][1] = 30 ;
        Brr[1][2] = 40 ;

        Brr[2][0] = 50 ;
        Brr[2][1] = 60 ;
        Brr[2][2] = 70 ;

        // 2D Array travellser
        int iCnt = 0 , jCnt = 0;
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            for(jCnt = 0 ; jCnt < Arr[iCnt].length ; jCnt++)
            {
                System.out.print(Arr[iCnt][jCnt]+"\t");
            }
            System.out.println();
        }

System.out.println();
System.out.println();

        iCnt = 0 ;
        jCnt = 0 ;
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            for(jCnt = 0 ; jCnt < Brr[iCnt].length ; jCnt++)
            {
                System.out.print(Brr[iCnt][jCnt]+"\t");
            }
            System.out.println();
        }
        
    }
}

/*

100     200     300
11      22      33
111     222     333


10      10      10
20      30      40
50      60      70

*/