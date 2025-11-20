import java.util.*;

class C11_List_Stack
{
    public static void main(String[] arg)
    {
        Stack <Integer> num = new Stack<>();

        num.push(10);
        num.push(20);
        num.push(100);
        num.push(200);
        num.push(110);
        num.push(210);

        System.out.println(num);

        ///////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println("Stack is empty ? or Not : " + num.isEmpty());

        ///////////////////////////////////////////////////////////////////////////////////////////////

        int iRemove = 0 ;

        iRemove = num.pop();
        System.out.println("Removed : "+iRemove);
        iRemove = num.pop();
        System.out.println("Removed : "+iRemove);
        iRemove = num.pop();
        System.out.println("Removed : "+iRemove);

        System.out.println(num);

        ///////////////////////////////////////////////////////////////////////////////////////////////
        // To check what's at the top of the stack without modifying it.

        System.out.println("Top element is : "+ num.peek());

        ///////////////////////////////////////////////////////////////////////////////////////////////

        int iSearch = num.search(10);

        if(iSearch != -1)
        {
            System.out.println("Searched element is at position : "+iSearch);
        }
        else 
        {
            System.out.println("Stack is empty");
        }
    }
}