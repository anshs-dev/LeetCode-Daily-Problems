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
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode*temp=head,*prev=head;
        if(head==NULL){
            return head;
        }
                temp=temp->next;
        while(temp!=NULL){
        if(head->val==val){
        head=head->next;
        prev=head;
        temp=temp->next;
        }
        else if(temp->val==val){
            prev->next=temp->next;
            temp=temp->next;
        }
        else{
            temp=temp->next;
            prev=prev->next;
        }
        }
        if(head->val==val)
        return NULL;
       return head;
    }
};