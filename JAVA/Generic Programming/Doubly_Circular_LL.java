import java.util.Scanner;

class Node <T>
{
    T data ;
    Node <T> next ;
    Node <T> prev ;

    public Node(T iNo)
    {
        data = iNo ;
        next = null ;
        prev = null ;
    }
}

class DoublyCircular <T>
{
    // characterstis
    public Node <T> head ;
    public Node <T> tail ;
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
        return iCountNode ;
    }


    public void displayLL()
    {
        DoublyCircularMethod.displayLL(this);
    }

    public void insertFirst(T iNo)
    {
        DoublyCircularMethod.insertFirst(this,iNo);
    }

    public void insertLast(T iNo)
    {
        DoublyCircularMethod.insertLast(this,iNo);
    }

    public void insertAtPos(T iNo , int iPos)
    {
        DoublyCircularMethod.insertAtPos(this,iNo,iPos);
    }

    public void deleteFirst()
    {
       DoublyCircularMethod.deleteFirst(this);
    }

    public void deleteLast()
    {
        DoublyCircularMethod.deleteLast(this);
    }

    public void deleteAtPos(int iPos)
    {
        DoublyCircularMethod.deleteAtPos(this,iPos);
    }

    public void emptyLL()
    {
        DoublyCircularMethod.emptyLL(this);
    }
}

class DoublyCircularMethod
{
    // this method is used to count total nodes of LL
    public static <T> int countNode(DoublyCircular <T> DC)
    {
        if(DC.head == null && DC.tail == null) return 0 ;

        return DC.iCountNode ;
    }

    // this method is used to Display the LL
    public static <T> void displayLL(DoublyCircular <T> DC)
    {
        if(DC.head == null && DC.tail == null)
        {
            System.out.println("LL is empty");
            return ;
        }

        Node <T> temp = DC.head ;

        do
        {
            System.out.print("| "+ temp.data + " |<=>");
            temp = temp.next ;
        }
        while(temp != DC.tail.next);

        System.out.println();
    }

    // this method is used to insert new node at first position of LL
    public static <T> void insertFirst(DoublyCircular <T> DC , T iNo)
    {
        Node <T> newn = null ;

        newn = new Node<T>(iNo) ;

        if(DC.head == null && DC.tail == null)
        {
            DC.head = newn ;
            DC.tail = newn ;  
        }
        else
        {
            newn.next = DC.head ;
            DC.head = newn ;
        }
        DC.tail.next = DC.head ;
        DC.head.prev = DC.tail ;

        System.out.println("Data inserted succesfully");

        DC.iCountNode++ ;
    }

    // this method is used to insert new node at last position of LL
    public static <T> void insertLast(DoublyCircular <T> DC , T iNo)
    {
        Node <T> newn = null ;

        newn = new Node<T>(iNo) ;

        if(DC.head == null && DC.tail == null)
        {
            DC.head = newn ;
            DC.tail = newn ;  
        }
        else
        {
            newn.next = newn ;
            newn.prev = DC.tail ;

            DC.tail.next = newn ;

            DC.tail = newn ;
        }
        DC.tail.next = DC.head ;
        DC.head.prev = DC.tail ;

        DC.iCountNode++ ;

        System.out.println("Data inserted succesfully");
    }

    // this method is used to insert new node at your required position of LL
    public static <T> void insertAtPos(DoublyCircular <T> DC , T iNo , int iPos)
    {
        if(iPos < 1 || iPos > DC.iCountNode+1)
        {
            System.out.println("!! Invalid Position !!");
            return ;
        }

        if(iPos == 1)
        {
            insertFirst(DC , iNo);
        }
        else if(iPos == DC.iCountNode+1)
        {
            insertLast(DC , iNo);
        }
        else
        {
            int i = 0 ;
            Node <T> temp = DC.head ;

            Node <T> newn = null ;

            newn = new Node<T>(iNo);

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            newn.prev = temp ;
            temp.next.next.prev = newn ;
            temp.next = newn ;

            DC.iCountNode++ ;

            System.out.println("Data inserted succesfully");
        }
    }

    // this method is used to delete the node from first position of LL
    public static <T> void deleteFirst(DoublyCircular <T> DC)
    {
        if(DC.head == null && DC.tail == null)
        {
            System.out.println("! Unable to delete , LL is empty !");
            return ;
        }

        if(DC.head == DC.tail)
        {
            DC.head = null ;
            DC.tail = null ;
        }
        else
        {
            DC.head = DC.head.next ;

            DC.head.prev = DC.tail ;
            DC.tail.next = DC.head ;
        }
        DC.iCountNode-- ;

        System.out.println("Data deleted succesfully");
    }

    // this method is used to delete node from last postion of LL
    public static <T> void deleteLast(DoublyCircular <T> DC)
    {
        if(DC.head == null && DC.tail == null)
        {
            System.out.println("! Unable to delete , LL is empty !");
            return ;
        }

        if(DC.head == DC.tail)
        {
            DC.head = null ;
            DC.tail = null ;
        }
        else
        {
            DC.tail = DC.tail.prev ;
            DC.tail.next = null ;

            DC.head.prev = DC.tail ;
            DC.tail.next = DC.head ;
        }
        DC.iCountNode-- ;

        System.out.println("Data deleted succesfully");
    }

    // this method is used to delete the node from your required position of LL
    public static <T> void deleteAtPos(DoublyCircular <T> DC , int iPos)
    {
        if(DC.head == null && DC.tail == null)
        {
            System.out.println("! Unable to delete , LL is empty !");
            return ;
        }

        if(iPos < 1 || iPos > DC.iCountNode)
        {
            System.out.println("! Invalid position !");
            return ;
        }

        if(iPos == 1)
        {
            deleteFirst(DC);
        }
        else if(iPos == DC.iCountNode)
        {
            deleteLast(DC);
        }
        else
        {
            int i = 0 ;
            Node <T> temp = DC.head ;

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            temp.next.next.prev = temp ;
            temp.next = temp.next.next ;

            DC.iCountNode-- ;

            System.out.println("Data deleted succesfully");
        }
    }

    // this method is used to delete all the node from LL and make LL empty
    public static <T> void emptyLL(DoublyCircular <T> DC)
    {
        if(DC.head == null && DC.tail == null)
        {
            System.out.println("! Unable to delete , LL is empty !");
            return ;
        }

        int i = 0 ;
        Node <T> nextNode = null ;
        Node <T> temp = DC.head ;

        for(i = 1 ; i <= DC.iCountNode ; i++)
        {
            nextNode = temp.next ;

            temp.next = null ;
            temp.prev = null ;

            temp = nextNode ;
        }

        DC.head = null ;
        DC.tail = null ;
        DC.iCountNode = 0 ;

        System.out.println("LL is empty succesfully");
    }
}

class Doubly_Circular_LL
{
    public static void main(String[] arg)
    {
        int iOption = 0 , iRet = 0 , iPos = 0 ;

        String iData = null ;

        DoublyCircular <String> dobj = new DoublyCircular<String>();

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
                    scobj.nextLine();
                    System.out.println("Enter the data : ");
                    iData = scobj.nextLine();

                    dobj.insertFirst(iData);
                    break ;

                case 4 :
                    scobj.nextLine();
                    System.out.println("Enter the data : ");
                    iData = scobj.nextLine();

                    dobj.insertLast(iData);
                    break ;

                case 5 :
                    scobj.nextLine();
                    System.out.println("Enter the data : ");
                    iData = scobj.nextLine();

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