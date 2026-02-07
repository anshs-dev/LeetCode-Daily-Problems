class Solution {
public:
    void dfs(vector<string>& res, string s, int i, vector<string> curr, int dots) {
        if (i >= s.length() && dots == 4) {
            string temp = "";
            for (string x : curr) temp += x;
            res.push_back(temp);
            return;
        }
        if (dots >= 4 || i >= s.length()) return;
        string t = s.substr(i, 1);
        if (dots < 3) t += ".";
        curr.push_back(t);
        dfs(res, s, i + 1, curr, dots + 1);
        curr.pop_back();
        if (s.length() - i - 1 >= 1) {
            t = s.substr(i, 2);
            if (t[0] == '0') return;
            if (dots < 3) t += ".";
            //cout<<t<<" ";
            curr.push_back(t);
            dfs(res, s, i + 2, curr, dots + 1);
            curr.pop_back();
        }
        if (s.length() - i - 1 >= 2) {
            t = s.substr(i, 3);
            if (stoi(t) > 255)  return;
            if (dots < 3) t += ".";
            curr.push_back(t);
            //cout<<t<<" ";
            dfs(res, s, i + 3, curr, dots + 1);
            curr.pop_back();
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if (s.length() > 12)
            return {};
        vector<string> res, curr;
        dfs(res, s, 0, curr, 0);
        return res;
    }
};