class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int>m;
        vector<int>result;
        if(changed.size()%2!=0)
        return {};
        sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++){
            if(changed[i]==0 && changed[i+1]==0){
                result.push_back(0);
                i++;
            }
            else if(changed[i]==0 && changed[i+1]!=0){
                return {};
            }
            else if(m[changed[i]/2]>0 && changed[i]%2==0){
                result.push_back(changed[i]/2);
                m[changed[i]/2]--;
            }
            else{
                m[changed[i]]++;
            }
        }
        vector<int>temp;
        return result.size()*2==changed.size()?result:temp;
    }
};