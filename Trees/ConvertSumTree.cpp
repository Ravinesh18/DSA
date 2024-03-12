#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data= data;
        left = NULL;
        right = NULL;
    }
};
Node* BuildTree(){
    int data;
    cout<<"Enter the data : ";
    cin>>data;
    
    if(data==-1)
    return NULL;

    Node* root = new Node(data);
    cout<<"Enter the data for left part of : "<<data<<endl;
    root->left = BuildTree();
    cout<<"Enter the data for right part of : "<<data<<endl;
    root->right = BuildTree();

    return root;

}
int ConvertSumTree(Node* root){
    if (root==NULL)
    {
        return 0;
    }

    int leftans = ConvertSumTree(root->left);
    int rightans = ConvertSumTree(root->right);

    root->data = leftans + root->data + rightans;

    return root->data;
    
}
int main()
{
    Node* root = NULL;
    root = BuildTree();

    int ans = ConvertSumTree(root);
    cout<<ans<<endl;

    return 0;
}

// Least Common Ancestor
// Kth ancestor