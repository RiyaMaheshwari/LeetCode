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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        while(head!=NULL && head->val==val){
            head = head->next;
        }
        
        ListNode* p = head;
        ListNode* q = NULL;
 
        while(p!=NULL){
            if(p->val==val){
                q->next = p->next;
                p = p->next;
            }
            else{
                q = p;
                p = p->next;        
            }
        }
        return head;
    }
};