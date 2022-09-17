/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *p=node;
    while(node->next)
    {
        node->val = node->next->val;
        p=node;
        node=node->next;
    }
    p->next=NULL;
    return node;
}