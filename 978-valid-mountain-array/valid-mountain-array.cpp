class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int flag=0;
        int flag2=0;
        if(arr[1]<arr[0])
        return false;
        for(int i=0;i<arr.size()-1;i++){
         if(arr[i+1]<=arr[i] && flag==0){
          flag=1;
         }
         if(flag==1 && arr[i+1]>=arr[i])
         return false;
        }
        if(flag==0)
        return false;
        return true;
    }
};