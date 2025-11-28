class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<vector<int>> g(n);
        for (auto &e : edges) {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        vector<char> vis(n, 0);
        long long cnt = 0;
        function<int(int)> dfs = [&](int u) -> int {
            vis[u] = 1;
            int s = ((values[u] % k) + k) % k;
            for (int v : g[u]) if (!vis[v]) s = (s + dfs(v)) % k;
            if (s == 0) { cnt++; return 0; }
            return s;
        };
        dfs(0);
        return (int)cnt;
    }
};