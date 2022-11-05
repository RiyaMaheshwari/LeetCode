/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    ListNode* p=node->next;
        node->val=p->val;
        node->next=p->next;
        p=NULL;
        delete(p);
}
};
