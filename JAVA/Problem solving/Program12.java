/*
Accept one character from user and convert case of that charcter.
input : a output : A
input : B output : b
*/

import java.util.Scanner;

class Program12
{
   public static char convert(char cConvert)
   {
        char cValue = 'a';
        char cValue1 = 'A';

        while(cValue <= 'z' && cValue1 <= 'Z')
        {
            if(cConvert == cValue)
            {
                cConvert = cValue1 ;
                break ;
            }
            else if(cConvert == cValue1)
            {
                cConvert = cValue;
                break;
            }
            cValue++ ;
            cValue1++ ;
        }
        return cConvert ;
   }

    public static void main(String[] arg)
    {
        char character = '\0' , cRet = '\0' ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Character: ");
        character = sobj.next().charAt(0);

        cRet = convert(character);

        System.out.println(character + " <--convert case--> " + cRet);

    }
}