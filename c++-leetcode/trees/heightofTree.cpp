#include <bits/stdc++.h>
#include "BinaryTreeCreation.cpp"
using namespace std;
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lH = height(root->left);
    int rH = height(root->right);
    int ans = max(lH, rH) + 1;
    return ans;
}
int diameter(Node *root, int &dia)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = diameter(root->left, dia);
    int rh = diameter(root->right, dia);
    dia = max(lh + rh, dia); // this dia is the diameter
    int ans = max(lh, rh) + 1;
    return ans;
}

// int main(){
//     Node* node = new Node();

// }
