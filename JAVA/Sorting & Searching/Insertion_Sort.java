import java.util.Scanner ;

class Insertion_Sort
{
    public static void InsertionSort(int iBrr[])  // InsertionSort 
    {
        int i = 0, j = 0 ;
        int iSelected = 0;

        for(i = 1 ; i< iBrr.length; i++)
        {
            for(j = i -1, iSelected = iBrr[i]; ((j >= 0) && (iBrr[j] > iSelected)); j--)
            {
                iBrr[j+1] = iBrr[j];
            }
            iBrr[j+1] = iSelected;
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

        InsertionSort(iArr);

        System.out.println("Values of Array after Insertion Sort :");
        for(i = 0 ; i < iArr.length ; i++)
        {
            System.out.print(iArr[i]+"\t");
        }
    }
}