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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*>m;
        int curr=0;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        m[0]=dummy;
        while(temp){
            if(temp->val==0){
                m[curr]->next=temp->next;
                temp=temp->next;
                continue;
            }
            curr+=temp->val;
            if(m.count(curr)){ 
                int tsum=curr+m[curr]->next->val;
                ListNode* t=m[tsum];
                while(t!=temp){
                    m.erase(tsum);
                    t=t->next;
                    tsum+=t->val;
                }
                m[curr]->next=temp->next;
            }
            else m[curr]=temp;
            temp=temp->next;
        }
        return dummy->next;
    }
};