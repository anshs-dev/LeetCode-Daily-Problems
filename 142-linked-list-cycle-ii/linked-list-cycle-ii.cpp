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
        ListNode *t1=head,*t2=head;
        if(head==NULL) return head;
        int flag=0;
        while(t2!=NULL && t2->next!=NULL){
            t1=t1->next;
            t2=t2->next->next;
            if(t1==t2){
                flag=1;
                break;
            }
        }
        if(flag==0) return NULL;
        t1=head;
        while(t1!=t2){
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
};