// Singly Linear LinkList

class node              // self refrencial class
{
    public int data ;
    public node next ;
}

class Program501
{
    public static void main(String arg[])
    {
        node obj1 = new node();
        node obj2 = new node();
        node obj3 = new node();

        node first = null ;

        obj1.data = 10 ;
        obj2.data = 20 ;
        obj3.data = 30 ;

        obj1.next = obj2 ;
        obj2.next = obj3 ;
        obj3.next = null ;
    }
}