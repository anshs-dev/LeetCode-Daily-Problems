class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(string x:details){
            string temp=x.substr(11,2);
            if(stoi(temp)>60)
            count++;
        }
        return count;
    }
};