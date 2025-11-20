
class Node
{
    public int data ;
    public Node lChild ;
    public Node rChild ;

    public Node(int x)
    {
        data = x ;
        lChild = null ;
        rChild = null ;
    }
}

class BinarySearchTree
{
    public Node root ;
    public int iCountNode ;

    public void insert(int iNo)
    {
        Node newn = new Node(iNo) ;

        Node temp = root ;

        if(temp == null)
        {
            root = newn ;
        }
        else
        {
            while(true)
            {
                if(iNo > temp.data)
                {
                    if(temp.rChild == null)
                    {
                        temp.rChild = newn ;
                        break ;
                    }
                    temp = temp.rChild;
                }
                else if(iNo < temp.data)
                {
                    if(temp.lChild == null)
                    {
                        temp.lChild = newn ;
                        break ;
                    }
                    temp = temp.lChild;
                }
                else if(iNo == temp.data)
                {
                    System.out.println("Duplicate element , unable to insert !!");
                    break ;
                }
            }
        }
    }

    public void inOrder(Node temp)
    {
        if(temp != null)
        {
            inOrder(temp.lChild);
            System.out.println(temp.data);
            inOrder(temp.rChild);
        }
    }

    public void preOrder(Node temp)
    {
        if(temp != null)
        {
            System.out.println(temp.data);
            preOrder(temp.lChild);
            preOrder(temp.rChild);
        }
    }

    public void postOrder(Node temp)
    {
        if(temp != null)
        {
            postOrder(temp.lChild);
            postOrder(temp.rChild);
            System.out.println(temp.data);
        }
    }
}

class BST
{
    public static void main(String[] arg)
    {
        BinarySearchTree bobj = new BinarySearchTree();

        bobj.insert(10);
        bobj.insert(60);
        bobj.insert(40);
        bobj.insert(50);
        bobj.insert(20);
        bobj.insert(30);

        bobj.inOrder(bobj.root);        System.out.println();

        bobj.preOrder(bobj.root);       System.out.println();

        bobj.postOrder(bobj.root);
    }
}