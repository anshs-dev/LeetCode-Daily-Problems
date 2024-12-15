class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.rbegin(),people.rend());
        int left=0;
        int boats=0;
        int right=people.size()-1;
        while(left<=right){
            if(people[left]+people[right]<=limit){
                boats++;
                left++;
                right--;
            }
            else{
                boats++;
                left++;
            }
        }
        return boats;
    }
};