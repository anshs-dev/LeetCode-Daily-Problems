class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int total_length = rolls.size() + n;
        int initial_sum = 0;
        vector<int> temp;

        for (int x : rolls) initial_sum += x;

        int equal = mean * total_length;
        int nums = equal - initial_sum;

        if (nums < n || nums > 6 * n) return temp;

        int base = nums / n;
        int remainder = nums % n;

        for (int i = 0; i < n; i++) {
            if (i < remainder) temp.push_back(base + 1);
            else temp.push_back(base);
        }

        return temp;
    }
};
