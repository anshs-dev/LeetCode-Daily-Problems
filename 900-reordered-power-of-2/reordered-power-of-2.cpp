class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string x=to_string(n);
        sort(x.begin(),x.end());
        do{
            int num=stoi(x);
            if((num&(num-1))==0 && x[0]!='0')
            return true;
        }
        while(next_permutation(x.begin(),x.end()));
        return false;
    }
};