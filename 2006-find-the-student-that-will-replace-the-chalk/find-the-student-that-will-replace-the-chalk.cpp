class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        unsigned long long sum=0;
        for(int i=0;i<chalk.size();i++){
            if(k>=chalk[i]) k-=chalk[i];
            else return i;
        }
        sum=accumulate(chalk.begin(),chalk.end(),0);
        k=k%sum;
        for(int i=0;i<chalk.size();i++){
            if(k>=chalk[i]) k-=chalk[i];
            else return i;
        }
        return -1;
    }
};