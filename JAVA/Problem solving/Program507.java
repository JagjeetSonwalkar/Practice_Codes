// Singly Linear LinkList

class node              // self refrencial class
{
    public int data ;
    public node next ;

    public node(int x)
    {
        data = x ;
        next = null ;
    }
}

class SinglyLL              // Singly LL class
{
    public node head ;
    public int iCount ;

    public SinglyLL()       // Constructer
    {
        head = null ;
        iCount = 0 ;
    }

    public void InsertFirst(int no)         // Insert node at first
    {
        node newn = null ;

        newn = new node(no) ;     // Dynamic memory allocation for new node & write no in ()

        if(head == null)        // LL is empty
        {
            head = newn ;
        }
        else                    // LL contain more than 1 node
        {
            newn.next = head ;
            head =newn ;
        }
        iCount++ ;
    }

    public void InsertLast(int no)          // Insert node at last
    {
        node newn = null ;
        node temp = null ;

        newn = new node(no) ;                 // Dynamic memory allocation for new node & write no in ()

        if(head == null)                     // LL is empty
        {
            head = newn ;
        }
        else                               // LL contain more than 1 node
        {
            temp = head ;

            while(temp.next != null)
            {
                temp = temp.next ;
            }
            temp.next = newn ;
        }
        iCount++ ;
    }

    public void Display()               // Display the LL
    {
        System.out.println("Elements of LL are :");

        node temp = head ;

        while(temp != null)
        {
            System.out.print("|"+ temp.data +"|->");
            temp = temp.next ;
        }
        System.out.println("null");
    }

    public int Count()          // Display the count of node inside the LL
    {
        return iCount ;
    }
}

class Program507
{
    public static void main(String arg[])
    {
        SinglyLL slobj = new SinglyLL();            // object of SinglyLL class

        slobj.InsertFirst(51);
        slobj.InsertFirst(21);
        slobj.InsertFirst(11);

        slobj.InsertLast(60);
        slobj.InsertLast(65);
        slobj.InsertLast(70);

        System.out.println("Total elements in LL are : " + slobj.Count());  
        slobj.Display();  
    }
}

/*
    OUTPUT

    Total elements in LL are : 6
    Elements of LL are :
    |11|->|21|->|51|->|60|->|65|->|70|->null

*/