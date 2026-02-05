class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(),res=INT_MIN;
        stack<int>st;
        vector<int> left(n,-1),right(n,n);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++) res=max(res,(right[i]-left[i]-1)*heights[i]);
        return res;
    }
};