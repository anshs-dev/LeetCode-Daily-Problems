class Solution {
public:
    int count=0;
    bool is_valid(vector<int> &v){
        for(int i=1;i<=v.size();i++){
            if(v[i-1]%i!=0 && i%v[i-1]!=0) return false;
        }
        return true;
    }
    void backtrack(vector<bool> &check, vector<int> &temp, int n){
        if(temp.size()==n){
            if(is_valid(temp)) count++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(!check[i] && ((temp.size()+1)%i==0 || i%(temp.size()+1)==0)){
                check[i]=true;
                temp.push_back(i);
                backtrack(check,temp,n);
                temp.pop_back();
                check[i]=false;
            }
        }
    }
    int countArrangement(int n) {
        vector<bool> check(n+1,false);
        vector<int>temp;
        backtrack(check,temp,n);
        return count;
    }
};