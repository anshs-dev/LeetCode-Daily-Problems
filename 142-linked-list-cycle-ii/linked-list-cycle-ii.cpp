/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>v;
        ListNode* temp=head;
        int index=0;
        while(temp!=NULL){
            if(v.find(temp)!=v.end()){
                return temp;
            }
            v[temp]=index;
            index++;
            temp=temp->next;
        }
        return temp;

    }
};