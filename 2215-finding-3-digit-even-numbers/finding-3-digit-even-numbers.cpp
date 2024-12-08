class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>s;
        int size=digits.size();
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                for(int k=0;k<size;k++){
                    if(i!=j && j!=k && i!=k){
                        if(digits[i]!=0 && digits[k]%2==0)
                        s.insert(digits[i]*100 + digits[j]*10 + digits[k]);
                    }
                }
            }
        }
        vector<int>result(s.begin(),s.end());
        return result;
        
    }
};