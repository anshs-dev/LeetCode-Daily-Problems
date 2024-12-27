class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>result(num_people,0);
        int last=0;
        int count=1;
        while(candies!=0){
            int i=0;
            int temp=num_people;
            while(i<temp){
                if(candies>last+i+1){
            result[i]=result[i]+last+i+1;
            candies=candies-last-i-1;
            }
            else{
                result[i]+=candies;
                return result;
            }
            i++;
            }
            last=num_people*count;
            count++;
        }
        return result;
    }
};