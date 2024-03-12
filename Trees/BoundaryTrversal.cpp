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
        left = NULL;
        right = NULL;
    }
};
Node *BuildTree()
{
    int data;
    cout << "Enter the data " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter the data for left of " << data << endl;
    root->left = BuildTree();
    cout << "Eneter the data for left of " << data << endl;
    root->right = BuildTree();

    return root;
}
void leftNode(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    cout << root->data << " ";
    if (root->left)
    {
    leftNode(root->left);
    }
    else{
    leftNode(root->right);
    }
}
void leafNode(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    leafNode(root->left);
    leafNode(root->right);
}
void rightNode(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    if (root->right)
    {
    rightNode(root->right);
    }
    else{
    rightNode(root->left);
    }
    cout << root->data << " ";
}
void BoundaryTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    leftNode(root->left);
    leafNode(root);
    rightNode(root->right);
}

int main()
{
    Node *root = NULL;
    root = BuildTree();
    BoundaryTraversal(root);
    return 0;
}