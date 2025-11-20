#include<stdio.h>
#include<stdlib.h>

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

int main()
{
    PNODE first = NULL ;

    Insert(&first,11);
    Insert(&first,21);
    Insert(&first,9);
    
    printf("Display the tree in Inorder way : \n");
    Inorder(first);

    printf("Display the tree in Preorder way : \n");
    Preorder(first);


    return 0 ;
}

/*
    OUTPUT

    Display the tree in Inorder way :
    9
    11
    21
    Display the tree in Preorder way :
    11
    9
    21
    
*/