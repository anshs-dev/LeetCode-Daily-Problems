class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int  dob = 0;
        int oth = 0;
        for(int x :nums){
            if(x < 10) single+=x;
            else if(x>=10 && x<=99) dob+=x;
            else oth+=x;
        }
        return single>dob+oth || dob>single+oth;
    }
};