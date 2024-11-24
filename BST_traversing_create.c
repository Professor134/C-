#include <stdlib.h>
struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
};
typedef struct BST NODE;
NODE *root  ;

NODE* insert(NODE *node, int val)
{
    if (node == NULL)
    {
        NODE *temp;
        temp= (NODE*)malloc(sizeof(NODE));
        temp->data = val;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (val < (node->data))
        {
            node->left = insert(node->left, val);
            return node;
        }
    else if (val > (node->data)) 
        {
            node -> right = insert(node->right, val);
            return node;
        }
    
}

void createtree()
{
    int size, val, i;
    
    printf("\nEnter N value: " );
    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        printf("\nEnter the values to create BST =");
        scanf("%d", &val);
        root = insert(root, val);
    }
}

void inorder(NODE *node)
{
    if(node != NULL)
    {
        inorder(node->left);
        printf("->%d", node->data);
        inorder(node->right);
    }
}

void preorder(NODE *node)
{
    if(node != NULL)
    {
        printf("->%d", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

void postorder(NODE *node)
{
    if(node != NULL)
    {
        postorder(node->left);
        postorder(node->right);
        printf("->%d", node->data);
    }
}

void main()
{
    createtree();
    printf("\n inorder==");
    inorder(root);
    printf("\n postorder==");
    postorder(root);
    printf("\n preorder==");
    preorder(root);
} 