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
    cout<<"Enter the data "<<endl;
    cin>>data;
    if (data==-1)
    {
        return NULL;
    }

    Node* root = new Node(data);
    
    cout<<"Enter the data for left of "<<data<<endl;
    root->left = BuildTree();
    cout<<"Eneter the data for left of "<<data<<endl;
    root->right = BuildTree();

    return root;
    
}
void LeftView(Node* root , vector<int>&ans , int level){
    if (root==NULL)
    {
        return; 
    }
    if (level==ans.size())
    {
        ans.push_back(root->data);
    }

    LeftView(root->left , ans , level+1);
    LeftView(root->right , ans , level+1);

}

int main(){
    Node* root = NULL;
    root = BuildTree();
    vector<int>ans;
    int level = 0;

    LeftView(root , ans , level);

    for (auto i : ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}