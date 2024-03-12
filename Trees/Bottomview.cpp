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
void BottomView(Node* root){
    if (root==NULL)
    {
        return; 
    }
    map<int , int>topNode;

    queue<pair<Node*,int>>q;
    q.push(make_pair(root ,0));

    while (!q.empty())
    {
        pair<Node* , int > temp = q.front();
        q.pop();
        
        Node* frontnode = temp.first;
        int hd = temp.second;

        
            topNode[hd]= frontnode->data;
            
        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left ,hd-1));
        }
        
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right ,hd+1));
        }
        
        
    }

    cout<<"Printing the TopNodes : "<<endl;
    for (auto i : topNode)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }

}

int main(){
    Node* root = NULL;
    root = BuildTree();
    BottomView(root);
    return 0;
}