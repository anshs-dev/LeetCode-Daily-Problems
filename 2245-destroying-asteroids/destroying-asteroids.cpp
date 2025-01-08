class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
       sort(asteroids.begin(),asteroids.end());
       for(int x:asteroids){
        if(mass>=x){
            mass+=x;
        }
        else
        return false;
       } 
       return true;
    }
};