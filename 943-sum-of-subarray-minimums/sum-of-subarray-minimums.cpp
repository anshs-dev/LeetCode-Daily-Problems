class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        long long sum = 0;
        vector<int> prev(n, -1), next(n, n);
        stack<int> st;

        // previous smaller element
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if (!st.empty()) prev[i] = st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // next smaller element
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) st.pop();
            if (!st.empty()) next[i] = st.top();
            st.push(i);
        }

        for (int i = 0; i < n; i++) {
            long long left = i - prev[i];
            long long right = next[i] - i;
            sum = (sum + (1LL * arr[i] * left % MOD * right % MOD) % MOD) % MOD;
        }

        return (int)sum;
    }
};
