class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<=right){
            if(isalpha(s[left])){
                if(isalpha(s[right])){
                    swap(s[left],s[right]);
                    left++;
                    right--;
                                      }
                else{
                    right--;
                    }
                  }
                else{
                    left++;
                }
        }
        return s;
    }
};