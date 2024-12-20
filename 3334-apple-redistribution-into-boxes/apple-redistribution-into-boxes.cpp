class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
       sort(capacity.rbegin(),capacity.rend());
       int sum=0;
       for(int x:apple)
       sum+=x; 
       int i=0;
       while(i<capacity.size() && sum>0){
    sum-=capacity[i];
    i++;
       }
       return i;
    }
};