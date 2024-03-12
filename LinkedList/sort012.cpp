#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode()
    {
        this->data = 0;
        this->next = NULL;
    }
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(ListNode *head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
ListNode* sortll(ListNode *head)
{
    if (!head || !head->next)
    {
        return head;
    }
    


    ListNode *temp = head;
    ListNode *zerohead = new ListNode(-1);
    ListNode *onehead = new ListNode(-1);
    ListNode *twohead = new ListNode(-1);

    ListNode *zero = zerohead;
    ListNode *one = onehead;
    ListNode *two = twohead;
    while (temp != NULL)
    {
        //012

        if (temp->data == 0)
        {
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->data==1)
        {
            one->next = temp;
            one = one->next;
        }
        else 
        {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
       
    }
    zero->next = (onehead->next) ? onehead->next : twohead->next;
    one->next = twohead->next;
    two->next = NULL ;

    ListNode* newhead = zerohead->next;

    delete onehead;
    delete twohead;
    delete zerohead;

    return newhead;
}
void insertAtTai(ListNode *&head, ListNode *&tail, int data)
{
    if (head == NULL)
    {
        ListNode *newnode = new ListNode(data);
        head = newnode;
        tail = newnode;
        return;
    }
    ListNode *newnode = new ListNode(data);
    tail->next = newnode;
    tail = newnode;
}
int main()
{

    ListNode *head = NULL;
    ListNode *tail = NULL;
    insertAtTai(head, tail, 1);
    insertAtTai(head, tail, 2);
    insertAtTai(head, tail, 2);
    insertAtTai(head, tail, 0);
    insertAtTai(head, tail, 1);
    insertAtTai(head, tail, 0);
    insertAtTai(head, tail, 0);
    insertAtTai(head, tail, 2);
    insertAtTai(head, tail, 2);
    insertAtTai(head, tail, 1);
    cout<<"Before Sorting : ";
    print(head);
    cout<<endl;
    head = sortll(head);
    cout<<"After Sorting : ";
    print(head);
    return 0;
}