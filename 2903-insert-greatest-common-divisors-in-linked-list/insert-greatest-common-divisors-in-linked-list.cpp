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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL)
        return head;
        ListNode* temp=head,*prev=head;
        temp=temp->next;
        while(temp!=NULL){
            int val1=prev->val,val2=temp->val;
            ListNode* dummy=new ListNode(gcd(val1,val2));
            dummy->next=temp;
            prev->next=dummy;
            prev=prev->next;
            prev=prev->next;
            temp=temp->next;
        }
        return head;
    }
};