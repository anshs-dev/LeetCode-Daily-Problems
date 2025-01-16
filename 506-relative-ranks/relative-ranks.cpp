class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> v;
        for (int i = 0; i < score.size(); i++) {
            v.push_back({score[i], i});
        }
        sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
            return a.first > b.first;
        });
        vector<string> result(score.size());
        for (int i = 0; i < v.size(); i++) {
            if (i == 0) result[v[i].second] = "Gold Medal";
            else if (i == 1) result[v[i].second] = "Silver Medal";
            else if (i == 2) result[v[i].second] = "Bronze Medal";
            else result[v[i].second] = to_string(i + 1);
        }
        return result;
    }
};
