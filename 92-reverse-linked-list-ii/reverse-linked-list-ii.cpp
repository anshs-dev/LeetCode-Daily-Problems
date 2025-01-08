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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        vector<int>result;
        int i=1;
        while(i<left){
            temp=temp->next;
            i++;
        }
        while(i<=right){
            result.push_back(temp->val);
            cout<<temp->val<<" ";
            temp=temp->next;
            i++;
        }
        reverse(result.begin(),result.end());
        temp=head;
        i=1;
        while(i<left){
            temp=temp->next;
            i++;
        }
        int j=0;
        while(i<=right){
            temp->val=result[j];
            j++;
            i++;
            temp=temp->next;
        }
        return head;
    }
};