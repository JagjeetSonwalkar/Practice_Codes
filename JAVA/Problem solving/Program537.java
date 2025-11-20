import java.util.*;

class Program537
{
    public static void main(String arg[])
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);       // Appends the specified element to the end of this list
        lobj.add(21);
        lobj.add(31);
        lobj.add(101);
        lobj.add(201);

        lobj.add(3,1111);    // Inserts the specified element at the specified position in this list.

        // for each
        for(Integer no : lobj)
        {
            System.out.println(no);
        }
    }
}

/*
    OUTPUT

    11
    21
    31
    1111
    101
    201

*/