int findlength(ListNode* head){
    ListNode* temp = head;
    int i =1;
    while(temp!=NULL){
        temp = temp->next;
        i++;
    }
    return i;
}
    bool isPalindrome(ListNode* head) {
        int l = findlength(head);
        int m = l/2;
        ListNode* temp = head;
        int i = 1;
        while(i<m+1){
          temp = temp->next;
          i++;
        }
        int j  = 1;
        int k = 1;
        ListNode* temp1 =head;
        while(i<l && j<m){
            if(temp1->val == temp->val){
                k = 1;
            }
            else{
                k = -1;
                break;
            }
                temp =temp->next;
                temp1 =temp1->next;
                i++;
                j++;

        }
        if(k==1)
        return true;
        else
        return false;
    }

    int main(){

    }