import java.util.Scanner ;

class Node<T>
{
    T data ;
    Node <T> next ;

    public Node(T iNo)
    {
        data = iNo ;
        next = null ;
    }
}

class SinglyCircular <T>
{
    // characterstics
    public Node <T> head ;
    public Node <T> tail ;
    public int iCountNode ;

    // constructor
    public SinglyCircular()
    {
        head = null ;
        tail = null ;
        iCountNode = 0 ;
    }

    // countNode method is used for count the peresent elements in LinkedList.
    public int countNode()
    {
        return iCountNode ;
    }

    public void displayLL()
    {
        SinglyCircularMethods.displayLL(this);
    }

    public void insertFirst(T iNo)
    {
         SinglyCircularMethods.insertFirst(this , iNo);
    }

    public void insertLast(T iNo)
    {
        SinglyCircularMethods.insertLast(this , iNo);   
    }

    public void insertAtPos(T iNo , int iPos)
    {
        SinglyCircularMethods.insertAtPos(this , iNo , iPos);   
    }

    public void deleteFirst()
    {
        SinglyCircularMethods.deleteFirst(this);   
    }

    public void deleteLast()
    {
        SinglyCircularMethods.deleteLast(this);
    }

    public void deleteAtPos(int iPos)
    {
        SinglyCircularMethods.deleteAtPos(this , iPos);
    }

    public void emptyLL()
    {
        SinglyCircularMethods.emptyLL(this);
    }
}

class SinglyCircularMethods
{
    // countNode method is used for count the peresent elements in LinkedList.
    public static <T> int countNode(SinglyCircular <T> SCL)
    {
        if(SCL.head == null)
        {
            return 0 ;
        }

        return SCL.iCountNode ;
    }

    // displayLL method is used for display the elements which are present inside the LinkedList
    public static <T> void displayLL(SinglyCircular <T> SCL)
    {
        if(SCL.head == null && SCL.tail == null)
        {
            System.out.println("LL is empty");
            return ;
        }

        Node <T> temp = SCL.head ;

        System.out.print("<=>");
        do
        {
            System.out.print("| " + temp.data + " |<=>");
            temp = temp.next ;
        }
        while(temp != SCL.tail.next);
        System.out.println();
    }

    // insertFirst method is used for insert the new node inside the LinkedList at first position
    public static <T> void insertFirst(SinglyCircular <T> SCL , T iNo)
    {
        Node <T> newn = null ;

        newn = new Node<T>(iNo);

        if(SCL.head == null && SCL.tail == null)
        {
            SCL.head = newn ;
            SCL.tail = newn ;
        }
        else
        {
            newn.next = SCL.head ;
            SCL.head = newn ;
        }
        SCL.tail.next = SCL.head ;

        SCL.iCountNode++ ;

        System.out.println("Data inserted succesfully.");
    }

    // insertLast method is used for insert the new node inside the LinkedList at Last position
    public static <T> void insertLast(SinglyCircular <T> SCL , T iNo)
    {
        Node <T> newn = null ;

        newn = new Node<T>(iNo) ;

        if(SCL.head == null && SCL.tail == null)
        {
            SCL.head = newn ;
            SCL.tail = newn ;
        }
        else
        {
            SCL.tail.next = newn ;
            SCL.tail = newn ;
        }
        SCL.tail.next = SCL.head ;
        SCL.iCountNode++ ;
        System.out.println("Data inserted succesfully.");
    }

    // insertAtPos method is used for insert new node any your required position in LL 
    public static <T> void insertAtPos(SinglyCircular <T> SCL , T iNo , int iPos)
    {
        if(iPos < 1 || iPos > SCL.iCountNode+1)
        {
            System.out.println("Invalid Position !! , Please enter correct position.");
            return ;
        }

        if(iPos == 1)
        {
            insertFirst(SCL , iNo);
        }
        else if(iPos == SCL.iCountNode+1)
        {
            insertLast(SCL , iNo);
        }
        else
        {
            Node <T> newn = null ;
            int i = 0 ;

            Node <T> temp = SCL.head ;

            newn = new Node<T>(iNo);

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            temp.next = newn ;

            SCL.iCountNode++ ;

            System.out.println("Data inserted succesfully.");
        }
    }

