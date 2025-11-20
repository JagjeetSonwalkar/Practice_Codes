import java.util.*;

class Program540
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.addFirst(30);    // Inserts the specified element at the beginning of this list.
        lobj.addFirst(20);
        lobj.addFirst(10);

        lobj.addLast(101);   // Appends the specified element to the end of this list.
        lobj.addLast(201);
        lobj.addLast(301);

        lobj.add(3,00);    // Inserts the specified element at the specified position in this list.

        // for each
        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        // lobj.clear();   // Removes all of the elements from this list.

        System.out.println("Enter the element that you want to search : ");
        int iElement = sobj.nextInt();

        boolean bRet = lobj.contains(iElement) ; // Returns true if this list contains the specified element.

        if(bRet == true) 
        {
            System.out.println("Element is present in LL.");
        }
        else
        {
           System.out.println("Element is not present in LL.");
        }

        System.out.println(lobj);
    }
}

/*
    OUTPUT

    10
    20
    30
    0
    101
    201
    301
    Enter the element that you want to search :
    10
    Element is present in LL.
    [10, 20, 30, 0, 101, 201, 301]

    C:\Users\DELL\OneDrive\Desktop\Logic>java Program540
    10
    20
    30
    0
    101
    201
    301
    Enter the element that you want to search :
    99
    Element is not present in LL.
    [10, 20, 30, 0, 101, 201, 301]

*/