class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for(int i=left;i<=right;i++){
        if(i>=1 && i<=9){
            result.push_back(i);
        }
        else{
            int count=0;
            int temp=i;
            int flag=1;
            while(temp!=0){
                int d=temp%10;
                if(d==0){
                flag=0;
                break;
                }
                if(i%d!=0){
                    flag=0;
                    break;
                }
                temp/=10;
            }
        if(flag==1)
        result.push_back(i);
        }
        }
        return result;
    }
};