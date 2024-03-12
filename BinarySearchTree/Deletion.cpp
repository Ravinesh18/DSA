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
Node* deleteNode(Node* root , int target){
    if (root==NULL)
    {
        return NULL;
    }

    if (root->data==target)
    {
        if (root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left!=NULL && root->right==NULL)
        {
            Node* child = root->left;
            delete root;
            return child;
        }
        else if (root->left==NULL && root->right!=NULL)
        {
            Node* child = root->right;
            delete root;
            return child;
        }
        else{
            int prede = maxNode(root->left);
            root->data = prede;
            root->left = deleteNode(root->left , prede);
            return root;

        }
    }
        else if (root->data > target)
        {
            root->left = deleteNode(root->left , target);
        }
        else
        {
            root->right = deleteNode(root->right , target);
        }
        

        return root;    
    
}

int main(){
    Node* root = NULL;
    takeInput(root);
    LevelOrderTraversal(root);
    
    deleteNode(root , 100);

    LevelOrderTraversal(root);

    return 0;
}