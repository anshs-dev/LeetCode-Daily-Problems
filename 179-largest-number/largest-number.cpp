class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>result;
        for(int x:nums) result.push_back(to_string(x));
        sort(result.begin(),result.end(),[](const string a,const string b){
            return a+b>b+a;
        });
        if(result[0]=="0") return "0";
        string res="";
        for(string x:result) res+=x;
        return res;
    }
};