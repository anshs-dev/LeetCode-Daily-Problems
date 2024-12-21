class Solution {
public:
    int minimumChairs(string s) {
        int max_count=0;
        int count=0;
        for(char x:s){
            if(x=='E'){
                count++;
                max_count=max(max_count,count);
            }
            else{
                count--;
            }
        }
        return max_count;
    }
};