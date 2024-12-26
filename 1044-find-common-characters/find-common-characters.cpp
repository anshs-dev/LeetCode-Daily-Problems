class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        string first = words[0];
        unordered_map<char,int> m;
        for(char x:first)
            m[x]++;
        for(string x:words) {
            unordered_map<char,int> temp;
            for(char c:x)
                temp[c]++;
            vector<char> keysToErase;
            for(auto &[key,value]:m) {
                if(temp.count(key)) {
                    if(value > temp.at(key))
                        value = temp.at(key);
                } else {
                    keysToErase.push_back(key);
                }
            }
            for(char key:keysToErase)
                m.erase(key);
        }
        for(const auto &x:m)
            result.insert(result.end(),x.second,string(1,x.first));
        return result;
    }
};
