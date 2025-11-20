import java.util.Scanner;

class Node
{
    int data ;
    Node next ;
    Node prev ;

    public Node(int iNo)
    {
        data = iNo ;
        next = null ;
        prev = null ;
    }
}

class DoublyCircular
{
    // characterstis
    public Node head ;
    public Node tail ;
    public int iCountNode ;

    // Constructor
    public DoublyCircular()
    {
        head = null ;
        tail = null ;
        iCountNode = 0 ;
    }

    // this method is used to count total nodes of LL
    public int countNode()
    {
        if(head == null && tail == null) return 0 ;

        return iCountNode ;
    }

    // this method is used to Display the LL
    public void displayLL()
    {
        if(head == null && tail == null)
        {
            System.out.println("LL is empty");
            return ;
        }

        Node temp = head ;

        do
        {
            System.out.print("| "+ temp.data + " |<=>");
            temp = temp.next ;
        }
        while(temp != tail.next);

        System.out.println();
    }

    // this method is used to insert new node at first position of LL
    public void insertFirst(int iNo)
    {
        Node newn = null ;

        newn = new Node(iNo) ;

        if(head == null && tail == null)
        {
            head = newn ;
            tail = newn ;  
        }
        else
        {
            newn.next = head ;
            head = newn ;
        }
        tail.next = head ;
        head.prev = tail ;

        System.out.println("Data inserted succesfully");

        iCountNode++ ;
    }

    // this method is used to insert new node at last position of LL
    public void insertLast(int iNo)
    {
        Node newn = null ;

        newn = new Node(iNo) ;

        if(head == null && tail == null)
        {
            head = newn ;
            tail = newn ;  
        }
        else
        {
            newn.next = newn ;
            newn.prev = tail ;

            tail.next = newn ;

            tail = newn ;
        }
        tail.next = head ;
        head.prev = tail ;

        iCountNode++ ;

        System.out.println("Data inserted succesfully");
    }

    // this method is used to insert new node at your required position of LL
    public void insertAtPos(int iNo , int iPos)
    {
        if(iPos < 1 || iPos > iCountNode+1)
        {
            System.out.println("!! Invalid Position !!");
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
            int i = 0 ;
            Node temp = head ;

            Node newn = null ;

            newn = new Node(iNo);

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            newn.prev = temp ;
            temp.next.next.prev = newn ;
            temp.next = newn ;

            iCountNode++ ;

            System.out.println("Data inserted succesfully");
        }
    }

    // this method is used to delete the node from first position of LL
    public void deleteFirst()
    {
        if(head == null && tail == null)
        {
            System.out.println("! Unable to delete , LL is empty !");
            return ;
        }

        if(head == tail)
        {
            head = null ;
            tail = null ;
        }
        else
        {
            head = head.next ;

            head.prev = tail ;
            tail.next = head ;
        }
        iCountNode-- ;

        System.out.println("Data deleted succesfully");
    }

    // this method is used to delete node from last postion of LL
    public void deleteLast()
    {
        if(head == null && tail == null)
        {
            System.out.println("! Unable to delete , LL is empty !");
            return ;
        }

        if(head == tail)
        {
            head = null ;
            tail = null ;
        }
        else
        {
            tail = tail.prev ;
            tail.next = null ;

            head.prev = tail ;
            tail.next = head ;
        }
        iCountNode-- ;

        System.out.println("Data deleted succesfully");
    }

    // this method is used to delete the node from your required position of LL
    public void deleteAtPos(int iPos)
    {
        if(head == null && tail == null)
        {
            System.out.println("! Unable to delete , LL is empty !");
            return ;
        }

        if(iPos < 1 || iPos > iCountNode)
        {
            System.out.println("! Invalid position !");
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
            int i = 0 ;
            Node temp = head ;

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            temp.next.next.prev = temp ;
            temp.next = temp.next.next ;

            iCountNode-- ;

            System.out.println("Data deleted succesfully");
        }
    }

    // this method is used to delete all the node from LL and make LL empty
    public void emptyLL()
    {
        if(head == null && tail == null)
        {
            System.out.println("! Unable to delete , LL is empty !");
            return ;
        }

        int i = 0 ;
        Node nextNode = null ;
        Node temp = head ;

        for(i = 1 ; i <= iCountNode ; i++)
        {
            nextNode = temp.next ;

            temp.next = null ;
            temp.prev = null ;

            temp = nextNode ;
        }

        head = null ;
        tail = null ;
        iCountNode = 0 ;

        System.out.println("LL is empty succesfully");
    }
}

class Doubly_Circular_LL
{
    public static void main(String[] arg)
    {
        int iOption = 0 , iRet = 0 , iData = 0 , iPos = 0 ;

        DoublyCircular dobj = new DoublyCircular();

        Scanner scobj = new Scanner(System.in);

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

            switch(iOption)
            {
                case 0 :
                    System.out.println("Application is closed..");
                    scobj.close();
                    return ;

                case 1 :
                    dobj.displayLL();
                    break ;

                case 2 :
                    iRet = dobj.countNode();    
                    System.out.println("Total nodes in LL are : "+iRet);
                    break ;

                case 3 : 
                    System.out.println("Enter the data : ");
                    iData = scobj.nextInt();

                    dobj.insertFirst(iData);
                    break ;

                case 4 :
                    System.out.println("Enter the data : ");
                    iData = scobj.nextInt();

                    dobj.insertLast(iData);
                    break ;

                case 5 :
                    System.out.println("Enter the data : ");
                    iData = scobj.nextInt();

                    System.out.println("Enter the position : ");
                    iPos = scobj.nextInt();

                    dobj.insertAtPos(iData,iPos);
                    
                    break ;

                case 6 :
                    dobj.deleteFirst();
                    break ;

                case 7 :
                    dobj.deleteLast();
                    break ;

                case 8 :
                    System.out.println("Enter the position : ");
                    iPos = scobj.nextInt();

                    dobj.deleteAtPos(iPos);
                    break ;

                case 9 :
                    dobj.emptyLL();
                    break ;

                default :
                    System.out.println("!! Invalid Option !!");
                    break ;          
            }
        }
    }
}