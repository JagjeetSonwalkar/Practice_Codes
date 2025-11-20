import java.util.*;

class Program536
{
    public static void main(String arg[])
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(31);

        System.out.println(lobj);

        // for each
        for(Integer no : lobj)
        {
            System.out.println(no);
        }
    }
}

/*
    OUTPUT

    [11, 21, 31]
    11
    21
    31

*/