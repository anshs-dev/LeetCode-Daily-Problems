class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>result;
        result.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            string temp=words[i];
            sort(temp.begin(),temp.end());
            string prev=words[i-1];
            sort(prev.begin(),prev.end());
            if(temp!=prev)
            result.push_back(words[i]);
        }
        return result;
    }
};