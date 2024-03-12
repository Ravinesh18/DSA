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

void deletenode(Node *&head,Node *&tail , int pos )
{
    if (head == NULL)
    {
        cout << "Empty !";
        return;
    }
    //when its the first postion 
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp = NULL;
        delete (temp);
    }

    //when postion lies at the last
    int l = findlength(head);
    if (pos == l)
    {
        Node *pre = head;
        int i = 1;
        while (i < l-1)
        {
            pre = pre->next;
            i++;
        }
        Node *temp = pre->next;
        pre->next = NULL;
        tail = pre;
        delete (temp);
    }


    //when position lies between 1st to last to node 
    if (pos > 1 && pos < l)
    {
        Node *pre = head;
        Node *curr;
        Node *temp;
        int i = 1;

        while (i < pos - 1)
        {
            pre = pre->next;
            i++;
        }
        curr = pre->next;

        temp = pre->next;
        pre->next = curr->next;
        temp = NULL ;
         delete (temp);
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertatTail(head, tail, 10);
    insertatTail(head, tail, 20);
    insertatTail(head, tail, 30);
    insertatTail(head, tail, 40);
    print(head);
    
   cout<<endl;
   
    deletenode(head , tail , 3);
    print(head);
    return 0;  
}