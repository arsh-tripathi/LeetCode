// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
   public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* result = new ListNode;
		ListNode* head = result;
		int carry = 0;
		while (l1 || l2 || carry != 0) {
			int result = carry;
			if (l1) result += l1->val;
			if (l2) result += l2->val;
			carry = result / 10;
			ListNode* next = new ListNode(result % 10);
			head->next = next;
			if (l1) l1 = l1->next;
			if (l2) l2 = l2->next;
			head = next;
		}
		return result->next;
	}
};
