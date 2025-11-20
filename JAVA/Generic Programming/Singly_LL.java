import java.util.Scanner ;

class node<T>
{
    T data ;
    node <T> next ;

    public node(T iNo)
    {
        data = iNo ;
        next = null ;
    }
}

class Singly<T>
{
    // characterstics
    public node <T> head ;
    public int iCountNode ;

    // constructor
    public Singly()
    {
        head = null ;
        iCountNode = 0 ;
    }

    public int CountNode()
    {
        return iCountNode ;
    }

    public void DisplayLL()
    {
        SinglyMethods.DisplayLL(this);
    }

    public void InsertFirst(T iNo)
    {
        SinglyMethods.InsertFirst(this, iNo);
    }

    public void InsertLast(T iNo)
    {
        SinglyMethods.InsertLast(this, iNo);
    }

    public void DeleteFirst()
    {
        SinglyMethods.DeleteFirst(this);
    }

    public void DeleteLast()
    {
        SinglyMethods.DeleteLast(this);
    }

    public void InsertAtPos(T iNo , int iPos)
    {
        SinglyMethods.InsertAtPos(this,iNo,iPos);
    }

    public void DeleteAtPos(int iPos)
    {
        SinglyMethods.DeleteAtPos(this,iPos);
    }

    public void DeleteAllNodes()
    {
        SinglyMethods.DeleteAllNodes(this);
    }
}

class SinglyMethods
{
    // CountNode method is used for count the peresent elements in LinkedList.
    public static <T> int CountNode(Singly<T> LL)
    {
        if(LL.head == null)
        {
            return 0 ;
        }

        return LL.iCountNode ;
    }

    // DisplayLL method is used for display the elements which are present inside the LinkedList
    public static <T> void DisplayLL(Singly<T> LL)
    {
        if(LL.head == null)
        {
            System.out.println("NULL : ! Linked list is empty !");
            return ;
        }

        node <T> temp = null ;

        temp = LL.head ;

        while(temp != null)
        {
            System.out.print("| " + temp.data + " |->");
            temp = temp.next ;
        }
        System.out.println("null");
    }

    // InsertFirst method is used for insert the new node inside the LinkedList at first position
    public static <T> void InsertFirst(Singly<T> LL , T iNo)
    {
        node <T> newn = null ;

        newn = new node <T> (iNo) ;

        if(LL.head == null)
        {
            LL.head = newn ;
        }
        else 
        {
            newn.next = LL.head ;
            LL.head = newn ;
        }
        LL.iCountNode++ ;

        System.out.println("Data inserted succesfully.");
    }

    // InsertLast method is used for insert the new node inside the LinkedList at Last position
    public static <T> void InsertLast(Singly<T> LL , T iNo)
    {
        node <T> newn = null ;

        newn = new node <T> (iNo) ;

        if(LL.head == null)
        {
            LL.head = newn ;
        }
        else
        {
            node <T> temp = null ;

            temp = LL.head ;

            while(temp.next != null)
            {
                temp = temp.next ;
            }
            temp.next = newn ;
        }
        LL.iCountNode++ ;

        System.out.println("Data inserted succesfully.");
    }

    // DeleteFirst method is used to Delete the first node of the LinkedList
    public static <T> void DeleteFirst(Singly<T> LL)
    {
        if(LL.head == null)
        {
            System.out.println("Unable to delete because LL is already empty !!");
            return ;
        }

        if(LL.head.next == null)
        {
            LL.head = null ;

            System.gc();
        }
        else
        {
            LL.head = LL.head.next ;
        }
        LL.iCountNode-- ;

        System.out.println("Data deleted succesfully.");
    }

    // DeleteLast method is used to Delete the last node of the LinkedList
    public static <T> void DeleteLast(Singly<T> LL)
    {
        if(LL.head == null)
        {
            System.out.println("Unable to delete because LL is already empty !!");
            return ;
        }

        if(LL.head.next == null)
        {
            LL.head = null ;
        }
        else
        {
            node <T> temp = null ;
            temp = LL.head ;

            while(temp.next.next != null)
            {
                temp = temp.next ;
            }
            temp.next = null ;
        }
        LL.iCountNode-- ;
        System.out.println("Data deleted succesfully.");
    }

    // InsertAtPos method is used for insert new node any your required position in LL 
    public static <T> void InsertAtPos(Singly<T> LL , T iNo , int iPos)
    {
        if(iPos < 1 || iPos > LL.iCountNode+1)
        {
            System.out.println("Invalid position !!");
            return ;
        }

        if(iPos == 1)
        {
            InsertFirst(LL , iNo);
        }
        else if(iPos == LL.iCountNode+1)
        {
            InsertLast(LL ,iNo);
        }
        else
        {
            node <T> newn = null ;
            node <T> temp = null ;
            int iCnt = 0 ;

            newn = new node <T> (iNo);

            temp = LL.head ;

            for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
            {
                temp = temp.next ;
            }
            newn.next = temp.next ;
            temp.next = newn ;

            LL.iCountNode++ ;
        }
        System.out.println("Data inserted succesfully.");
    }

    // DeleteAtPos is used to delete the node from required position of LL 
    public static <T> void DeleteAtPos(Singly<T> LL , int iPos)
    {
        if(iPos < 1 || iPos > LL.iCountNode)
        {
            System.out.println("Invalid position !!");
            return ;
        }

        if(iPos == 1)
        {
            DeleteFirst(LL);
        }
        else if(iPos == LL.iCountNode)
        {
            DeleteLast(LL);
        }
        else
        {
            node <T> temp = null ;
            int iCnt = 0 ;

            temp = LL.head ;

            for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
            {
                temp = temp.next ;
            }
            temp.next = temp.next.next ;

            LL.iCountNode-- ;
        }
        System.out.println("Data deleted succesfully.");
    }

    // DeleteAllNodes method is used to delete all nodes and make LL empty
    public static <T> void DeleteAllNodes(Singly<T> LL)
    {
        if(LL.head == null)
        {
            System.out.println("Unable to delete because LL is already empty !!");
            return ;
        }

        node <T> temp = LL.head ;
        node <T> nextnode = null ;

        while(temp != null)
        {
            nextnode = temp.next ;
            temp.next = null ;

            temp = nextnode ;
        }

        LL.head = null ;
        LL.iCountNode = 0 ;

        System.out.println("All Data deleted succesfully.\t LL is empty");
    }
}


class Singly_LL
{
    public static void main(String arg[])
    {
        Scanner scobj = new Scanner(System.in);

        int iOption = 0 , iRet = 0 , iPos = 0 ;

        String iData = null ;

        Singly <String> singlyLL = new Singly<String>();

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
                scobj.nextLine();
                
                System.out.println("Enter the data : ");
                iData = scobj.nextLine();

                singlyLL.InsertFirst(iData);
            }
            else if(iOption == 4)
            {
                scobj.nextLine();

                System.out.println("Enter the data : ");
                iData = scobj.nextLine();

                singlyLL.InsertLast(iData);
            }
            else if(iOption == 5)
            {
                scobj.nextLine();

                System.out.println("Enter the data : ");
                iData = scobj.nextLine();

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