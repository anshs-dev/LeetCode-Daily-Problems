class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>result;
        for(int x:asteroids){
            int num=x;
            bool push=true;
            if(x>0 || (!st.empty() && st.top()<0 && x<0)){
                st.push(x);
                continue;
            }
            while(true){
                if(st.empty() || (st.top()<0)) break;
                if(abs(num)<st.top()){
                    push=false;
                    break;
                }
                if(!st.empty() && st.top()>0 && abs(num)==abs(st.top())){
                    st.pop();
                    push=false;
                    break;
                }
                if(!st.empty() && st.top()>0 && abs(num)>st.top()) st.pop();
            }
            if(push) st.push(num);
        }
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};