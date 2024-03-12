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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deletion(int pos ,Node *&head,Node *&tail  ){
 if (head == NULL)
    {
        cout << "Empty !";
        return;
    }
    if (pos==1)
    {
       Node* temp = head ;
       head = head->next;
       temp = NULL;
       head->pre = NULL;
       delete (temp);

    }
    int l = findlength(head);
    if(pos==l)
    {
        Node *temp = tail ;
        tail = tail->pre ;
        tail->next = NULL;
        temp = NULL;
        delete(temp);
    }
    if(pos>1 && pos<l){
        Node* left =head ;
        Node* right ;
        Node* temp ;
        int i = 1 ;
        while (i<pos-1)
        {
            left = left->next;
            i++;
        }
        temp = left->next;
        right = left->next->next;

        left->next = right ;
        right->pre = left;
        temp = NULL;
        delete(temp);
        
    }
    
    
   
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

    print(head);
    deletion(2,head,tail);
    cout<<endl;
    print(head);
}