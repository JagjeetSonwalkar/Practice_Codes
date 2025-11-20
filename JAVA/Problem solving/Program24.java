// write a progeam to convert the phno in words.

import java.util.Scanner ;

class Program24
{
    public static void main(String[] arg)
    {
        String sDigitWord[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        String sPN = null;
        char ch = '\0';
        int i = 0, iDigit = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter PH no: ");
        sPN = sobj.nextLine();

        for(i = 0; i < sPN.length(); i++)
        {
            ch = sPN.charAt(i);

            if(Character.isDigit(ch))
            {
                iDigit = ch - '0';
                System.out.print(sDigitWord[iDigit]+ "-");
            }
            else
            {
                System.out.println("Invalid");
            }
        }
    }
}