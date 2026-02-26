class Solution {
public:
    void fix(string &s,int &r){
        int carry=1,right=r-1;
        while(right>=0 && carry>0){
            if(s[right]=='1' && carry==1) s[right]='0';
            else{
                s[right]='1';
                carry=0;
            }
            right--;
        }
        if(carry==1){ 
            s='1'+s;
            r++;
        }
    }
    int numSteps(string s) {
        int count=0,right=s.size()-1;
        cout<<s<<" "<<right<<endl;
        while(right>=0){
            if(s[right]=='1' && right!=0){
                s[right]='0';
                fix(s,right);
                count++;
            }
            else if(s[right]=='0') count++,right--;
            else right--;
            cout<<s<<" "<<right<<" "<<count<<endl;
        }
        return count;
    }
};