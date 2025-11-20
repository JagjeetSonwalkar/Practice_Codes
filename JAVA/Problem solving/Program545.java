import java.util.*;

class Program545
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

        System.out.println("Size of LL is : "+ lobj.size());     // Returns the number of elements in this list.

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
    Size of LL is : 7

*/