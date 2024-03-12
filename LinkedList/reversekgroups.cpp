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
int findlength(Node *head)
{
    Node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

Node *reversekgroups(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "Empty !";
        return head;
    }
    int l = findlength(head);
    if (k>l)
    {
        return head;
    }
    
    Node* pre = NULL;
    Node* cur = head;
    Node* forward = cur->next;
    int c = 0;
    while (c<k)
    {
        forward = cur->next;
        cur->next = pre;
        pre = cur;
        cur = forward;
        c++;
    }
    if (forward!=NULL)
    {
        head->next = reversekgroups(forward , k);
    }
    
   return pre ; 
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertatTail(head, tail, 10);
    insertatTail(head, tail, 20);
    insertatTail(head, tail, 30);
    insertatTail(head, tail, 40);
    insertatTail(head, tail, 50);
    insertatTail(head, tail, 60);
    print(head);
    cout<<endl;
    cout<<"After Reversing of k groups : ";
    head = reversekgroups(head , 4);
    print(head);
}