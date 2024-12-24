class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1){
            if(target%2!=0){
                if(maxDoubles>0){
                count+=2;
                target--;
                target/=2;
                maxDoubles--;
                }
                else{
                    count=count+target-1;
                    return count;
                }
            }
            else{
                if(maxDoubles>0){
                    count++;
                    maxDoubles--;
                    target/=2;
                }
                else{
                    count=count+target-1;
                    return count;
                }
            }
        }
        return count;
    }
};