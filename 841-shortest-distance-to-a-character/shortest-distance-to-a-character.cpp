class Solution {
public:
    int distance(string s,int position,char what){
        int left=position,right=position;
        int count1=0,count2=0,flag1=0,flag2=0;
        while(left>=0){
            if(s[left]==what){
                flag1=1;
                break;
            }
            left--;
            count1++;
        }
        while(right<s.length()){
            if(s[right]==what){
                flag2=1;
                break;
            }
            right++;
            count2++;
        }
        if(flag1==0)
        return count2;
        else if(flag2==0)
        return count1;
        else
        return min(count2,count1);
    }
    vector<int> shortestToChar(string s, char c) {
    vector<int>result(s.length(),0);
    for(int i=0;i<s.length();i++){
        result[i]=distance(s,i,c);
    }
    return result;
    }
};