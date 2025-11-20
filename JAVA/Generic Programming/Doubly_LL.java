import java.util.Scanner ;

class Node <T>
{
    T data ;
    Node <T> next ;
    Node <T> prev ;

    Node(T iNo)
    {
        data = iNo ;
        next = null ;
        prev = null ;
    }
}

class Doubly <T>
{
    // characterstis
    public Node <T> head ;
    public Node <T> tail ;
    public int iCountNode ;

    // Constructor
    public Doubly()
    {
        head = null ;
        tail = null ;
        iCountNode = 0 ;
    }

    public int countNode()
    {
        return iCountNode ;
    }

    public void displayLL()
    {
        DoublyMethods.displayLL(this);
    }

    public void insertFirst(T iNo)
    {
        DoublyMethods.insertFirst(this,iNo);
    }

    public void insertLast(T iNo)
    {
       DoublyMethods.insertLast(this,iNo);
    }

    public void deleteFirst()
    {
        DoublyMethods.deleteFirst(this);
    }

    public void deleteLast()
    {
        DoublyMethods.deleteLast(this);
    }

    public void insertAtPos(T iNo , int iPos)
    {
        DoublyMethods.insertAtPos(this,iNo,iPos);
    }

    public void deleteAtPos(int iPos)
    {
        DoublyMethods.deleteAtPos(this,iPos);
    }

    public void emptyLL()
    {
        DoublyMethods.emptyLL(this);
    }
}

class DoublyMethods
{
    // this method is used to count total nodes of LL
    public static <T> int countNode(Doubly <T> DLL)
    {
        if((DLL.head == null) && (DLL.tail == null))
        {
            return 0 ;
        }

        return DLL.iCountNode ;
    }

    // this method is used to Display the LL
    public static <T> void displayLL(Doubly <T> DLL)
    {
        if((DLL.head == null) && (DLL.tail == null))
        {
            System.out.println("LL is empty !!");
            return ;
        }

        Node <T> temp = null ;

        temp = DLL.head ;

        System.out.print("null->");
        while(temp != null)
        {
            System.out.print("| "+ temp.data + " |<=>") ;
            temp = temp.next ;
        }
        System.out.print("null \n");
    }

    // this method is used to insert new node at first position of LL
    public static <T> void insertFirst(Doubly <T> DLL , T iNo)
    {
        Node <T> newn = null ;

        newn = new Node<T>(iNo);

        if(DLL.head == null && DLL.tail == null)
        {
            DLL.head = newn ;
            DLL.tail = newn ;
        }
        else
        {
            newn.next = DLL.head ;
            DLL.head.prev = newn ;
            DLL.head = newn ;
        }

        DLL.iCountNode++ ;

        System.out.println("Data inserted succesfully.");
    }

    // this method is used to insert new node at last position of LL
    public static <T> void insertLast(Doubly <T> DLL , T iNo)
    {
        Node <T> newn = null ;

        newn = new Node<T>(iNo);

        if(DLL.head == null && DLL.tail == null)
        {
            DLL.head = newn ;
            DLL.tail = newn ;
        }
        else
        {
            newn.prev = DLL.tail ;
            DLL.tail.next = newn ;
            DLL.tail = newn ;
        }
        DLL.iCountNode ++;

        System.out.println("Data inserted succesfully.");
    }

