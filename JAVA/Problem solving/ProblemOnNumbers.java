/* 
<-----------------------PROBLEM STATEMNT------------------------------->
Factorial of a Number using Loop
Input 1 → 5 → Output 1 → 120
Input 2 → 3 → Output 2 → 6

Count Digits of a Number using Loop
Input 1 → 12345 → Output 1 → 5
Input 2 → 789 → Output 2 → 3

Sum of Digits of a Number using Loop
Input 1 → 123 → Output 1 → 6
Input 2 → 456 → Output 2 → 15

Print Reverse Numbers from N to 1
Input 1 → 5 → Output 1 → 5 4 3 2 1
Input 2 → 3 → Output 2 → 3 2 1

Check if Number is Palindrome using Loop
Input 1 → 121 → Output 1 → True
Input 2 → 123 → Output 2 → False

Print Sum of First N Even Numbers
Input 1 → 5 → Output 1 → 30
Input 2 → 3 → Output 2 → 12

Print Sum of First N Odd Numbers
Input 1 → 5 → Output 1 → 25
Input 2 → 4 → Output 2 → 16

Print Fibonacci Series up to N Terms
Input 1 → 5 → Output 1 → 0 1 1 2 3
Input 2 → 7 → Output 2 → 0 1 1 2 3 5 8

Find Prime Numbers up to N
Input 1 → 10 → Output 1 → 2 3 5 7
Input 2 → 15 → Output 2 → 2 3 5 7 11 13
<---------------------------------------------------------------->
*/

//////////// import ///////////
import java.util.Scanner;
//////////////////////////////

class Numbers{
    /////////// charaterstic of Numbers class ///////////
    public int iResult = 0;
    /////////////////////////////////////////////////////

    /////////// Behaviours of Numbers class ///////////

    //<---------Factorial of a Number------------>
    public int factorial(int iNum){
        if(iNum < 0){
            System.out.println("Enter only +ve number.");
            return -1;
        }
        if(iNum == 0){
            return 1;
        }

        iResult = 1;
        int i = 0;
        for(i = 1; i <= iNum; i++){
            iResult *= i;
        }
        return iResult;
    }

    //<-------------Count Digits of a Number----------------->
    public int countDigit(int iNum){
        if(iNum < 0){
            iNum = -iNum;
        }
        iResult = 0;
        int iDigit = 0;

        while(iNum != 0){
            iDigit = iNum % 10;
            iResult += 1;
            iNum = iNum / 10;
        }
        return iResult;
    }

    //<-------------Sum of Digits of a Number----------------->
    public int sumOfDigit(int iNum)
    {
        if(iNum < 0){
            iNum = -iNum;
        }
        iResult = 0;
        int iDigit = 0;
        while(iNum != 0){
            iDigit = iNum % 10;
            iResult += iDigit;
            iNum = iNum / 10;
        }
        return iResult;
    }

    //<-------------Print Reverse Numbers from N to 1----------------->
    public void reverseNum(int iNum){
        System.out.print("Reverse Number: ");
        int i = 0;
        for(i = iNum; i >= 1; i--){
            System.out.print(i+", ");
        }
        System.out.println();
    }

    //<-------------Check if Number is Palindrome using Loop----------------->
    public boolean isPalindrome(int iNum){
        int iReverseNum = 0;
        int iDigit = 0;
        int iOriginalNum = iNum;

        while(iNum != 0){
            iDigit = iNum % 10;
            iReverseNum = iReverseNum * 10 + iDigit;
            iNum = iNum / 10;
        }
        if(iOriginalNum == iReverseNum){
            return true;
        }
        return false;
    }

    //<-------------Print Sum of First N Even Numbers----------------->
    public int sumFirstNEven(int iNum)
    {
        iResult = 0;
        int iCountN = 0;
        int iNumber = 0;

        while(iCountN <= iNum){
            if(iNumber % 2 == 0){
                iResult += iNumber;
                iCountN++;
            }
            iNumber++;
        }
        return iResult;
    }

