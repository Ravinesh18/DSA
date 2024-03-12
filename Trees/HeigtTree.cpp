#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node* BuildTree(){
    int data;
    cout<<"Enter data"<<endl;;
    cin>>data;

    if (data==-1)
    {
        return NULL;
    }
    Node* root = new Node(data);
    cout<<"Enter data for the left of "<<data<<endl;
    root->left = BuildTree();
    
    cout<<"Enter data for the Right of "<<data<<endl;
    root->right = BuildTree();
    


    return root;
}
int Hieght(Node* root){
    if (root==NULL)
    {
        return 0;
    }

    int leftans = Hieght(root->left);
    int rightans = Hieght(root->right);

    int ans = max(leftans,rightans)+1;
    
    return ans;
}
int main(){
    Node* root = NULL;
    root = BuildTree();

    int ans  = Hieght(root);
    cout<<"Height of Tree :  "<<ans<<endl;

    return 0;
}
