class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum=0;
        if(skill.size()==2)
        return skill[0]*skill[1];
        int n=skill.size();
        sort(skill.begin(),skill.end());
        long long value=skill[0]+skill[n-1];
        for(int i=0;i<n/2;i++){
            long long current=skill[i]+skill[n-i-1];
            if(current!=value)
            return -1;
            sum+=skill[i]*skill[n-i-1];
        }
        return sum;
    }
};