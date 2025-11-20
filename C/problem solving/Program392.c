/*
    <--------------------------------------------------------------BST (Binary Search Tree)------------------------------------------------------------------------->
*/>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data ;
    struct node *rChild ;
    struct node *lChild ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void Insert(PPNODE root , int no)
{
    PNODE newn = NULL ;
    PNODE temp = NULL ;

    newn = (PNODE)malloc(sizeof(NODE)) ;

    newn->data = no ;
    newn->rChild = NULL ;
    newn->lChild = NULL ;

    if(*root == NULL)                           // tree contain only one node
    {
        *root = newn ;
    }
    else                                        // tree contain more than one node
    {
        temp = *root ;

        while(1)                               // Unconditional Loop
        {
            if(no > temp->data)                // data is greater
            {
                if(temp->rChild == NULL)
                {
                    temp->rChild = newn ;
                    break ;
                }
                temp = temp->rChild ;
            }

            else if(no < temp->data)            // data is smaller
            {
                if(temp->lChild == NULL)
                {
                    temp->lChild = newn ;
                    break ;
                }
                temp = temp->lChild ;
            }
            
            else if(no == temp->data)           // data is duplicate
            {
                printf("data is duplicate , unable to insert !!\n");
                free(newn);
                break ;
            }
        }
    }
}

void Inorder(PNODE root)                    // Display the tree : Inorder
{
    if(root != NULL)
    {
        Inorder(root->lChild);
        printf("%d\n",root->data);
        Inorder(root->rChild);
    }
}

void Preorder(PNODE root)               // Display the tree : Preorder
{
    if(root != NULL)
    {
        printf("%d\n",root->data);
        Preorder(root->lChild);
        Preorder(root->rChild);
    }
}

void Postorder(PNODE root)              // Display the tree : Postoder
{
    if(root != NULL)
    {
        Preorder(root->lChild);
        Preorder(root->rChild);
        printf("%d\n",root->data);
    }
}

bool search(PNODE root , int no)            // Search the element is present or not 
{
    bool bFlag = false ;

    while(root != NULL)
    {
        if(no == root->data)
        {
            bFlag = true ;
            return bFlag ;
        }

        else if(no > root->data)
        {
            root = root->rChild ;
        }

        else if(no < root->data)
        {
            root = root->lChild ;
        }
    }
    return bFlag ;
}

int CountNodes(PNODE root)
{
    static int iCount = 0 ;

    if(root != NULL)
    {
        iCount++ ;
        CountNodes(root->lChild);
        CountNodes(root->rChild);
    }

    return iCount ;
}

int CountParentNode(PNODE root)
{
    static int iCount = 0 ;

    if(root != NULL)
    {
        if((root->lChild != NULL) || (root->rChild != NULL))
        {
            iCount++ ;
        }
        CountParentNode(root->lChild);
        CountParentNode(root->rChild);
    }

    return iCount ;
}

int CountLeafNode(PNODE root)
{
    static int iCount = 0 ;

    if(root != NULL)
    {
        if((root->lChild == NULL) && (root->rChild == NULL))
        {
            iCount++ ;
        }
        CountLeafNode(root->lChild);
        CountLeafNode(root->rChild);
    }

    return iCount ;
}

int main()
{
    PNODE first = NULL ;

    bool bRet = false ;

    int iRetCountNodes = 0 , iRetCountParentNode = 0  , iRetCountLeafNode = 0 ;

    Insert(&first,11);
    Insert(&first,21);
    Insert(&first,9);
    Insert(&first,18);
    Insert(&first,35);
    Insert(&first,45);
    Insert(&first,51);
    Insert(&first,75);

    iRetCountNodes = CountNodes(first);
    printf("Total nodes in Tree are : %d\n",iRetCountNodes);

    iRetCountParentNode = CountParentNode(first);
    printf("Total parent nodes in Tree are %d\n",iRetCountParentNode);

    iRetCountLeafNode = CountLeafNode(first);
    printf("Total leaf nodes in Tree are %d\n",iRetCountLeafNode);
    
    printf("Display the tree in Inorder way : \n");
    Inorder(first);

    bRet = search(first,9);

    return 0 ;
}

/*
    OUTPUT

    Total nodes in Tree are : 8
    Total parent nodes in Tree are 5
    Total leaf nodes in Tree are 3
    Display the tree in Inorder way :
    9
    11
    18
    21
    35
    45
    51
    75
*/