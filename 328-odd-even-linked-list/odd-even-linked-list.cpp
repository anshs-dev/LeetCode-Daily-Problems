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
    ListNode* oddEvenList(ListNode* head) {
        struct ListNode *l1=NULL,*l2=NULL,*t1,*t2,*temp;
        temp=head;
        if(head==NULL)
        return head;
        else{
            int i=1;
            while(temp!=NULL){
            if(i%2!=0){
                if(l1==NULL){
                    l1=temp;
                    t1=l1;
                }
                else{
                    t1->next=temp;
                    t1=t1->next;
                }
            }
            else{
                if(l2==NULL){
                    l2=temp;
                    t2=l2;
                }
                else{
                    t2->next=temp;
                    t2=t2->next;
                }
            }
            temp=temp->next;
            i++;
            }
        }
        if(t1!=NULL){
            t1->next=l2;
        }
        if(t2!=NULL)
        t2->next=NULL;
        return l1;
    }
};