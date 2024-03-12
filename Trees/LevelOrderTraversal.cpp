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
    root = BuildTree();

    LevelOrderTraversal(root);
    return 0;
}