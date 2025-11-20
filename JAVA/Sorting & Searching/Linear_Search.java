import java.util.Scanner ;

class Linear_Search
{
    public static boolean LinearSearch(int iBrr[] , int iValue)  // LinearSearch method
    {
        boolean bAns = false ;

        for(int j = 0 ; j < iBrr.length ; j++)
        {
            if(iBrr[j] == iValue)
            {
                bAns = true ;
                break ;
            }
        }
        return bAns ;
    }

    public static void main(String[] arg)
    {
        int iSize = 0 , i = 0 , iSearchValue = 0 ;
        boolean bRet = false ;

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

        System.out.println("Enter the element that you want to search : ");
        iSearchValue  = sobj.nextInt();

        bRet = LinearSearch(iArr,iSearchValue);

        if(bRet == true)
        {
            System.out.println("Element is present");
        }
        else
        {
            System.out.println("Element is NOT present");
        }
    }
}