class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> patternCount;
        int maxRows = 0;

        for (const auto& row : matrix) {
            string pattern = "";
            char firstBit = row[0];
            for (int bit : row) {
                pattern += (bit == firstBit ? '0' : '1');
            }
            maxRows = max(maxRows, ++patternCount[pattern]);
        }

        return maxRows;
    }
};
