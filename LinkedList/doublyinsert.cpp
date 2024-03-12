#include <bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node *pre;
    Node *next;

    Node(){
        this->data = 0;
        this->pre = NULL;
        this->next = NULL;
    }
    Node(int data){
       this->data = data;
       this->pre = NULL;
       this->next=NULL;
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
void insertathead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->pre = newNode;
    head = newNode;

}
void insertatTail(Node *&head, Node *&tail, int data){
 if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
     Node *newNode = new Node(data);
     newNode->pre = tail;
     tail->next = newNode;
     tail = newNode;

}
void insertatpos(Node *&head ,Node *&tail , int data , int pos){
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    int i = 1;
    Node *prev = head ;
    Node *curr ;
    while (i<pos-1)
    {
        prev = prev->next;
        i++;
        
    }
    curr = prev->next;
    

    Node *newNode = new Node(data);
    prev->next= newNode;
    newNode->next = curr;
    curr->pre = newNode;
    newNode->pre = prev;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    
    head = first;
    tail = third;
    first->next = second;
    second->next = third;

    second->pre = first;
    third->pre = second;

    print(first); 
    cout<<endl;
    insertathead(head , tail , 5);
    print(head);

    cout<<endl;
    insertatTail(head , tail , 35);
    print(head);
    
    cout<<endl;
    insertatpos(head , tail , 25 , 4);
    print(head);

}