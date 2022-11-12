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
    ListNode* reverse(ListNode* head){
        ListNode *p, *q, *r;
        p=head;
        q=NULL;
        r=NULL;
        
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *curr=head;
        ListNode *prev=NULL;
        int c=1;
        while(c!=left){
            prev=curr;
            curr=curr->next;
            c++;
        }
        ListNode *start=curr;
        while(c!=right){
            curr=curr->next;
            c++;
        }
        ListNode *rest=curr->next;
        curr->next=NULL;
        
        ListNode *newHead=reverse(start);
        if(prev!=NULL)
            prev->next=newHead;
        
        curr=newHead;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        
        curr->next=rest;
        if(left == 1)
            return newHead;
        else
            return head;
    }
};