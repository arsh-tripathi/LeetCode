/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *ret = malloc(sizeof(struct ListNode));
    if (!head) {
        free(ret);
        return head;
    }
    ret->val = head->val;
    struct ListNode *curr = head->next;
    struct ListNode *cur2 = ret;
    while (curr) {
        if (curr->val != cur2->val) {
            cur2->next = malloc(sizeof(struct ListNode));
            cur2 = cur2->next;
            cur2->val = curr->val; 
        }
        curr = curr->next;
    }
    cur2->next = NULL;
    return ret;
}
