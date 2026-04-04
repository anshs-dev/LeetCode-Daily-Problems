class Solution {
public:
    int x_max=-1,y_max=-1,target=-1;
    set<pair<int,int>> st;
    bool dfs(int x,int y){
        if(x==target || y==target || x+y==target) return true;
        if(st.count({x,y})) return false;
        st.insert({x,y}); 
        if(dfs(x_max,y)) return true;
        if(dfs(x,y_max)) return true;
        if(dfs(0,y)) return true;
        if(dfs(x,0)) return true;
        int temp=min(x,y_max-y);
        if(dfs(x-temp,y+temp)) return true;
        int temp2=min(y,x_max-x);
        if(dfs(x+temp2,y-temp2)) return true;
        return false;
    }
    bool canMeasureWater(int x, int y, int t) {
        x_max=x,y_max=y,target=t;
        return dfs(0,0);
    }
};