/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p=head;
        ListNode *q=head;
        bool detectCycle=0;
        while(p && p->next)
        {
            p=p->next->next;
            q=q->next;
            if(p==q)
            {
                detectCycle=1;
                break;
            }
        }
        if(detectCycle==0)
        return NULL;
        q=head;
        while(p!=q)
            {
                p=p->next;
                q=q->next;
            }
        return q;
    }
};