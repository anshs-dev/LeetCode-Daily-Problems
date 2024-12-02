class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int low=1;
        if(arr.size()==1)return arr[0];
         int high=arr.size()-1;
        if(arr[0]!=arr[1])
        return arr[0];
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
            return arr[mid];
            else if(arr[mid]==arr[mid-1] && mid%2!=0 || (arr[mid]!=arr[mid-1] && mid%2==0))
            low=mid+1;
            else
            high=mid-1;
        }
        return -1;
    }
};