class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1;
        int left=0;
        int water=0;
        int max_water=0;
        for(int i=0;i<height.size();i++){
        int base=right-left;
        int length=min(height[right],height[left]);
        water=length*base;
        max_water=max(water,max_water);
        if(left>=right)
        break;
        else if(height[left]<height[right])
        left++;
        else
        right--;
        }
        return max_water;
    }
};