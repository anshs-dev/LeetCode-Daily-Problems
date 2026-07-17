class Solution {
public:
    int minLights(vector<int>& lights) {
        vector<bool>illuminated(ssize(lights),false);
        int curr=0,count=0;
        for(int i=0;i<lights.size();i++){
            curr=max(curr,lights[i]);
            if(curr>0){
                illuminated[i]=true;
                if(lights[i]<curr) curr--;
            }
        }
        curr=0;
        for(int i=lights.size()-1;i>=0;i--){
            curr=max(curr,lights[i]);
            if(curr>0){
                illuminated[i]=true;
                if(lights[i]<curr) curr--;
            }
        }
        curr=0;
        for(int x:illuminated){
            if(!x) curr++;
            else{
                count+=((curr+2)/3);
                curr=0;
            }
        }
        count+=((curr+2)/3);
        return count;
    }
};