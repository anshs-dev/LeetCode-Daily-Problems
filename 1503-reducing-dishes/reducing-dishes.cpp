class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.rbegin(),satisfaction.rend());
        int current_sum=0,max_sum=0;
        for(int x:satisfaction){
            current_sum+=x;
            if(current_sum<0)
            break;
            max_sum+=current_sum;
        }
        return max_sum;
    }
};