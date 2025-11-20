import java.util.Scanner ;

class Node
{
    int data ;
    Node next ;

    public Node(int iNo)
    {
        data = iNo ;
        next = null ;
    }
}

class SinglyCircular
{
    // characterstics
    public Node head ;
    public Node tail ;
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
        if(head == null)
        {
            return 0 ;
        }

        return iCountNode ;
    }

    // displayLL method is used for display the elements which are present inside the LinkedList
    public void displayLL()
    {
        if(head == null && tail == null)
        {
            System.out.println("LL is empty");
            return ;
        }

        Node temp = head ;

        System.out.print("<=>");
        do
        {
            System.out.print("|" + temp.data + " |<=>");
            temp = temp.next ;
        }
        while(temp != tail.next);
        System.out.println();
    }

    // insertFirst method is used for insert the new node inside the LinkedList at first position
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
            head = newn ;
        }
        tail.next = head ;

        iCountNode++ ;

        System.out.println("Data inserted succesfully.");
    }

    // insertLast method is used for insert the new node inside the LinkedList at Last position
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
            tail.next = newn ;
            tail = newn ;
        }
        tail.next = head ;
        iCountNode++ ;
        System.out.println("Data inserted succesfully.");
    }

    // insertAtPos method is used for insert new node any your required position in LL 
    public void insertAtPos(int iNo , int iPos)
    {
        if(iPos < 1 || iPos > iCountNode+1)
        {
            System.out.println("Invalid Position !! , Please enter correct position.");
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
            int i = 0 ;

            Node temp = head ;

            newn = new Node(iNo);

            for(i = 1 ; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            temp.next = newn ;

            iCountNode++ ;

            System.out.println("Data inserted succesfully.");
        }
    }

    // deleteFirst method is used to Delete the first node of the LinkedList
    public void deleteFirst()
    {
        if(head == null && tail == null)
        {
            System.out.println("LL is allready empty , Unable to delete");
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

            tail.next = head ;
        }
        iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // deleteLast method is used to Delete the last node of the LinkedList
    public void deleteLast()
    {
        if(head == null && tail == null)
        {
            System.out.println("LL is allready empty , Unable to delete");
            return ;
        }

        if(head == tail)
        {
            head = null ;
            tail = null ;
        }
        else
        {
            Node temp = head ;

            while(temp.next != tail)
            {
                temp = temp.next ;
            }
            tail = temp ;
            tail.next = head ;
        }
        iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // deleteAtPos is used to delete the node from required position of LL 
    public void deleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCountNode)
        {
            System.out.println("Invalid Position !!");
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
            Node temp = head ;
            int i = 0 ;

            for(i=1; i < iPos-1 ; i++)
            {
                temp = temp.next ;
            }
            temp.next = temp.next.next ;

            iCountNode-- ;
            
            System.out.println("Data deleted succesfully.");
        }
        tail.next = head ;
    }

    // emptyLL method is used to delete all nodes and make LL empty
    public void emptyLL()
    {
        if(head == null)
        {
            System.out.println("LL is already empty , Unable to use emptyLL method");
            return ;
        }

        Node nextNode = null ;
        Node temp = head ;

        for(int i = 1 ; i <= iCountNode ; i++)
        {
            nextNode = temp.next ;
            temp.next = null ;
            temp = nextNode ;
        }

        head = null ;
        tail = null ;

        iCountNode = 0 ;

        System.out.println("Now , LL is empty");
    }
}

class Singly_Circular_LL
{
    public static void main(String arg[])
    {
        int iOption = 0 , iRet = 0 , iData = 0 , iPos = 0 ;

        SinglyCircular sobj = new SinglyCircular();

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
                    System.out.println("Enter the data : ");
                    iData = scobj.nextInt();

                    sobj.insertFirst(iData);
                    break ;

                case 4 :
                    System.out.println("Enter the data : ");
                    iData = scobj.nextInt();

                    sobj.insertLast(iData);
                    break ;

                case 5 :
                    System.out.println("Enter the data : ");
                    iData = scobj.nextInt();

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