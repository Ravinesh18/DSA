#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertatTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

// Node *reverseusingLOOP(Node *head)
// {
//     Node *pre = NULL;
//     Node *cur = head;
//     while (cur != NULL)
//     {
//         Node *temp = cur->next;
//         cur->next = pre;
//         pre = cur;
//         cur = temp;
//     }
//     return pre;
// }

Node *reverseusingRecursion(Node *cur, Node *pre)
{

    if (cur == NULL)
        return pre;

    Node *temp = cur->next;
    cur->next = pre;
    pre = cur;
    cur = temp;

    return reverseusingRecursion(cur, pre);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertatTail(head, tail, 10);
    insertatTail(head, tail, 20);
    insertatTail(head, tail, 30);
    insertatTail(head, tail, 40);
    cout << "Before Reverse : ";
    print(head);
    cout << endl;
    Node *pre = NULL;
    Node *cur = head;
    head = reverseusingRecursion(cur, pre);
    cout << "After Reverse : ";
    print(head);
    return 0;
}