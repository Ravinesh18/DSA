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
Node *reverseusingLOOP(ListNode *head)
{
    Node *pre = NULL;
    Node *cur = head;
    while (cur != NULL)
    {
       Node *temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}

    Node* addTwoNumbers(Node* l1, Node* l2) {
        l2 = reverseusingLOOP(l2);
        l1 = reverseusingLOOP(l1);
        int sum = 0;
       Node* temp = new Node() ;
        while(l2!=NULL || l1!=NULL){
             sum = l2->val+l1->val;
            if(sum<=9){
                temp->val = sum;
            }
            else{
                temp->val = sum-10;
                temp->next->val += sum-temp->val; 
            }
            l2 = l2->next;
            l1= l1->next;
            temp=temp->next;
        }
        temp =  reverseusingLOOP(temp);
        return temp;
    }
    int main()
{
    Node *head = NULL;
     return 0;
}
