class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
       if(nums.size()%k!=0) return false;
       map<int,int>m;
       for(int x:nums) m[x]++;
       while(!m.empty()){
        int temp=k;
        vector<int>v;
        for(auto &x:m){
            if(temp==0) break;
            if(v.empty()){
                v.push_back(x.first);
                x.second--;
                if(x.second==0)
                m.erase(x.first);
            }
            else{
                if(x.first-v.back()!=1) return false;
                v.push_back(x.first);
                x.second--;
                if(x.second==0)
                m.erase(x.first);
            }
            temp--;
        }
        if(temp!=0) return false;
        v.clear();
       }
       return true;
    }
};