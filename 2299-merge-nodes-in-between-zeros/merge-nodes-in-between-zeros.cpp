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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp,*mid;
        mid=head->next;
        temp=mid->next;
        head=head->next;
        while(temp->next!=NULL){
            if(temp->val==0){
                mid->next=temp->next;
                mid=temp->next;
                temp=mid->next;
            }
            else{
                mid->val=mid->val+temp->val;
                temp=temp->next;
            }
        }
        mid->next=NULL;
        return head;
    }
};