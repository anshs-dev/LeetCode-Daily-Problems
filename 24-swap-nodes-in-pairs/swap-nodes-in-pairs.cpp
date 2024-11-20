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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
        return head;
        ListNode *temp,*temp2;
        temp=head->next;
        temp2=head;
        while(temp!=NULL){
            int tempu=temp2->val;
            temp2->val=temp->val;
            temp->val=tempu;
            if(temp->next==NULL || temp->next->next==NULL){
                return head;
            }
            temp=temp->next->next;
            temp2=temp2->next->next;
        }
        return head;
    }
};