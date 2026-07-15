class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int h1=stoi(s.substr(0,2)),h2=stoi(e.substr(0,2)),m1=stoi(s.substr(3,2)),m2=stoi(e.substr(3,2)),s1=stoi(s.substr(6,2)),s2=stoi(e.substr(6,2));
        return h2*3600+m2*60+s2-(h1*3600+m1*60+s1);
    }
};