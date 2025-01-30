class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int one=0,two=0;
    for(int right=colors.size()-1;right>0;right--){
        if(colors[right]-colors[0]!=0) {
            one=right;
            break;
        }
    }
    for(int left=0;left<colors.size()-1;left++){
        if(colors[left]-colors[colors.size()-1]!=0) {
            two=colors.size()-left-1;
            break;
        }
    }
    return max(one,two);
    }
};