    // this method is used to delete the node from first position of LL
    public static <T> void deleteFirst(Doubly <T> DLL)
    {
        if(DLL.head == null && DLL.tail == null)
        {
            System.out.println("LL is empty , unable to delete element !!");
            return ;
        }

        if(DLL.head == DLL.tail)
        {
            DLL.head = null ;
            DLL.tail = null ;

            System.gc();
        }
        else
        {
            DLL.head = DLL.head.next ;
            DLL.head.prev = null ;
            
            System.gc();
        }
        DLL.iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // this method is used to delete node from last postion of LL
    public static <T> void deleteLast(Doubly <T> DLL)
    {
        if(DLL.head == null && DLL.tail == null)
        {
            System.out.println("LL is empty , unable to delete element !!");
            return ;
        }

        if(DLL.head == DLL.tail)
        {
            DLL.head = null ;
            DLL.tail = null ;

            System.gc();
        }
        else
        {
            DLL.tail = DLL.tail.prev ;
            DLL.tail.next = null ;

            System.gc();
        }

        DLL.iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // this method is used to insert new node at your required position of LL
    public static <T> void insertAtPos(Doubly <T> DLL , T iNo , int iPos)
    {
        if(iPos < 1 || iPos > DLL.iCountNode+1)
        {
            System.out.println("invalid position !! , please enter correct position ");
            return ;
        }

        if(iPos == 1)
        {
            insertFirst(DLL , iNo);
        }
        else if(iPos == DLL.iCountNode+1)
        {
            insertLast(DLL , iNo);
        }
        else
        {
            Node <T> newn = null ;
            Node <T> temp = null ;
            int i = 0 ;

            newn = new Node<T>(iNo);

            temp = DLL.head ;

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            temp.next.prev = newn ;
            newn.prev = temp ;
            temp.next = newn ;

            DLL.iCountNode++ ;

            System.out.println("Data inserted succesfully.");
        }
    }

    // this method is used to delete the node from your required position of LL
    public static <T> void deleteAtPos(Doubly <T> DLL , int iPos)
    {
        if(iPos < 1 || iPos > DLL.iCountNode)
        {
            System.out.println("invalid position !! , please enter correct position ");
            return ;
        }

        if(iPos == 1)
        {
            deleteFirst(DLL);
        }
        else if(iPos == DLL.iCountNode)
        {
            deleteLast(DLL);
        }
        else
        {
            Node <T> temp = null ;
            int i = 0 ;

            temp = DLL.head ;

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            temp.next.next.prev = temp ;
            temp.next = temp.next.next ;

            DLL.iCountNode-- ;

            System.out.println("Data deleted succesfully.");
        }
    }

    // this method is used to delete all the node from LL and make LL empty
    public static <T> void emptyLL(Doubly <T> DLL)
    {
        if(DLL.head == null && DLL.tail == null)
        {
            System.out.println("LL is already empty !!");
            return ;
        }

        Node <T> temp = DLL.head ;
        Node <T> nextNode = null ;

        while(temp != null)
        {
            nextNode = temp.next ;

            temp.next = null ;
            temp.prev = null ;

            temp = nextNode ;

            DLL.iCountNode-- ;
        }

        DLL.head = null ;
        DLL.tail = null ;

        System.out.println("Now , LL is empty");
    }
}

class Doubly_LL
{
    public static void main(String arg[])
    {
        Scanner scobj = new Scanner(System.in);

        int iOption = 0 , iRet = 0 , iPos = 0 ;

        String iData = null ;

        Doubly <String> dobj = new Doubly<String>();

        System.out.println("NOTE :\n1 : position of LL start with 1");
        while(true)
        {
            System.out.println("-----------------------------------------------------------------");
            System.out.println("0 : Terminate the Application");
            System.out.println("1 : Display the LL ");
            System.out.println("2 : Count the total nodes of LL");
            System.out.println("3 : Insert the data at first position");
            System.out.println("4 : Insert the data at last position");
            System.out.println("5 : Insert the data at required position");
            System.out.println("6 : Delete the data of first position");
            System.out.println("7 : Delete the data of last position");
            System.out.println("8 : Delete the data from requrired position");
            System.out.println("9 : Delete the all data from LL (OR) make LL empty");
            System.out.println("-----------------------------------------------------------------");
            System.out.println("Enter the option : ");
            iOption = scobj.nextInt();
            System.out.println("-----------------------------------------------------------------");
            
            if(iOption == 0)
            {
                System.out.println("Application is closed..");
                break ;
            }
            else if(iOption == 1)
            {
                dobj.displayLL();
            }
            else if(iOption == 2)
            {
                iRet = dobj.countNode();
                System.out.println("Total nodes in LL are : "+iRet);
            }
            else if(iOption == 3)
            {
                scobj.nextLine();
                System.out.println("Enter the data : ");
                iData = scobj.nextLine();

                dobj.insertFirst(iData);
            }
            else if(iOption == 4)
            {
                scobj.nextLine();

                System.out.println("Enter the data : ");
                iData = scobj.nextLine();


                dobj.insertLast(iData);
            }
            else if(iOption == 5)
            {
                scobj.nextLine();

                System.out.println("Enter the data : ");
                iData = scobj.nextLine();

                System.out.println("Enter the position : ");
                iPos = scobj.nextInt();

                dobj.insertAtPos(iData,iPos);
            }
            else if(iOption == 6)
            {
                dobj.deleteFirst();
            }
            else if(iOption == 7)
            {
                dobj.deleteLast();
            }
            else if(iOption == 8)
            {
                System.out.println("Enter the position : ");
                iPos = scobj.nextInt();

                dobj.deleteAtPos(iPos);
            }
            else if(iOption == 9)
            {
                dobj.emptyLL();
            }
            else
            {
                System.out.println("!! Invalid option !!");
            }
        }
    }
}