    // deleteFirst method is used to Delete the first node of the LinkedList
    public static <T> void deleteFirst(SinglyCircular <T> SCL)
    {
        if(SCL.head == null && SCL.tail == null)
        {
            System.out.println("LL is allready empty , Unable to delete");
            return ;
        }

        if(SCL.head == SCL.tail)
        {
            SCL.head = null ;
            SCL.tail = null ;
        }
        else
        {
            SCL.head = SCL.head.next ;

            SCL.tail.next = SCL.head ;
        }
        SCL.iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // deleteLast method is used to Delete the last node of the LinkedList
    public static <T> void deleteLast(SinglyCircular <T> SCL)
    {
        if(SCL.head == null && SCL.tail == null)
        {
            System.out.println("LL is allready empty , Unable to delete");
            return ;
        }

        if(SCL.head == SCL.tail)
        {
            SCL.head = null ;
            SCL.tail = null ;
        }
        else
        {
            Node <T> temp = SCL.head ;

            while(temp.next != SCL.tail)
            {
                temp = temp.next ;
            }
            SCL.tail = temp ;
            SCL.tail.next = SCL.head ;
        }
        SCL.iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // deleteAtPos is used to delete the node from required position of LL 
    public static <T> void deleteAtPos(SinglyCircular <T> SCL , int iPos)
    {
        if(iPos < 1 || iPos > SCL.iCountNode)
        {
            System.out.println("Invalid Position !!");
            return ;
        }

        if(iPos == 1)
        {
            deleteFirst(SCL);
        }
        else if(iPos == SCL.iCountNode)
        {
            deleteLast(SCL);
        }
        else
        {
            Node <T> temp = SCL.head ;
            int i = 0 ;

            for(i=1; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            temp.next = temp.next.next ;

            SCL.iCountNode-- ;
            
            System.out.println("Data deleted succesfully.");
        }
        SCL.tail.next = SCL.head ;
    }

    // emptyLL method is used to delete all nodes and make LL empty
    public static <T> void emptyLL(SinglyCircular <T> SCL)
    {
        if(SCL.head == null)
        {
            System.out.println("LL is already empty , Unable to use emptyLL method");
            return ;
        }

        Node <T> nextNode = null ;
        Node <T> temp = SCL.head ;

        for(int i = 1 ; i <= SCL.iCountNode ; i++)
        {
            nextNode = temp.next ;
            temp.next = null ;
            temp = nextNode ;
        }

        SCL.head = null ;
        SCL.tail = null ;

        SCL.iCountNode = 0 ;

        System.out.println("Now , LL is empty");
    }
}

class Singly_Circular_LL
{
    public static void main(String arg[])
    {
        int iOption = 0 , iRet = 0 ,  iPos = 0 ;

        String iData = null ;

        SinglyCircular <String> sobj = new SinglyCircular<String>();

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
                    sobj.displayLL();
                    break ;

                case 2 :
                    iRet = sobj.countNode(); 
                    System.out.println("Total nodes in LL are : "+iRet);
                    break ;

                case 3 : 
                    scobj.nextLine();
                    System.out.println("Enter the data : ");
                    iData = scobj.nextLine();

                    sobj.insertFirst(iData);
                    break ;

                case 4 :
                    scobj.nextLine();
                    System.out.println("Enter the data : ");
                    iData = scobj.nextLine();

                    sobj.insertLast(iData);
                    break ;

                case 5 :
                    scobj.nextLine();
                    System.out.println("Enter the data : ");
                    iData = scobj.nextLine();

                    System.out.println("Enter the position : ");
                    iPos = scobj.nextInt();

                    sobj.insertAtPos(iData,iPos);
                    break ;

                case 6 :
                    sobj.deleteFirst();
                    break ;

                case 7 :
                    sobj.deleteLast();
                    break ;

                case 8 :
                    System.out.println("Enter the position : ");
                    iPos = scobj.nextInt();

                    sobj.deleteAtPos(iPos);
                    break ;

                case 9 :
                    sobj.emptyLL();
                    break ;

                default :
                    System.out.println("!! Invalid Option !!");
                    break ;          
            }
        }
    }
}