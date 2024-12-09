class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len=arr.size()-1;
        int max=-1;
        for(int i=len;i>=0;i--){
         int current=arr[i];
         arr[i]=max;
         if(current>max)
         max=current;
        }
        return arr;
    }
};