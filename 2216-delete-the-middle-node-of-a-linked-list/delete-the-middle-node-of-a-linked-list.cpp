class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        int len = 0;
        ListNode* count = head;
        while (count != nullptr) {
            count = count->next;
            len++;
        }
        int mid = len / 2;
        count = head;
        while (mid-- > 1) {
            count = count->next;
        }
        count->next = count->next->next;
        return head;
    }
};
