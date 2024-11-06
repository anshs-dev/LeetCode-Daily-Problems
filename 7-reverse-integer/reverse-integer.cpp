class Solution {
public:
    int reverse(int x) {
        int flag=0;
        string s=to_string(x);
        if(s[0]=='-'){
        flag=1;
        s.erase(s.begin()+0);
    }
        std::reverse(s.begin(),s.end());
        if(s[0]==0)
        s.erase(s.begin()+0);
        long long new1=std::stoll(s);
        if(flag==1)
        new1*=-1;
        
         if (new1 > INT_MAX || new1 < INT_MIN) 
            return 0;
        return static_cast<int>(new1);
    }
};