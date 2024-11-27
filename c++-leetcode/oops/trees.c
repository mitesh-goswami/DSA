#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};
struct Node *insertNode(int val)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insert(struct Node *root, int val)
{
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->data = val;
        root->left = NULL;
        root->right = NULL;
        printf("inside insert %d\n", root->data);
        return;
        // root = temp;
    }
    else if (root->data < val)
    {
        insert(root->right, val);
    }
    else
    {
        insert(root->left, val);
    }
}
void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
}

int main()
{
    struct Node *root = NULL;
    // insert(root, 10);
    // printf("%d\n", root->data);
    // insert(root, 9);
    // insert(root, 12);
    root = insertNode(10);
    root->left = insertNode(9);
    root->right = insertNode(12);
    inorder(root);
}