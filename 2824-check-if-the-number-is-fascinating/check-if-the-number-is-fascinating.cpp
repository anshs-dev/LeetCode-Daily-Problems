class Solution {
public:
    bool isFascinating(int n) {
        int temp=n;
        string result=to_string(n);
        n=temp*2;
        result+=to_string(n);
        n=temp*3;
        result+=to_string(n);
        if(result.length()>9)
        return false;
        unordered_set<int>s;
        for(char x:result)
        s.insert(x-'0');
        if(s.size()==9 && !s.count(0))
        return true;
        return false;
    }
};