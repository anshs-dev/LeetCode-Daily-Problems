class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for (const string& word : words) {
            m[word]++;
        }
        vector<pair<string, int>> v;
        for (const auto& entry : m) {
            v.push_back(entry);
        }
        sort(v.begin(), v.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        });
        vector<string> result;
        for (int i = 0; i < k; i++) {
            result.push_back(v[i].first);
        }
        return result;
    }
};
