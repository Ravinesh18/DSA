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
Node *sortedLLToBST(Node *&head , int n)
{
    if (n<=0 || head ==NULL)
    {
    return NULL;
    }
    Node* leftsubtree = sortedLLToBST(head , n-1-n/2);

    Node* root = head ;
    root->left = leftsubtree;

    head = head->right;


    root->right = sortedLLToBST(head, n/2);

    return root;
    

}
void BSTtoLL(Node *root, Node *&head)
{
    if (root == NULL)
    {
        return;
    }
    BSTtoLL(root->right, head);

    root->right = head;
    if (head != NULL)
    {
        head->left = root;
    }
    head = root;

    BSTtoLL(root->left, head);
}
void printLL(Node *head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
}
Node *BuildTree()
{
    int data;
    cout << "Enter the data :" << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data for the left part of " << data << endl;
    root->left = BuildTree();
    cout << "Enter the data for the right part of " << data << endl;
    root->right = BuildTree();

    return root;
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
int main()
{
    Node *root = NULL;
    Node *head = NULL;
    root = BuildTree();
    LevelOrderTraversal(root);
    cout << "Printing Linked List : " << endl;
    BSTtoLL(root, head);
    printLL(head);

    sortedLLToBST(head , 7);
    LevelOrderTraversal(head);

    return 0;
}