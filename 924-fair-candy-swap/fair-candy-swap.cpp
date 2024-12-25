class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int alice_sum=0,bob_sum=0;
        for(int x:aliceSizes)
        alice_sum+=x;
        for(int x:bobSizes){
            bob_sum+=x;
        }
        for(int i=0;i<aliceSizes.size();i++){
            for(int j=0;j<bobSizes.size();j++){
                if(alice_sum-aliceSizes[i]+bobSizes[j]==bob_sum+aliceSizes[i]-bobSizes[j])
                return {aliceSizes[i],bobSizes[j]};
            }
        }
        return {-1,-1};//ram ji kare kabhi naubat na aaye
    }
};