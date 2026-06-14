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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int groupSize=1;
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        vector<ListNode*>result;
        if(len<=k){
            int groups=len;
            int empty=abs(len-k);
            temp=head;
            while(groups--){
                result.push_back(temp);
                ListNode* curr=temp;
                temp=temp->next;
                curr->next=nullptr;
            }
            while(empty>0){
                result.push_back(nullptr);
                empty--;
            }
            return result;
        }
        groupSize=len/k;
        vector<int>groups(k,groupSize);
        int empty=len%k;
        for(int i=0;i<empty;i++) groups[i]+=1;
        temp=head;
        for(int x:groups){
            int a=x;
            ListNode* curr=temp;
            result.push_back(temp);
            while(a--){
                curr=temp;
                temp=temp->next;
            }
            curr->next=nullptr;
        }
        return result;
    }
};