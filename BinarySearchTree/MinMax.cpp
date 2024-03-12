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
Node* InserationBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (root->data > data)
    {
        root->left = InserationBST(root->left, data);
    }
    else
    {
        root->right = InserationBST(root->right, data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = InserationBST(root, data);
        cin >> data;
    }
}
int minNode(Node* root){
    Node* temp = root;
    if (temp==NULL)
    {
        return -1;
    }
    while (temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp->data;
    
}
int maxNode(Node* root){
    Node* temp = root;
    if (temp==NULL)
    {
        return -1;
    }
    while (temp->right!=NULL)
    {
        temp = temp->right;
    }
    return temp->data;
    
}
int main(){
    Node* root  = NULL;
    takeInput(root);
    cout<<minNode(root)<<endl;
    cout<<maxNode(root)<<endl;

    return 0;
}