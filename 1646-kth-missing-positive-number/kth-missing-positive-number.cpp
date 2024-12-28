class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int index=0,current=1;
        while(k>0){
            if(index<arr.size() && current==arr[index])
            index++;
            else{
                k--;
                if(k==0)
                return current;
            }
            current++;
        }
        return 0;
    }
};