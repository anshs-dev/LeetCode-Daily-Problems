class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
       int count=0,left=0,right=0,one_count=0,zero_count=0;
       while(right<s.length()){
        if(s[right]=='1')
        one_count++;
        else
        zero_count++;
        while(zero_count>k && one_count>k){
            if(s[left]=='0')
            zero_count--;
            else
            one_count--;
            left++;
        }
        count+=right-left+1;
        right++;
       }
    return count;
    }
};
