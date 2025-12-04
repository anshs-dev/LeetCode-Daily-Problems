class Solution {
public:
    int countCollisions(string directions) {
        bool wall=false;
        int count=0,streak=0;
        if(directions[0]=='S') wall=true;
        else if(directions[0]=='R') streak++;
        for(int i=1;i<directions.length();i++){
            if(directions[i]=='L'){
                if(directions[i-1]=='R'){
                    count+=streak;
                    count++;
                    streak=0;
                    wall=true;
                }
                else if(wall) count++;
            }
            else if(directions[i]=='R'){
                streak++;
            }
            else{
                count+=streak;
                streak=0;
                wall=true;
            }
        }
        return count;
    }
};