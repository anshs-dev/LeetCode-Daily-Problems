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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
        return list2;
        if(list2==NULL)
        return list1;
        ListNode *t1,*t2,*t3,*t4;
        t1=list1;
        t2=list2;
        t3=NULL;
        while(t1!=NULL && t2!=NULL){
            if(t1->val<=t2->val){
                if(t3==NULL){
                    t3=t1;
                    t1=t1->next;
                    t4=t3;
                }
                else{
                t3->next=t1;
                t1=t1->next;
                t3=t3->next;
                }
            }
            else{
                if(t3==NULL){
                    t3=t2;
                    t2=t2->next;
                    t4=t3;
                }
                else{
                    t3->next=t2;
                    t2=t2->next;
                    t3=t3->next;
                }

            }
        }
            ListNode *temp;
            temp=t1==NULL?t2:t1;
            while(temp!=NULL){
                t3->next=temp;
                t3=t3->next;
                temp=temp->next;
            }
        
     return t4;

    }
};