class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count=0;
        vector<int>result;
        int i=0;
        while(count<arr.size()){
            result.push_back(arr[i]);
            count++;
            if(count==arr.size()){
                arr=result;
                return;
            }
            if(arr[i]==0){
            result.push_back(0);
            count++;
            }
            i++;
        }
        arr=result;
    }
};