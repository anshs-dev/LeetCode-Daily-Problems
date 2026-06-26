class Solution {
public:
    bool isvalid(vector<int> &weights, int days, int cap){
        int count=1,temp=0;
        for(int x:weights){
            temp+=x;
            if(x>cap) return false;
            if(temp>cap){
                count++;
                temp=x;
            }
        }
        cout<<count<<" "<<cap<<" "<<endl;
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int right=accumulate(weights.begin(),weights.end(),0),left=1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isvalid(weights,days,mid)) right=mid-1;
            else left=mid+1;
        }
        return left;
    }
};