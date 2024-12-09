class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>result;
        int count=0;
        for(int i=0;i<chars.size();i++){
            char current=chars[i];
            count++;
            while(i<chars.size()-1 && current==chars[i+1]){
            i++;
            count++;
            }
            if(count==1){
            result.push_back(current);
            count=0;
            }
            else{
                result.push_back(current);
                string temp=to_string(count);
                for(char x:temp)
                result.push_back(x);
                count=0;
            }
        }
        chars=result;
        return result.size();
    }
};