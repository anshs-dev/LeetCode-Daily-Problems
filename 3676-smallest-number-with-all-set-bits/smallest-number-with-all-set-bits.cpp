class Solution {
public:
    int smallestNumber(int n) {
        for(int i=n;;i++){
            int temp=i;
            bool ans=true;
            while(temp>1){
                if(temp%2==0){
                    ans=false;
                    break;
                }
                temp/=2;
            }
            if(ans) return i;
        }
        return -1;
    }
};