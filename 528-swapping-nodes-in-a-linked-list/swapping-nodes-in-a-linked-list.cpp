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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *first=head,*last=head;
        int count=1;
        while(last->next!=NULL){
        last=last->next;
        count++;
        }
        int i=1;
        while(i++<k){
            first=first->next;
        }
        i=1;
        last=head;
        while(i++<=count-k){
        last=last->next;
        }
        int temp=first->val;
        first->val=last->val;
        last->val=temp;
        return head;
    }
};