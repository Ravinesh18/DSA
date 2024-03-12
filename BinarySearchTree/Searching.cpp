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

bool searching(Node* root , int target){
    if (root==NULL)
    {
        return false;
    }
    
    if (root->data==target)
    {
     return true;
    }
    if (root->data>target)
    {
     return searching(root->left , target);
    }
    else{
        return searching(root->right , target);
    } 
}

int main()
{
    Node *root = NULL;
    cout<<"Enter the data : "<<endl;
    takeInput(root);

    cout<<searching(root , 17);

    return 0;
}
