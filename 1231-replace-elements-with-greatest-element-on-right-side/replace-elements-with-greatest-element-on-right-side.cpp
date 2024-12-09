class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>answer;
        for(int i=0;i<arr.size()-1;i++){
            int max=*max_element(arr.begin()+i+1,arr.end());
            answer.push_back(max);
        }
        answer.push_back(-1);
        return answer;
    }
};