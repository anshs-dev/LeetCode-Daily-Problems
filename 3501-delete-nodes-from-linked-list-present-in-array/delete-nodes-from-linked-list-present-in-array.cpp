class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0, head);
        ListNode* current = dummy;
        while(current->next!=nullptr){
            if(s.find(current->next->val)!=s.end()) {
                current->next=current->next->next;
            }else{
                current=current->next;
            }
        }
        return dummy->next;
    }
};
