class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>m;
        for(int n:arr){
        if(m.count(n*2)>0 || n%2==0 && m.count(n/2)>0) {  
        return true;
        }
        m.insert(n);
        }
        return false;
    }
};