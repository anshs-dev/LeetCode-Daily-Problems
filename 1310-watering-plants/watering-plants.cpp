class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity){
        int temp=capacity,steps=0;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=temp){
                temp-=plants[i];
                steps++;
            }
            else{
                temp=capacity;
                steps+=2*i+1;
                temp-=plants[i];

            }
        }
        return steps;
    }
};