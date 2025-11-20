import java.util.*;

class Program544
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

        System.out.println(lobj);

        lobj.removeFirst();     // Removes and returns the first element from this list.
        lobj.removeLast();      // Removes and returns the last element from this list.

        System.out.println(lobj);

        System.out.println("Enter the Position of element to delete :");
        int iDel = sobj.nextInt();

        lobj.remove(iDel);          // Removes the element at the specified position in this list.

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
    [10, 20, 30, 0, 101, 201, 301]
    [20, 30, 0, 101, 201]
    Enter the Position of element to delete :
    1
    [20, 0, 101, 201]

*/