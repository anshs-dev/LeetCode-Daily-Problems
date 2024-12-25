class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop", row2 = "asdfghjkl", row3 = "zxcvbnm";
        vector<string> result;
        for (string word : words) {
            bool isRow1 = true, isRow2 = true, isRow3 = true;
            for (char c : word) {
                char lower = tolower(c);
                if (row1.find(lower) == string::npos) isRow1 = false;
                if (row2.find(lower) == string::npos) isRow2 = false;
                if (row3.find(lower) == string::npos) isRow3 = false;
            }
            if (isRow1 || isRow2 || isRow3) result.push_back(word);
        }
        return result;
    }
};
