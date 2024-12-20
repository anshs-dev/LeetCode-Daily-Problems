class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int x:nums){
            if(x<=9){
                sum+=x;
            }
            else{
                int maxf=0;
                int len=0;
                while(x!=0){
                maxf=max(maxf,x%10);
                len++;
                x/=10;
                }
                string x(len,'0'+maxf);
                sum=sum+std::stoi(x);
            }
        }
        return sum;
    }
};