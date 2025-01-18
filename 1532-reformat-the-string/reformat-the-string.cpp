class Solution {
public:
    string reformat(string s) {
        vector<int>nums;
        vector<char>crax;
        for(char x:s){
            if(isdigit(x))
            nums.push_back(x);
            else
            crax.push_back(x);
        }
        int a=crax.size();
        int b=nums.size();
        if(abs(a-b)>1)
        return "";
        string result="";
        if(nums.size()>crax.size()){
            result+=nums.back();
            nums.pop_back();
            for(int i=0;i<nums.size();i++){
                result+=crax[i];
                result+=nums[i];
            }
            return result;
        }
        else if(crax.size()>nums.size()){
            result+=crax.back();
            crax.pop_back();
            for(int i=0;i<nums.size();i++){
                result+=nums[i];
                result+=crax[i];
            }
            return result;
        }
        else{
            for(int i=0;i<nums.size();i++){
                result+=nums[i];
                result+=crax[i];
            }
        }
        return result;
    }
};