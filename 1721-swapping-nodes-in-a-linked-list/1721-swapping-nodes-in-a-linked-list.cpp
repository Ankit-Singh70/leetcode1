class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* temp=head;
        
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        ListNode* p1=temp->next;
         ListNode* p2=head;
        
        while(p1){
            p1=p1->next;
            p2=p2->next;
        }
        swap(temp->val,p2->val);
        return head;
    }
};