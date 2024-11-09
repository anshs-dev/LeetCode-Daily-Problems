class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty() || haystack.empty())
        return -1;
        size_t index=haystack.find(needle);
        if(index!=std::string::npos)
        return index;
        else
        return -1;
    }
};