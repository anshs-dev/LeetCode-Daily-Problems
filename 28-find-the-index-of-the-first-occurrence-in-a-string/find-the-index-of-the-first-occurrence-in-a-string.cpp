class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()==0 || needle.length()==0)
        return -1;
        int index = haystack.find(needle);
        if(index!=-1)
        return index;
        else
        return -1;
    }
};