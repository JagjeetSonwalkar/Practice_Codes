// Singly Linear LinkList

class node
{
    public int data ;
    public node next ;
}

class Program502
{
    public static void main(String arg[])
    {
        node obj1 = new node();
        node obj2 = new node();
        node obj3 = new node();

        node first = null ;

        first = obj1 ;

        obj1.data = 10 ;
        obj2.data = 20 ;
        obj3.data = 30 ;

        obj1.next = obj2 ;
        obj2.next = obj3 ;
        obj3.next = null ;

        System.out.println(first.data);
        System.out.println(first.next.data);
        System.out.println(first.next.next.data);
    }
}

/*
    OUTPUT

    10
    20
    30

*/