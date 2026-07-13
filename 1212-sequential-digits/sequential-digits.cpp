class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string temp="123456789";
        vector<int>res;
        for(int i=2;i<=9;i++){
            for(int j=0;j<=9-i;j++){
                int val=stoi(temp.substr(j,i));
                if(val>=low && val<=high) res.push_back(val);
            }
        }
        return res;
    }
};