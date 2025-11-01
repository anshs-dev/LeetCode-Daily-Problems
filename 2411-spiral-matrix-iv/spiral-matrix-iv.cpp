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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>v(m,vector<int>(n,-1));
        int i=0,j=0,top=0,bottom=m-1,left=0,right=n-1;
        ListNode* temp=head;
        while(temp){
            while(temp && j<=right){
                v[i][j]=temp->val;
                temp=temp->next;
                j++;
            }
            i++;
            j--;
            top++;
            while(temp && i<=bottom){
                v[i][j]=temp->val;
                temp=temp->next;
                i++;
            }
            i--;
            j--;
            right--;
            while(temp && j>=left){
                v[i][j]=temp->val;
                temp=temp->next;
                j--;
            }
            j++;
            i--;
            bottom--;
            while(temp && i>=top){
                v[i][j]=temp->val;
                temp=temp->next;
                i--;
            }
            i++;
            j++;
            left++;
        }
        return v;
    }
};