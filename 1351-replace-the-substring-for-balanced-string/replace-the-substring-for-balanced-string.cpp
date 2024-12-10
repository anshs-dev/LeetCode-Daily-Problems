class Solution {
public:
    int balancedString(string s) {
        int left=0,target=(s.length())/4,right=0;
        int min_len=INT_MAX;
        unordered_map<char,int>m;
        for(char x:s)
        m[x]++;
        int flag=0;
        for(auto &x:m){
            if(x.second!=target){
                flag=1;
                break;
            }
        }
        if(flag==0)
        return 0;
        while(right<s.length()){
        m[s[right]]--;
        while(left<=right && m['Q']<=target && m['W']<=target && m['E']<=target && m['R']<=target){
           min_len=min(min_len,right-left+1);
            m[s[left]]++;
            left++;
        }
        right++;
        }

        
        return min_len;
    }
};