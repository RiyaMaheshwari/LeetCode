/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p=head;
        ListNode* q=NULL;
        ListNode* r=NULL;
        while(p!=NULL)
        {
           r=q;
           q=p;
           p=p->next;
           q->next=r;
        }
        head=q;
        return head;
    }
    ListNode* middle(ListNode* head)
    {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
       if(head==NULL)
           return true;
    
        ListNode *mid=middle(head);
        ListNode *last=reverseList(mid);
        ListNode *curr=head;
        
        while(last!=NULL){
            if(last->val!=curr->val)
                return false;
            last=last->next;
            curr=curr->next;
        }
        return true;
    }
};