class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left=0,count=0,sum=0;
        for(int right=0;right<s.length();right++){
            sum+=abs(int(t[right]-s[right]));
            while(sum>maxCost){
                sum-=abs(int(s[left]-t[left]));
                left++;
            }
            count=max(right-left+1,count);
        }
        return count;
    }
};