#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createTree(struct Node *root, int data)
{
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (root->data >= data)
    {
        root->left = createTree(root->left, data);
    }
    else
    {
        root->right = createTree(root->right, data);
    }
    return root;
}

void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("data: %d\n", root->data);
    inorder(root->right);
}

int main()
{
    struct Node *root = NULL;
    root = createTree(root, 9);
    root = createTree(root, 8);
    root = createTree(root, 10);
    root = createTree(root, 7);
    root = createTree(root, 11);
    root = createTree(root, 12);
    inorder(root);
    return 0;
}