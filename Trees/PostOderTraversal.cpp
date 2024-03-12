#include<bits/stdc++.h>
using namespace std;
class Node{
    public : 
    int data;
    Node* left ;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;

    }
};
Node* BuildTree(){
    int data;
    cout<<"Enter the data :"<<endl;
    cin>>data;

    if (data==-1)
    {
        return NULL;
    }
    Node* root = new Node(data);
    cout<<"Enter the data for the left part of "<<data<<endl;
    root->left = BuildTree();
    cout<<"Enter the data for the right part of "<<data<<endl;
    root->right = BuildTree();

    return root;
    
}
void PostOrderTraversal(Node* root){
    //Left->Right->Current
    if (root==NULL)
    {
        return ;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";

}
int main(){

Node* root = NULL;
root = BuildTree();

PostOrderTraversal(root);
    return 0;
}