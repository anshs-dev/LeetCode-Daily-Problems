class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int add) {
        vector<int>diff;
        int count=0;
        for(int i=0;i<capacity.size();i++)
         diff.push_back(capacity[i]-rocks[i]);
         sort(diff.begin(),diff.end());
         for(int i=0;i<diff.size();i++){
            if(diff[i]<=add){
                add-=diff[i];
                count++;
            }
            else
            break;
         }
         return count;
    }
};