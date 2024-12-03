class Solution {
public:
    int minBitFlips(int start, int goal) {
        string a,b;
        int count=0;
        a=bitset<32>(start).to_string();
        b=bitset<32>(goal).to_string();
        for(int i=0;i<a.length();i++){
        if(int(a[i])^int(b[i]))
        count++;
        }
        return count;
    }
};