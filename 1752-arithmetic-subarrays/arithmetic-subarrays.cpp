class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>result;
        for(int i=0;i<l.size();i++){
          vector<int>temp(nums.begin()+l[i],nums.begin()+r[i]+1);
          sort(temp.begin(),temp.end());
          bool hell=true;
          int diff=temp[1]-temp[0];
          for(int j=1;j<temp.size();j++){
            if(temp[j]-temp[j-1]!=diff){
                hell=false;
                break;
            }
          }
        result.push_back(hell);  
        }
        return result;
    }
};