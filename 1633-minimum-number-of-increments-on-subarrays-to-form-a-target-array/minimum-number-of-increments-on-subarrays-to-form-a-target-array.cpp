class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int count=0,temp=0;
        for(int x:target){
            if(x>temp) count+=x-temp;
            temp=x;
        }
        return count;
    }
};