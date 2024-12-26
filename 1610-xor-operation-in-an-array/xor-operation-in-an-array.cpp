class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(start+2*i);
        }
        int sum=v[0];
        if(v.size()==1)
        return sum;
        for(int i=1;i<v.size();i++){
            sum=sum^v[i];
        }
        return sum;
    }
};