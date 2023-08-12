struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *ret = malloc(sizeof(struct ListNode));
    struct ListNode *curr = ret;
    if (list1 == NULL) {
        return list2;
    } else if (list2 == NULL) {
        return list1;
    }
    struct ListNode *l1 = list1;
    struct ListNode *l2 = list2;
    while (l1 && l2) {
        if (l1->val <= l2->val) {
            curr->val = l1->val;
            l1 = l1->next;
        } else {
            curr->val = l2->val;
            l2 = l2->next;
        }
        if (l1 && l2) {
            curr->next = malloc(sizeof(struct ListNode));
            curr = curr->next;
        } else {
            break;
        }
    }
    if (l1) {
        curr->next = l1;
    } else if (l2) {
        curr->next = l2;
    } else {
        curr->next = NULL;
    }

    return ret;
}
