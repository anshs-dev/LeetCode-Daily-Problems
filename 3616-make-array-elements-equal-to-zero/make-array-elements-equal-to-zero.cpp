class Solution {
public:
    bool allzero(vector<int> &temp){
        for(int x:temp) if(x!=0) return false;
        return true;
    }
    bool checkleft(vector<int>temp,int i,bool dir){
        while(i>=0 && i<temp.size()){
            if(temp[i]==0){
                if(!dir) i--;
                else i++;
            }
            else{
                temp[i]--;
                dir=!dir;
                if(!dir) i--;
                else i++;
            }
        }
        return allzero(temp);
    }
    int countValidSelections(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && checkleft(nums,i,false)) count++;
            if(nums[i]==0 && checkleft(nums,i,true)) count++; 
        }
        return count;
    }
};