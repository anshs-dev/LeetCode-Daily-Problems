class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truckSize) {
        sort(box.begin(),box.end(),[](const vector<int>a,const vector<int>b){
            return a[1]>b[1];
        });
        int count=0;
        for(auto x:box){
            if(truckSize>x[0]){
                count=count+x[1]*x[0];
                truckSize-=x[0];
                if(truckSize==0)
                return count;
            }
            else{
                count=count+truckSize*x[1];
                return count;
            }
        }
        return count;
    }
};