class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count;
        int max_count=0;
        for(string x:sentences){
            count=0;
            for(int i=0;i<x.length();i++){
                if(x[i]==' ')
                count++;
            }
            max_count=max(count,max_count);
        }
        return max_count+1;
    }
};