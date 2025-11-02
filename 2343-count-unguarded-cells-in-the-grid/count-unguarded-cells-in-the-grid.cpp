class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        // Legend:  1 = empty,  2 = guard,  0 = guarded empty,  -1 = wall
        vector<vector<int>> v(m, vector<int>(n, 1));

        // mark walls and guards (guards as 2 now)
        for (auto &x : walls) v[x[0]][x[1]] = -1;
        for (auto &x : guards) v[x[0]][x[1]] = 2;

        // mark guarded cells row-wise (left → right)
        for (int i = 0; i < m; i++) {
            bool seen = false;
            for (int j = 0; j < n; j++) {
                if (v[i][j] == -1) seen = false;         // wall breaks vision
                else if (v[i][j] == 2) seen = true;     // guard starts vision (only guard value)
                else if (seen && v[i][j] == 1) v[i][j] = 0; // mark empty as guarded
            }
        }

        // mark guarded cells row-wise (right → left)
        for (int i = 0; i < m; i++) {
            bool seen = false;
            for (int j = n - 1; j >= 0; j--) {
                if (v[i][j] == -1) seen = false;
                else if (v[i][j] == 2) seen = true;
                else if (seen && v[i][j] == 1) v[i][j] = 0;
            }
        }

        // mark guarded cells column-wise (top → bottom)
        for (int j = 0; j < n; j++) {
            bool seen = false;
            for (int i = 0; i < m; i++) {
                if (v[i][j] == -1) seen = false;
                else if (v[i][j] == 2) seen = true;
                else if (seen && v[i][j] == 1) v[i][j] = 0;
            }
        }

        // mark guarded cells column-wise (bottom → top)
        for (int j = 0; j < n; j++) {
            bool seen = false;
            for (int i = m - 1; i >= 0; i--) {
                if (v[i][j] == -1) seen = false;
                else if (v[i][j] == 2) seen = true;
                else if (seen && v[i][j] == 1) v[i][j] = 0;
            }
        }

        int sum = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (v[i][j] == 1) sum++;

        return sum;
    }
};
