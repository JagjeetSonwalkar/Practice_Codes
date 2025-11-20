import java.util.Scanner ;

class Node
{
    int data ;
    Node next ;
    Node prev ;

    Node(int iNo)
    {
        data = iNo ;
        next = null ;
        prev = null ;
    }
}

class Doubly
{
    // characterstis
    public Node head ;
    public Node tail ;
    public int iCountNode ;

    // Constructor
    public Doubly()
    {
        head = null ;
        tail = null ;
        iCountNode = 0 ;
    }

    // this method is used to count total nodes of LL
    public int countNode()
    {
        if((head == null) && (tail == null))
        {
            return 0 ;
        }

        return iCountNode ;
    }

    // this method is used to Display the LL
    public void displayLL()
    {
        if((head == null) && (tail == null))
        {
            System.out.println("LL is empty !!");
            return ;
        }

        Node temp = null ;

        temp = head ;

        System.out.print("null->");
        while(temp != null)
        {
            System.out.print("| "+ temp.data + " |<=>") ;
            temp = temp.next ;
        }
        System.out.print("null \n");
    }

    // this method is used to insert new node at first position of LL
    public void insertFirst(int iNo)
    {
        Node newn = null ;

        newn = new Node(iNo);

        if(head == null && tail == null)
        {
            head = newn ;
            tail = newn ;
        }
        else
        {
            newn.next = head ;
            head.prev = newn ;
            head = newn ;
        }

        iCountNode++ ;

        System.out.println("Data inserted succesfully.");
    }

    // this method is used to insert new node at last position of LL
    public void insertLast(int iNo)
    {
        Node newn = null ;

        newn = new Node(iNo);

        if(head == null && tail == null)
        {
            head = newn ;
            tail = newn ;
        }
        else
        {
            newn.prev = tail ;
            tail.next = newn ;
            tail = newn ;
        }
        iCountNode ++;

        System.out.println("Data inserted succesfully.");
    }

    // this method is used to delete the node from first position of LL
    public void deleteFirst()
    {
        if(head == null && tail == null)
        {
            System.out.println("LL is empty , unable to delete element !!");
            return ;
        }

        if(head == tail)
        {
            head = null ;
            tail = null ;

            System.gc();
        }
        else
        {
            head = head.next ;
            head.prev = null ;
            
            System.gc();
        }
        iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // this method is used to delete node from last postion of LL
    public void deleteLast()
    {
        if(head == null && tail == null)
        {
            System.out.println("LL is empty , unable to delete element !!");
            return ;
        }

        if(head == tail)
        {
            head = null ;
            tail = null ;

            System.gc();
        }
        else
        {
            tail = tail.prev ;
            tail.next = null ;

            System.gc();
        }

        iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // this method is used to insert new node at your required position of LL
    public void insertAtPos(int iNo , int iPos)
    {
        if(iPos < 1 || iPos > iCountNode+1)
        {
            System.out.println("invalid position !! , please enter correct position ");
            return ;
        }

        if(iPos == 1)
        {
            insertFirst(iNo);
        }
        else if(iPos == iCountNode+1)
        {
            insertLast(iNo);
        }
        else
        {
            Node newn = null ;
            Node temp = null ;
            int i = 0 ;

            newn = new Node(iNo);

            temp = head ;

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            temp.next.prev = newn ;
            newn.prev = temp ;
            temp.next = newn ;

            iCountNode++ ;

            System.out.println("Data inserted succesfully.");
        }
    }

    // this method is used to delete the node from your required position of LL
    public void deleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCountNode)
        {
            System.out.println("invalid position !! , please enter correct position ");
            return ;
        }

        if(iPos == 1)
        {
            deleteFirst();
        }
        else if(iPos == iCountNode)
        {
            deleteLast();
        }
        else
        {
            Node temp = null ;
            int i = 0 ;

            temp = head ;

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            temp.next.next.prev = temp ;
            temp.next = temp.next.next ;

            iCountNode-- ;

            System.out.println("Data deleted succesfully.");
        }
    }

    // this method is used to delete all the node from LL and make LL empty
    public void emptyLL()
    {
        if(head == null && tail == null)
        {
            System.out.println("LL is already empty !!");
            return ;
        }

        Node temp = head ;
        Node nextNode = null ;

        while(temp != null)
        {
            nextNode = temp.next ;

            temp.next = null ;
            temp.prev = null ;

            temp = nextNode ;

            iCountNode-- ;
        }

        head = null ;
        tail = null ;

        System.out.println("Now , LL is empty");
    }
}

class Doubly_LL
{
    public static void main(String arg[])
    {
        Scanner scobj = new Scanner(System.in);

        int iOption = 0 , iRet = 0 , iData = 0 , iPos = 0 ;

        Doubly dobj = new Doubly();

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
                System.out.println("Enter the data : ");
                iData = scobj.nextInt();

                dobj.insertFirst(iData);
            }
            else if(iOption == 4)
            {
                System.out.println("Enter the data : ");
                iData = scobj.nextInt();

                dobj.insertLast(iData);
            }
            else if(iOption == 5)
            {
                System.out.println("Enter the data : ");
                iData = scobj.nextInt();

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