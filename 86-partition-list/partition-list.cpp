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
    ListNode* partition(ListNode* head, int x) {
        ListNode *current=head;
        ListNode* low= new ListNode(0);
        ListNode* head1=low;
        ListNode* greater=new ListNode(0);
        ListNode* head2=greater;
        while(current!=NULL){
            if(current->val<x){
                head1->next= new ListNode(current->val);
                head1=head1->next;
            }
            else{
                head2->next=new ListNode(current->val);
                head2=head2->next;
            }
            current=current->next;
        }
        head1->next=greater->next;
        return low->next;
    }
};