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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* p=head;
        ListNode* q=NULL;
        while(p!=NULL)
        {
            c++;
            p=p->next;
        }
        p=head;
        if(head->next==NULL)
           return NULL;
        if(c==n){
            head=head->next;
            return head;
        }
        else{
            for(int i=0; i<c-n; i++){
            q=p;
            p=p->next;
            }
        }
        q->next=p->next;
        int x=p->val;
        delete(p);
        return head;
    }
};