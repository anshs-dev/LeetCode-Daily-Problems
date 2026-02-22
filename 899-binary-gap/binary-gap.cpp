class Solution {
public:
    int binaryGap(int n) {
        string temp="";
        while(n>0){
            temp+=to_string(n%2);
            n/=2;
        }
        int max_dist=0;
        int prev=-1;
        for(int i=0;i<temp.length();i++){
            if(temp[i]=='1'){
                if(prev!=-1){
                    max_dist=max(max_dist,i-prev);
                }
                prev=i;
            }
        }
        return max_dist;
    }
};