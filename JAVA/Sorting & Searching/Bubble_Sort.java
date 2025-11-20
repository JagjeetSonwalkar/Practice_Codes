import java.util.Scanner ;

class Bubble_Sort
{
    public static void BubbleSort(int iBrr[])  // BubbleSort method [ for Example in order(10      20      30      40      50) ]
    {
        int j = 0 , k = 0 , temp = 0 ;

        for(j = 0 ; j < iBrr.length ; j++)
        {
            for(k = 0 ; k < iBrr.length - j - 1 ; k++)
            {
                if(iBrr[k] > iBrr[k+1])     //  <-
                {
                    temp = iBrr[k] ;
                    iBrr[k] = iBrr[k+1] ;
                    iBrr[k+1] = temp ;
                }
            }
        }
    }

    public static void main(String[] arg)
    {
        int iSize = 0 , i = 0 , iSearchValue = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");  
        iSize = sobj.nextInt();

        int[] iArr = new int[iSize];

        System.out.println("Enter the Values : ");
        for(i = 0 ; i < iArr.length ; i++)
        {
            iArr[i] = sobj.nextInt();
        }

        System.out.println("The Values are : ");
        for(i = 0 ; i < iArr.length ; i++)
        {
            System.out.print(iArr[i]+"\t");
        }
        
        System.out.println();

        BubbleSort(iArr);

        System.out.println("Values of Array after bubble Sort :");
        for(i = 0 ; i < iArr.length ; i++)
        {
            System.out.print(iArr[i]+"\t");
        }
    }
}