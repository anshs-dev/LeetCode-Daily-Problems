class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        //We are going to traverse through the whole linked list and if the current node value
        //is present in the nums, we will delete it...
        //so for fast searching we will use set to check whether the element was present 
        //or not
        unordered_set<int>st(nums.begin(),nums.end());
        ListNode* temp=head,*prev=nullptr;
        while(temp!=nullptr){
            if(st.find(temp->val)!=st.end()){
                if(temp->next){
                //we write these two lines whenever we want to delete a node
                temp->val=temp->next->val;
                temp->next=temp->next->next;
                }
                else{
    //since we cant delete the last node, we have to take a previous pointer so if we encounter
    //a last node and we have to delete it, we will set next of prev to nullptr.
                    prev->next=nullptr;
                    temp=temp->next;
                }
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};