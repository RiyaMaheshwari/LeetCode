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
    
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return;
        ListNode *mid=middle(head);
        ListNode *l1=head;
        ListNode *l2=mid->next;
        mid->next=NULL;
        l2=reverseList(l2);
        
        while(l2!=NULL){
            ListNode *f1=l1->next;
            ListNode *f2=l2->next;
            l1->next = l2;
            l2->next = f1;
            l1=f1;
            l2=f2;
            
        }
    }
};