    //<-------------Print Sum of First N Odd Numbers----------------->
    public int sumFirstNOdd(int iNum)
    {
        iResult = 0;
        int iCountN = 0;
        int iNumber = 0;

        while(iCountN < iNum){
            if(iNumber % 2 != 0){
                iResult += iNumber;
                iCountN++;
            }
            iNumber++;
        }
        return iResult;
    }
    
    //<-------------Print Fibonacci Series up to N Terms----------------->
    public void fibonacciSeries(int N)
    {
        int[] fibSeries = new int[N];
        int i = 0;

        fibSeries[0] = 0;
        fibSeries[1] = 1;
        for(i = 2; i < N; i++){
            fibSeries[i] = fibSeries[i-1] + fibSeries[i-2];
        }

        System.out.println("Fibnacci Series is: ");
        for(i = 0; i < fibSeries.length; i++){
            System.out.print(fibSeries[i]+"  ");
        }
        System.out.println();
    }

    //<-------------check Prime Numbers----------------->
    public boolean isPrimeNumber(int iNum){
        int i = 0, iSumFact = 0;
        for(i=1; i<=iNum; i++){
            if((iNum % i) == 0){
                iSumFact++;
            } 
        }
        System.out.println("iNum: "+iNum+"iSumFact: "+iSumFact);
        if(iSumFact == 2){
            return true;
        }
        return false;
    }


    //<-------------Find Prime Numbers up to N----------------->
    // public void primeNumber(int N){
    //     if(N <= 1){
    //         System.out.println("It is not prime number.");
    //         return ;
    //     }

    //     for()
    // }
}

class ProblemOnNumbers{
    public static void main(String[] arg){
        //////////////////////////////////////////////
        Scanner input = new Scanner(System.in);
        /////////////////Local Variable ///////////////
        int iRet = 0;
        int iNum = 0;
        boolean bRet = false;
        //////////////Object's of class ///////////////////
        Numbers num = new Numbers();
        //////////////////////////////////////////////

        System.out.println("Enter the number to find the factorial: ");
        iNum = input.nextInt();
        iRet = num.factorial(iNum);
        System.out.println("Factorial of a number is: "+iRet);

        System.out.println("Enter the number to count the total digits: ");
        iNum = input.nextInt();
        iRet = num.countDigit(iNum);
        System.out.println("Total digits in the number is: "+iRet);

        System.out.println("Enter the number to sum the digits: ");
        iNum = input.nextInt();
        iRet = num.sumOfDigit(iNum);
        System.out.println("Sum of digit of a number is: "+iRet);

        System.out.println("Enter the number to reverse it till one(1): ");
        iNum = input.nextInt();
        num.reverseNum(iNum);

        System.out.println("Enter the number to check the number is palindrome or not: ");
        iNum = input.nextInt();
        bRet = num.isPalindrome(iNum);
        if(bRet == true)
            System.out.println("Number is Palindrome.");
        else
            System.out.println("Number is NOT an Palindrome.");

        System.out.println("Enter the number to get the Sum of First N Even Numbers ");
        iNum = input.nextInt();
        iRet = num.sumFirstNEven(iNum);
        System.out.println("Sum of First N Even Numbers is: "+iRet);

        System.out.println("Enter the number to get the Sum of First N Odd Numbers ");
        iNum = input.nextInt();
        iRet = num.sumFirstNOdd(iNum);
        System.out.println("Sum of First N Even Numbers is: "+iRet);

        System.out.println("Enter the N number to display the fibonacci Series: ");
        iNum = input.nextInt();
        num.fibonacciSeries(iNum);

        System.out.println("Enter the number to check Prime Numbers: ");
        iNum = input.nextInt();
        bRet = num.isPrimeNumber(iNum);
        if(bRet == true){
            System.out.println("Number is prime");
        }
        else{
            System.out.println("Number is Not prime");
        }

    }
}