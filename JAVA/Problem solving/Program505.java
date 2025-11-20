// Singly Linear LinkList

class node              // self refrencial class
{
    public int data ;
    public node next ;
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

        newn = new node() ;     // Dynamic memory allocation for new node 

        newn.data = no ;
        newn.next = null ;

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

        newn = new node() ;                 // Dynamic memory allocation for new node 

        newn.data = no ;
        newn.next = null ;

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
}

class Program505
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
        
    }
}