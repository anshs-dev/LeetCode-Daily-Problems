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
    int length_ll(ListNode* head){
        int t=0;
        ListNode* temp=head;
        while(temp){
            t++;
            temp=temp->next;
        }
        return t;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int sizy=0,len=length_ll(head);
        vector<int>groups;
        for(int i=1;;i++){
            if(i>=len){
                groups.push_back(len);
                break;
            }
            groups.push_back(i);
            len-=i;
        }
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *temp=dummy;
        for(auto x:groups){
            int sz=x;
            if(sz%2==1){
                while(sz--) temp=temp->next;
            }
            else{
                stack<ListNode*>st;
                ListNode* last=temp->next;
                while(sz--){
                    st.push(last);
                    last=last->next;
                }
                while(!st.empty()){
                    temp->next=st.top();
                    temp=temp->next;
                    st.pop();
                }
                temp->next=last;
            }
        }
        return dummy->next;
    }
};