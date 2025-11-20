import java.util.Scanner ;

class Selection_Sort_3
{
    public static void SelectionSort(int iBrr[])  // SelectionSort method 
    {
        int i = 0 , j = 0 , minIndex = 0 , temp = 0 ;

        for(i = 0 ; i < iBrr.length ; i++)
        {
            minIndex = i ;

            for(j = i+1 ; j < iBrr.length ; j++)        // <-
            {
                if(iBrr[minIndex] > iBrr[j])
                {
                    minIndex = j ;
                }
            }
            if(i != minIndex)                         // <-
            {
                temp = iBrr[i];
                iBrr[i] = iBrr[minIndex];
                iBrr[minIndex] = temp ;
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

        SelectionSort(iArr);

        System.out.println("Values of Array after Selection Sort :");
        for(i = 0 ; i < iArr.length ; i++)
        {
            System.out.print(iArr[i]+"\t");
        }
    }
}

/*

Enter the size of array :
5
Enter the Values :
10
40
20
50
30
The Values are :
10      40      20      50      30
Values of Array after Selection Sort :
10      20      30      40      50

*/