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
void LevelOrderTraversal(Node *root)
{
    
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
 while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
        if (!q.empty())
        {
            q.push(NULL);
        }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
Node* InsertiontoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (root->data > data)
    {
        root->left = InsertiontoBST(root->left, data);
    }
    else
    {
        root->right = InsertiontoBST(root->right, data);
    }

    return root;
}
void PreOrder(Node* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
    
}
void PostOrder(Node* root){
    if (root==NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
    
}
void InOrder(Node* root){
    if (root==NULL)
    {
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    IneOrder(root->right);
    
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = InsertiontoBST(root, data);
        cin >> data;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter the data for the Node : "<<endl;
    takeInput(root);
    cout<<"Printing Level Order Traversal : "<<endl;
    // LevelOrderTraversal(root);
    PreOrder(root);

    return 0;
}