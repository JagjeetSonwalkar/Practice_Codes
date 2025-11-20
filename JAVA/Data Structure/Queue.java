import java.util.Scanner;

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

class Queuee 
{
    // characterstics
    public Node head ;
    public int iCountNode ;

    // constructor
    public Queuee()
    {
        head = null ;
        iCountNode = 0 ;
    }

    // countNode method is used for count the peresent elements in Queue
    public int countNode()
    {
        if(head == null)
        {
            return 0 ;
        }

        return iCountNode ;
    }

    // displayQueue method is used for display the elements which are present inside the Queue
    public void displayQueue()
    {
        if(head == null)
        {
            System.out.println("NULL : ! Queue is empty !");
            return ;
        }

        Node temp = null ;

        temp = head ;
 
        System.out.println("------ Queue (Front to Rear) ------");
        while(temp != null)
        {
            System.out.print("| " + temp.data + " |<-");
            temp = temp.next ;
        }
        System.out.println("null");
    }

    // enQueue method is used for insert the new node inside the Queue at Last position
    public void enQueue(int iNo)
    {
        Node newn = null ;

        newn = new Node(iNo) ;

        if(head == null)
        {
            head = newn ;
        }
        else
        {
            Node temp = null ;

            temp = head ;

            while(temp.next != null)
            {
                temp = temp.next ;
            }
            temp.next = newn ;
        }
        iCountNode++ ;

        System.out.println("Data inserted succesfully.");
    }

    // deQueue method is used to Delete the first node of the Queue
    public int deQueue()
    {
        int no = -1 ;

        if(head == null)
        {
            System.out.println("Unable to delete because Queue is already empty !!");
            return no ;
        }

        if(head.next == null)
        {
            no = head.data ;

            head = null ;
        }
        else
        {
            no = head.data ;

            head = head.next ;
        }
        iCountNode-- ;

        System.out.println("Data deleted succesfully.");

        return no ;
    }

    // DeleteAllNodes method is used to delete all nodes and make Queue empty
    public void emptyQueue()
    {
        if(head == null)
        {
            System.out.println("Unable to delete because   Queue is empty !!");
            return ;
        }

        Node temp = head ;
        Node nextnode = null ;

        while(temp != null)
        {
            nextnode = temp.next ;
            temp.next = null ;

            temp = nextnode ;
        }

        head = null ;
        iCountNode = 0 ;

        System.out.println("All Data deleted succesfully, Now Queue is empty");
    }
}

class Queue
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0 , iOption = 0 , iData = 0 , iDeleteData = 0 ;

        Queuee qobj = new Queuee();

        while(true)
        {
            System.out.println("-----------------------------------------------------------------");
            System.out.println("0 : Terminate the Application");
            System.out.println("1 : Display the Queue ");
            System.out.println("2 : Count the total nodes of Queue");
            System.out.println("3 : EnQueue the data (insert the data)");
            System.out.println("4 : Dequeue the data (delete the data)");
            System.out.println("5 : Delete the all data from Queue (OR) make Queue empty");
            System.out.println("-----------------------------------------------------------------");
            System.out.println("Enter the option : ");
            iOption = sobj.nextInt();
            System.out.println("-----------------------------------------------------------------");

            switch(iOption)
            {
                case 0 :
                    System.out.println("Module is closing");
                    sobj.close();
                    return ;

                case 1 :
                    qobj.displayQueue();
                    break ;
                
                case 2 :
                    iRet = qobj.countNode(); 
                    System.out.println("Total nodes in queue are : "+iRet);
                    break ;

                case 3 :
                    System.out.println("Enter the data : ");
                    iData = sobj.nextInt();

                    qobj.enQueue(iData);
                    break ;

                case 4 :
                    iData = qobj.deQueue();
                    System.out.println("\n deQueued element is : "+ iData + "\n");
                    break ;

                case 5 :
                    qobj.emptyQueue();
                    break ;

                default :
                    System.out.println("!! Invalid Option !!");
                    break ;
            }     
        }
    }
}