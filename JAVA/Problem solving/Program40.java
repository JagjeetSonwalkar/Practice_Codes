/*
Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input: N: 6
Elements:85 66 3 80 93 88
Output: 53 (234 - 181)
*/

import java.util.Scanner ;

class Program40
{
    public static void display(int[] iValue)
    {
        int i = 0, iSumEven = 0, iSumOdd = 0 ;

        for(i = 0; i < iValue.length; i++)
        {
            System.out.print(iValue[i]+"\t");
            if(iValue[i] % 2 == 0)
            {
                iSumEven = iSumEven + iValue[i];
            }
            else if(iValue[i] % 2 != 0)
            {
                iSumOdd = iSumOdd + iValue[i];
            }
            else
            {
                //
            }
        }
        System.out.println("\nOUTPUT: "+(iSumEven-iSumOdd));
        System.out.println("Sum of even number is: "+ iSumEven + " Sum of odd number is: "+ iSumOdd);
    }

    public static void main(String[] arg)
    {
        int iNum[], iSize = 0, i = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size: ");
        iSize = sobj.nextInt();

        iNum = new int[iSize];

        System.out.println("Enter "+iSize+" numbers: ");
        for(i = 0; i < iSize; i++)
        {
            iNum[i] = sobj.nextInt();
        }

        display(iNum);
    }
}