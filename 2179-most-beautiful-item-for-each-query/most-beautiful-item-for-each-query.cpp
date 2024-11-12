class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());
        vector<pair<int, int>> maxBeauty;
        int currentMax = 0;
        for (auto& item : items) {
            currentMax = max(currentMax, item[1]);
            maxBeauty.push_back({item[0], currentMax});
        }
        vector<int> result;
        for (int q : queries) {
            auto it = upper_bound(maxBeauty.begin(), maxBeauty.end(), make_pair(q, INT_MAX));
            if (it == maxBeauty.begin()) result.push_back(0);
            else result.push_back(prev(it)->second);
        }
        return result;
    }
};
