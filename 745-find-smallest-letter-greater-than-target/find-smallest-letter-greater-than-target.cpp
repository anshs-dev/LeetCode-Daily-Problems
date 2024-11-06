class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
            char b=letters[0];
        for(int i=0;i<letters.size();i++){
            char a=letters[i];
            if((int)a>(int)target)
            return a;
        }
        return b;
    }
};