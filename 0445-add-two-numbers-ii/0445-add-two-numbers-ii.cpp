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
    ListNode* reverse(ListNode *head){
        ListNode *p, *q, *r;
        p=head;
        q=NULL;
        r=NULL;
        while(p!=NULL){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==0)return l2;
        if(l2==0)return l1;
        
        ListNode*h1=reverse(l1);
        ListNode*h2=reverse(l2);
        ListNode *dummy=new ListNode(0);
        ListNode *temp=dummy;
        
        int carry=0;
        while(h1 ||h2 || carry){
            int sum=0;
            if(h1!=NULL)
            {
                sum=sum+h1->val;
                h1=h1->next;
            }
            if(h2!=NULL)
            {
                sum=sum+h2->val;
                h2=h2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            ListNode *newhead=new ListNode(sum%10);
            temp->next=newhead;
            temp=temp->next;
        }
        ListNode*ans=reverse(dummy->next);
           return ans;
    }
};