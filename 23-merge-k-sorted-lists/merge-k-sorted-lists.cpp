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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto cmp=[](ListNode* a,ListNode* b){
            return a->val>b->val;
        };
        priority_queue<ListNode*,vector<ListNode*>,decltype(cmp)>minHeap(cmp);
        for(auto x:lists){
            if(x) minHeap.push(x);
        }
        ListNode* temp=new ListNode(0);
        ListNode* dummy=temp;
        while(!minHeap.empty()){
            temp->next=new ListNode(minHeap.top()->val);
            temp=temp->next;
            ListNode *t=minHeap.top();
            minHeap.pop();
            if(t->next!=NULL) minHeap.push(t->next);
        }
        return dummy->next;
    }
};