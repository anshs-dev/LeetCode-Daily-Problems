class Solution {
public:
    int nextGreaterElement(int n) {
        string temp=to_string(n);
        if(!next_permutation(temp.begin(),temp.end()) || stoll(temp)>INT_MAX) return -1;
        else return stoi(temp);
    }
};