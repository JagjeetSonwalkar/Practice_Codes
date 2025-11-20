import java.util.Scanner;

class Strings{
    public String newString;

    public Strings(){
        newString = "";
    }

    //<---------------Reverse a String-------------->
    public String reverseString(String MyString){
        newString = "";
        int i = 0;
        for(i = MyString.length()-1; i >= 0; i--){
            newString += MyString.charAt(i);
        }
        return newString;
    }
}

class ProblemOnStrings{
    public static void main(String[] arg){
        Scanner input = new Scanner(System.in);
        /////////////////////////////
        String sRet = "";
        String sentence = "";
        /////////////////////////////
        Strings str = new Strings();
        /////////////////////////////

        System.out.println("Enter the string to reverse: ");
        sentence = input.nextLine();
        sRet = str.reverseString(sentence);
        System.out.println("The reverse String is: "+sRet);


    }
}