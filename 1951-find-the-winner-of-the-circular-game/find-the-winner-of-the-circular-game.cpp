class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<bool> temp(n, true);
        int remaining = n;
        int i = 0;

        while (remaining > 1) {
            int steps = k;
            while (steps) {
                if (temp[i]) {
                    steps--;
                }
                if (steps == 0) break;
                i = (i + 1) % n;
            }
            temp[i] = false;
            remaining--;
            while (!temp[i]) {
                i = (i + 1) % n;
            }
        }

        for (int j=0;j<n;j++) {
            if (temp[j]) return j + 1;
        }
        return -1;
    }
};
