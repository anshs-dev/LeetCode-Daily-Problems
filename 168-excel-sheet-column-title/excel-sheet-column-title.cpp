class Solution {
public:
    string convertToTitle(int col) {
        string news;
        while(col>0){
            col--;
            char ch='A'+(col%26);
            news=ch+news;
            col/=26;
        }
        return news;
    }
};