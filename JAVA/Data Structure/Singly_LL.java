import java.util.Scanner ;

class node
{
    int data ;
    node next ;

    public node(int iNo)
    {
        data = iNo ;
        next = null ;
    }
}

class Singly 
{
    // characterstics
    public node head ;
    public int iCountNode ;

    // constructor
    public Singly()
    {
        head = null ;
        iCountNode = 0 ;
    }

    // CountNode method is used for count the peresent elements in LinkedList.
    public int CountNode()
    {
        if(head == null)
        {
            return 0 ;
        }

        return iCountNode ;
    }

    // DisplayLL method is used for display the elements which are present inside the LinkedList
    public void DisplayLL()
    {
        if(head == null)
        {
            System.out.println("NULL : ! Linked list is empty !");
            return ;
        }

        node temp = null ;

        temp = head ;
 
        while(temp != null)
        {
            System.out.print("| " + temp.data + " |->");
            temp = temp.next ;
        }
        System.out.println("null");
    }

    // InsertFirst method is used for insert the new node inside the LinkedList at first position
    public void InsertFirst(int iNo)
    {
        node newn = null ;

        newn = new node(iNo) ;

        if(head == null)
        {
            head = newn ;
        }
        else 
        {
            newn.next = head ;
            head = newn ;
        }
        iCountNode++ ;

        System.out.println("Data inserted succesfully.");
    }

    // InsertLast method is used for insert the new node inside the LinkedList at Last position
    public void InsertLast(int iNo)
    {
        node newn = null ;

        newn = new node(iNo) ;

        if(head == null)
        {
            head = newn ;
        }
        else
        {
            node temp = null ;

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

    // DeleteFirst method is used to Delete the first node of the LinkedList
    public void DeleteFirst()
    {
        if(head == null)
        {
            System.out.println("Unable to delete because LL is already empty !!");
            return ;
        }

        if(head.next == null)
        {
            head = null ;

            System.gc();
        }
        else
        {
            head = head.next ;
        }
        iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // DeleteLast method is used to Delete the last node of the LinkedList
    public void DeleteLast()
    {
        if(head == null)
        {
            System.out.println("Unable to delete because LL is already empty !!");
            return ;
        }

        if(head.next == null)
        {
            head = null ;

            System.gc();
        }
        else
        {
            node temp = null ;
            temp = head ;

            while(temp.next.next != null)
            {
                temp = temp.next ;
            }
            temp.next = null ;
        }
        iCountNode-- ;
        System.out.println("Data deleted succesfully.");
    }

    // InsertAtPos method is used for insert new node any your required position in LL 
    public void InsertAtPos(int iNo , int iPos)
    {
        if(iPos < 1 || iPos > iCountNode+1)
        {
            System.out.println("Invalid position !!");
            return ;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCountNode+1)
        {
            InsertLast(iNo);
        }
        else
        {
            node newn = null ;
            node temp = null ;
            int iCnt = 0 ;

            newn = new node(iNo);

            temp = head ;

            for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            temp.next = newn ;

            iCountNode++ ;
        }
        System.out.println("Data inserted succesfully.");
    }

    // DeleteAtPos is used to delete the node from required position of LL 
    public void DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCountNode)
        {
            System.out.println("Invalid position !!");
            return ;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCountNode)
        {
            DeleteLast();
        }
        else
        {
            node temp = null ;
            int iCnt = 0 ;

            temp = head ;

            for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
            {
                temp = temp.next ;
            }
            temp.next = temp.next.next ;

            iCountNode-- ;
        }
        System.out.println("Data deleted succesfully.");
    }

    // DeleteAllNodes method is used to delete all nodes and make LL empty
    public void DeleteAllNodes()
    {
        if(head == null)
        {
            System.out.println("Unable to delete because LL is already empty !!");
            return ;
        }

        node temp = head ;
        node nextnode = null ;

        while(temp != null)
        {
            nextnode = temp.next ;
            temp.next = null ;

            temp = nextnode ;
        }

        head = null ;
        iCountNode = 0 ;

        System.out.println("All Data deleted succesfully.\t LL is empty");
    }
}

class Singly_LL
{
    public static void main(String arg[])
    {
        Scanner scobj = new Scanner(System.in);

        int iOption = 0 , iRet = 0 , iData = 0 , iPos = 0 ;

        Singly singlyLL = new Singly();

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
                return ;
            }
            else if(iOption == 1)
            {
                singlyLL.DisplayLL();
            }
            else if(iOption == 2)
            {
                iRet = singlyLL.CountNode();
                System.out.println("Total nodes in LL are : " + iRet);
            }
            else if(iOption == 3)
            {
                System.out.println("Enter the data : ");
                iData = scobj.nextInt();

                singlyLL.InsertFirst(iData);
            }
            else if(iOption == 4)
            {
                System.out.println("Enter the data : ");
                iData = scobj.nextInt();

                singlyLL.InsertLast(iData);
            }
            else if(iOption == 5)
            {
                System.out.println("Enter the data : ");
                iData = scobj.nextInt();

                System.out.println("Enter the position : ");
                iPos = scobj.nextInt();

                singlyLL.InsertAtPos(iData,iPos);
            }
            else if(iOption == 6)
            {
                singlyLL.DeleteFirst();
            }
            else if(iOption == 7)
            {
                singlyLL.DeleteLast();
            }
            else if(iOption == 8)
            {
                System.out.println("Enter the position : ");
                iPos = scobj.nextInt();

                singlyLL.DeleteAtPos(iPos);
            }
            else if(iOption == 9)
            {
                singlyLL.DeleteAllNodes();
            }
            else
            {
                System.out.println("!! Invalid option !!");
            }
        }
    }
}