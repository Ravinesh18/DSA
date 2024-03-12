#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* BuildTree() {
    int data;
    cout << "Enter the data: ";
    cin >> data;
    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);
    
    cout << "Enter the data for the left of " << data << endl;
    root->left = BuildTree();
    cout << "Enter the data for the right of " << data << endl;
    root->right = BuildTree();

    return root;
}

void VerticalYTraversal(Node* root, int hd, map<int, pair<int, int>>& mp) {
    if (root == NULL) {
        return;
    }

    if (mp.find(hd) == mp.end() || mp[hd].second > root->data) {
        mp[hd] = {root->data, hd};
    }

    VerticalYTraversal(root->left, hd - 1, mp);
    VerticalYTraversal(root->right, hd + 1, mp);
}

int main() {
    Node* root = NULL;
    root = BuildTree();
    map<int, pair<int, int>> m;
    int hd = 0;
    VerticalYTraversal(root, hd, m);
    cout << "Printing the Top Nodes: " << endl;
    for (auto i = m.begin(); i != m.end(); i++) {
        cout << i->second.first << " ";
    }
    cout << endl;

    return 0;
}
