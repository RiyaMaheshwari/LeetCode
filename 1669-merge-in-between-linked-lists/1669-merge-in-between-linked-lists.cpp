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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *p,*q,*r;
        p=list1;
        q=list1;
        r=list2;
         for(int i=0; i<a-1; i++)
                 p=p->next;
         for(int i=0; i<b; i++)
                 q=q->next;
         while(r->next)
         {
                 r=r->next;
         }
         p->next=list2;
         r->next=q->next;
         return list1;
    }
};