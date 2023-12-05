#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
{
    struct node* node = (struct node*)
    malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
void printPostorder(struct node* node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);// first recur on left subtree
    printPostorder(node->right); // then recur on right subtree
    printf("%d ", node->data); // now deal with the node
}
void printInorder(struct node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left); /* first recur on left child */
    printf("%d ", node->data); /* then print the data of node */
    printInorder(node->right); /* now recur on right child */
}
void printPreorder(struct node* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data); /* first print data of node */
    printPreorder(node->left); /* then recur on left sutree */
    printPreorder(node->right); /* now recur on right subtree */
}
int main()
{
    struct node *root = newNode(11);
    root->left = newNode(8);
    root->right = newNode(17);
    root->left->left = newNode(6);
    root->left->right = newNode(10);
    root->right->left = newNode(14);
    root->right->right = newNode(21);
    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);
    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);
    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);
    printf("\n______________________________________________________\n");
        printf("Smaran Rawal\n");
        printf("______________________________________________________\n");
    return 0;
}
