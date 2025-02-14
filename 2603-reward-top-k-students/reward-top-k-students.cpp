class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        unordered_map<string,int>m1,m2;
        for(string x:positive_feedback) m1[x]++;
        for(string x:negative_feedback) m2[x]++;
        int i=0;
        vector<pair<int,int>>v;
        for(string x:report){
        int count=0;
        stringstream ss(x);
        string word;
        while(ss>>word){
            if(m1.count(word)) count+=3;
            if(m2.count(word)) count--;
        }
        v.push_back({count,student_id[i]});
        i++;
        }
        sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b){
            if(a.first==b.first) return a.second<b.second;
            return a.first>b.first;
        });
        vector<int>result;
        i=0;
        while(k--){
        result.push_back(v[i++].second);
        }
        return result;
    }
};