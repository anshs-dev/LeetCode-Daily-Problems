/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*>m;
        for(auto x:employees) m[x->id]=x;
        int res=0;
        queue<int>q;
        q.push(id);
        while(!q.empty()){
            res+=m[q.front()]->importance;
            for(auto x:m[q.front()]->subordinates) q.push(x);
            q.pop();
        }
        return res;
    }
};