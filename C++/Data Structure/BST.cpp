#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* rChild;
    struct node* lChild;
};

typedef struct node NODE;
typedef struct node* PNODE;

class BinarySearchTree
{
    public:
        PNODE root;
        int iCountNode;

        BinarySearchTree()
        {
            root = NULL;
            iCountNode = 0;
        }

        int countNode()
        {
            return iCountNode;
        }

        void insert(int iNo)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            newn = new NODE;
            newn->data = iNo;
            newn->rChild = NULL;
            newn->lChild = NULL;

            if(root == NULL)
            {
                root = newn;
                iCountNode++;
            }
            else
            {
                temp = root;

                while(1)
                {
                    if(iNo > (temp->data))
                    {
                        if(temp->rChild == NULL)
                        {
                            temp->rChild = newn;
                            iCountNode++;
                            break;
                        }
                        temp = temp->rChild;
                    }
                    else if(iNo < (temp->data))
                    {
                        if(temp->lChild == NULL)
                        {
                            temp->lChild = newn;
                            iCountNode++;
                            break;
                        }
                        temp = temp->lChild;
                    }
                    else if(iNo == (temp->data))
                    {
                        cout<<"Data is duplicate, Unable to insert\n";
                        delete newn;
                        break;
                    }
                }
            }
        }

        void inOrder(PNODE temp)
        {
            if(temp != NULL)
            {
                inOrder(temp->lChild);
                cout<<temp->data<<"\n";
                inOrder(temp->rChild);
            }
        }

        void preOrder(PNODE temp)
        {
            if(temp != NULL)
            {
                cout<<temp->data<<"\n";
                preOrder(temp->lChild);
                preOrder(temp->rChild);
            }
        }

        void postOrder(PNODE temp)
        {
            if(temp != NULL)
            {
                postOrder(temp->lChild);
                postOrder(temp->rChild);
                cout<<temp->data<<"\n";
            }
        }

        void display(int iOption)
        {
            if(root == NULL)
            {
                cout<<"BST is empty";
                return;
            }

            if(iOption == 1)
            {
                inOrder(root);
            }
            else if(iOption == 2)
            {
                preOrder(root);
            }
            else if(iOption == 3)
            {
                postOrder(root);
            }
        }

        PNODE findMin(PNODE node)
        {
            while(node && node->lChild != nullptr)
            {
                node = node->lChild;
            }
            return node;
        }

        int deleteNode(PNODE &temp, int key)
        {
            if (temp == nullptr)
            {
                return -1; // Not found
            }

            if (key < temp->data)
            {
                return deleteNode(temp->lChild, key);
            }
            else if (key > temp->data)
            {
                return deleteNode(temp->rChild, key);
            }
            else
            {
                int deletedValue = temp->data;

                // Node has no children (leaf node)
                if (temp->lChild == nullptr && temp->rChild == nullptr)
                {
                    delete temp;
                    temp = nullptr;
                }
                // Node has only right child
                else if (temp->lChild == nullptr)
                {
                    PNODE newNode = temp->rChild;
                    delete temp;
                    temp = newNode;
                }
                // Node has only left child
                else if (temp->rChild == nullptr)
                {
                    PNODE newNode = temp->lChild;
                    delete temp;
                    temp = newNode;
                }
                // Node has two children
                else
                {
                    // Find the in-order successor
                    PNODE successor = findMin(temp->rChild);
                    temp->data = successor->data;
                    // Now delete the successor node
                    deleteNode(temp->rChild, successor->data);
                }

                // Ensure the count is decremented only once after successful deletion
                iCountNode--;
                return deletedValue;
            }
        }
};

int main()
{
    cout<<"NOTE : 1 : inOrder\t2 : preOrder\t3 : postOrder\n";

    int iRet = 0 , iDel = 0 ;

    BinarySearchTree bst ;

    bst.insert(10);
    bst.insert(20);
    bst.insert(50);
    bst.insert(60);
    bst.insert(1000);
    bst.insert(111);
    bst.insert(99);
    bst.insert(80);

    bst.display(1);
    cout<<"\n";

    iRet = bst.countNode(); cout<<"Total nodes in BST are : "<<iRet<<"\n";
    cout<<"\n"; cout<<"\n";

    iDel = bst.deleteNode(bst.root,10); cout<<"Deleted element is : "<<iDel<<"\n";

    bst.display(1);
    cout<<"\n";

    iRet = bst.countNode(); cout<<"Total nodes in BST are : "<<iRet<<"\n";

    return 0;
}
