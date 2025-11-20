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

    public void DeleteFirst()              // Delete the first node of LL
    {
        if(head == null)                   // LL is alreay empty
        {
            System.out.println("LL is allready empty !!");
            return ;
        }
        else if(head.next == null)           // LL conatin only 1 node
        {
            head = null ;
            System.gc();
        }
        else                           // LL conatin more than 1 node
        {
            head = head.next ;
            System.gc();
        }
        iCount-- ;
    }

    public void DeleteLast()                // Delete the last node of LL
    {
        if(head == null)                   // LL is alreay empty
        {
            System.out.println("LL is allready empty !!");
            return ;
        }
        else if(head.next == null)           // LL conatin only 1 node
        {
            head = null ;
            System.gc();
        }
        else                           // LL conatin more than 1 node
        {
            node temp = head ;

            while(temp.next.next != null)
            {
                temp = temp.next ;
            }
            temp.next = null ;
            System.gc();
        }
        iCount-- ;
    }

    public void InsertAtpos(int no , int iPos)      // insert node at any postion
    {
        

        if(iPos < 1 && iPos < iCount+1)             // Position is invalid
        {
            System.out.println("Invalid Position !!");
            return ;
        }

        if(iPos == 1)       // position is first
        {
            InsertFirst(no);
        }
        else if(iPos == iCount+1)   // position is last
        {
            InsertLast(no);
        }
        else                    // postion any where else first and last
        {
            node newn = null ;

            newn = new node(no);

            node temp = head ;

            int iCnt = 0 ;

            for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            temp.next = newn ;

            iCount++ ;
        }
    }

    public void DeleteAtpos(int iPos)      // delete node from any position
    {
        if(iPos < 1 && iPos > iCount)             // Position is invalid
        {
            System.out.println("Invalid Position !!");
            return ;
        }

        if(iPos == 1)       // position is first
        {
            DeleteFirst();
        }
        else if(iPos == iCount)   // position is last
        {
            DeleteLast();
        }
        else                    // postion any where else first and last
        {
            node temp = head ;

            int iCnt = 0 ;

            for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
            {
                temp = temp.next ;
            }
            temp.next = temp.next.next ;
            System.gc();

            iCount-- ;
        }
    }
}

class Program511
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
         
        slobj.Display();  
        System.out.println("Total elements in LL are : " + slobj.Count()); 

        slobj.DeleteFirst();
  
        slobj.Display();
        System.out.println("Total elements in LL are : " + slobj.Count());

        slobj.DeleteLast();

        slobj.Display();
        System.out.println("Total elements in LL are : " + slobj.Count());

        slobj.InsertAtpos(111,3);

        slobj.Display();
        System.out.println("Total elements in LL are : " + slobj.Count());

        slobj.DeleteAtpos(3);

        slobj.Display();
        System.out.println("Total elements in LL are : " + slobj.Count());
        
    }
}

/*
    OUTPUT

    Elements of LL are :
    |11|->|21|->|51|->|60|->|65|->|70|->null
    Total elements in LL are : 6
    Elements of LL are :
    |21|->|51|->|60|->|65|->|70|->null
    Total elements in LL are : 5
    Elements of LL are :
    |21|->|51|->|60|->|65|->null
    Total elements in LL are : 4
    Elements of LL are :
    |21|->|51|->|111|->|60|->|65|->null
    Total elements in LL are : 5
    Elements of LL are :
    |21|->|51|->|60|->|65|->null
    Total elements in LL are : 4

*/