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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1=headA,*t2=headB;
        int l1=0,l2=0;
        while(t1!=NULL){
            t1=t1->next;
            l1++;
        }
        while(t2!=NULL){
            t2=t2->next;
            l2++;
        }
        t1=headA;
        t2=headB;
        if(l2>l1){
            int count=l2-l1;
            while(count--){
                t2=t2->next;
            }
        }
        else if(l2<l1){
            int count=l1-l2;
            while(count--){
                t1=t1->next;
            }
        }
        while(t1!=t2){
            // if(t1->next==t2->next){
            //     return t1;
            // }
            t1=t1->next;
            t2=t2->next;
        }
        return t1;

    }
};