class Solution {
public:
    vector<int> evenOddBit(int n) {
        string binary=bitset<32>(n).to_string();
        int even=0,odd=0;
        for(int i=0;i<binary.length();i++){
            if(i%2==0 && binary[i]=='1') even++;
            else if(i%2==1 && binary[i]=='1') odd++;
        }
        return {odd,even};
    }
};