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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p=headA;
        ListNode *q=headB;
        // 1st method
        /*int c1=0, c2=0;
        while(p!=NULL)
        {
            c1++;
            p=p->next;
        }
        p=headA;
        while(q!=NULL)
        {
            c2++;
            q=q->next;
        }
        q=headB;
        int diff;
        int i=0;
        if(c1>c2){
           diff=c1-c2;
           while(i<diff){
               p=p->next;
               i++;
           }
            while(p!=q)
            {
                p=p->next;
                q=q->next;
            }
            return p;
        }
        else{
            diff=c2-c1;
           while(i<diff){
               q=q->next;
               i++;
           }
            while(p!=q)
            {
                p=p->next;
                q=q->next;
            }
            return p;
        }
        return NULL;*/
        if(headA==NULL || headB==NULL)
            return NULL;
        while(p!=q){
            if(p==NULL)
                p=headB;
            else
                p=p->next;
            
            if(q==NULL)
                q=headA;
            else
                q=q->next;
        }
        return p;
    }
};