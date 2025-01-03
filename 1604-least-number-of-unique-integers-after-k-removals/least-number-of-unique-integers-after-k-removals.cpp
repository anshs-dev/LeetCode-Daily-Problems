class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       vector<int>result;
       int count=0;
       unordered_map<int,int>m;
       for(int x:arr) m[x]++;
       for(auto x:m) result.push_back(x.second);
       sort(result.begin(),result.end());
       for(int i=0;i<result.size();i++){
        if(k>result[i]){
            k-=result[i];
            result[i]=0;
        }
        else{
            result[i]-=k;
            k=0;
        }
        if(result[i]!=0)
        count++;
       }
       
       return count;
    }
};