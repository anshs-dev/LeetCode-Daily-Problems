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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        return head;
        int count=1;
        ListNode *t1=head,*t2=head->next;
        while(t1->next!=NULL){
            count++;
            t1=t1->next;
        }
        t1->next=head;
        int rotation=k%count;
        rotation=count-rotation;
        rotation--;
            while(rotation--){
           head=head->next;
           t2=t2->next;
            }
            head->next=NULL;
            return t2; 
    }
};