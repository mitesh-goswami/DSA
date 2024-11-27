#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "enter data to be inserted" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    cout << "data to be inserted on left: " << data << endl;
    root->left = buildTree(root->left);
    cout << "data to be inserted on right: " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << endl;
}
vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> res;
    queue<Node *> q;
    if (root == NULL)
    {
        return res;
    }
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> row(size);
        while (size--)
        {
            Node *temp = q.front();
            q.pop();
            // res.push_back()
        }
    }
    return res;
}
// int main()
// {
//     Node *root = NULL;
//     root = buildTree(root);
// }
