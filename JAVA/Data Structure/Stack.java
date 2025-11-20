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

class Stackk
{
    // characterstics 
    public Node head ;
    public int iCountNode ;

    // constructor
    public Stackk()
    {
        head = null ;
        iCountNode = 0 ;
    }

    // countNode method is used for count the total nodes of stack
    public int countNode()
    {
        if(head == null)
        {
            return 0 ;
        }

        return iCountNode ;
    }

    // displayStack method is used for display the elements which are present inside the Stack
    public void displayStack()
    {
        if(head == null)
        {
            System.out.println("NULL : ! Stack is empty !");
            return ;
        }

        System.out.println("------ Stack (Top to Bottom) ------");
        Node temp = head;

        while(temp != null)
        {
            System.out.println("| " + temp.data + " |");
            temp = temp.next;
        }
        System.out.println("-------- Bottom of Stack ----------");
    }

    // Push method is used for insert the new node inside the Stack
    public void push(int iNo)
    {
        Node newn = new Node(iNo);
        newn.next = head;
        head = newn;

        iCountNode++;

        System.out.println("Data inserted successfully.");
    }

    // pop method is used to Delete the node of Stack
    public int pop()
    {
        int no = -1;

        if (head == null)
        {
            System.out.println("Unable to delete because stack is already empty!!");
            return no;
        }

        no = head.data;
        head = head.next;

        iCountNode--;

        System.out.println("Data deleted successfully.");
        return no;
    }

    // emptystack method is used to delete all nodes and make Stack empty
    public void emptyStack()
    {
        if(head == null)
        {
            System.out.println("Unable to delete because Stack is empty !!");
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

        System.out.println("All Data deleted successfully, Now Stack is empty");
    }
}

class Stack
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0 , iOption = 0 , iData = 0 , iDeleteData = 0 ;

        Stackk stack = new Stackk();

        while(true)
        {
            System.out.println("-----------------------------------------------------------------");
            System.out.println("0 : Terminate the Application");
            System.out.println("1 : Display the stack ");
            System.out.println("2 : Count the total nodes of stack");
            System.out.println("3 : push the data (insert the data)");
            System.out.println("4 : pop the data (delete the data)");
            System.out.println("5 : Delete the all data from stack (OR) make stack empty");
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
                    stack.displayStack();
                    break ;
                
                case 2 :
                    iRet = stack.countNode(); 
                    System.out.println("Total nodes in Stack are : "+iRet);
                    break ;

                case 3 :
                    System.out.println("Enter the data : ");
                    iData = sobj.nextInt();

                    stack.push(iData);
                    break ;

                case 4 :
                    iDeleteData = stack.pop();
                    System.out.println("\n poped element is : "+ iDeleteData + "\n");
                    break ;

                case 5 :
                    stack.emptyStack();
                    break ;

                default :
                    System.out.println("!! Invalid Option !!");
                    break ;
            }     
        }
    }
}