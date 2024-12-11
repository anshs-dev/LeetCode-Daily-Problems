class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        struct VectorHash {
            size_t operator()(const vector<int>& v) const {
                size_t hash = 0;
                for (int num : v) {
                    hash ^= std::hash<int>()(num) + 0x9e3779b9 + (hash << 6) + (hash >> 2);
                }
                return hash;
            }
        };

        unordered_map<vector<int>, int, VectorHash> rowCount;
        int count = 0;

        for (auto& row : grid) {
            rowCount[row]++;
        }

        int len = grid.size();
        for (int i = 0; i < len; i++) {
            vector<int> column;
            for (int j = 0; j < len; j++) {
                column.push_back(grid[j][i]);
            }
            count += rowCount[column];
        }
        return count;
    }
};
