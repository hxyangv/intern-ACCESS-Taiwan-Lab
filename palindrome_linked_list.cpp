class Solution {
public:
    ListNode* getMid(ListNode* head){
        
        ListNode* slow = head;
        ListNode *fast = head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast) 
                fast=fast->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head){
        
        ListNode* tmp = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != NULL){
            tmp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=tmp;
        }
        return prev;
    }
    
    bool compare(ListNode* head1, ListNode* head2){
        
        while(head1 != NULL && head2 != NULL){
            if(head1->val != head2->val) 
                return false;
            head1=head1->next;
            head2=head2->next;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {

        ListNode* mid = getMid(head);
        ListNode* reverse_head = reverseList(mid);
        
        return compare(head,reverse_head);
    }
};
