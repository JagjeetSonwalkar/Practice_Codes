import java.util.Scanner ;

class Binary_Search
{
    public static boolean BinarySearch(int iBrr[] , int iValue)  // BinarySearch method : if data is in sorted way then use it
    {
        int iStart = 0 , iEnd = 0 , iMid = 0 ;
        boolean bAns = false ;

        iEnd = iBrr.length-1 ;

        while(iStart <= iEnd)
        {
            iMid = iStart + (iEnd - iStart) / 2 ;

            if(iBrr[iMid] == iValue)
            {
                bAns = true ;
                break ;
            }

            if(iValue > iBrr[iMid])
            {
                iStart = iMid + 1 ;
            }
            else
            {
                iEnd = iMid - 1 ;
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

        bRet = BinarySearch(iArr,iSearchValue);

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