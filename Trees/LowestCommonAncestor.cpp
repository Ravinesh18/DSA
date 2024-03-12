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
Node* LCA(Node* root , Node* p ,Node* q){
    if (root==NULL)
    {
        return NULL;
    }
    if (root->data==p->data)
    {
        return p;
    }
    
    if (root->data==q->data)
    {
        return q;
    }

    Node* leftans = LCA(root->left , p ,q);
    Node* righttans = LCA(root->right , p ,q);

    if (leftans==NULL && righttans==NULL)
    {
        return NULL;
    }
    else if (leftans!=NULL && righttans==NULL)
    {
        return leftans;
    }
    else if (leftans==NULL && righttans!=NULL)
    {
        return righttans;
    }
    else
    return root;
    
}
int main(){
    Node* root = NULL;
    root = BuildTree();
    Node* p ;
    Node* q ;

    Node* ans = LCA(root , p ,q);


    return 0;
}