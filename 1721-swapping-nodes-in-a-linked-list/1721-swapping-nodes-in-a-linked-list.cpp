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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p=head;
        int c=0;
        while(p!=NULL){
            c++;
            p=p->next;
        }
        p=head;
        for(int i=1; i<k; i++)
        {
            p=p->next;
        }
        ListNode *q=head;
        for(int i=1; i<c-k+1; i++){
            q=q->next;
        }
        int r;
        r=p->val;
        p->val=q->val;
        q->val=r;
        return head;
    }
};