/*
Accept one character from user and check whether that charcter  is vowel(a,e,i,o,u) or not And ignore case of character.
input : a output : A
input : B output : b
*/

import java.util.Scanner;

class Program13
{
    public static Boolean check(char cValue)
    {
        Boolean bValue = false ;
        if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
        {
            bValue = true ;
        }
        else
        {
            bValue = false ;
        }
        return bValue ;
    }

    public static void main(String[] arg)
    {
        char character = '\0' ;
        Boolean bRet = false ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Character: ");
        character = sobj.next().charAt(0);

        bRet = check(character);

        if(bRet == true)
        {
            System.out.println("charcter is from vowel");
        }
        else
        {
            System.out.println("! charcter is NOT from vowel !");
        }

    }
}