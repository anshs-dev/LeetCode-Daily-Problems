class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>result;
        string res="a";
        int i=0;
        while(res!=target){
            result.push_back(res);
            if(res[i]!=target[i]){
                res[i]++;
            }
            else{
                res+="a";
                i++;
            }
        }
        result.push_back(res);
        return result;
    }
};