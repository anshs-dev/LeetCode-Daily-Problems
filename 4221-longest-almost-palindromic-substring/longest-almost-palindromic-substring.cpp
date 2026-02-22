class Solution {
public:
    int ispalindrome(string temp, int l1, int r1){
        int count=0;
        int left=l1,right=r1;
        bool mistake=false;
        while(left>=0 && right<temp.length()){
            if(temp[left]!=temp[right]){
                if(!mistake){
                    mistake=true;
                    count=max(count,right-left);
                    if(left!=0) left--;
                    if(temp[left]==temp[right]) count=max(count,right-left+1);
                }
                else break;
            }
            else{
                count=max(count,right-left+1);
                if(right==temp.length()-1 && !mistake && left>0) count=max(count,right-left+2);
                left--;
                right++;
            }
        } 
        //cout<<count<<endl;
        left=l1,right=r1;
        mistake=false;
        while(left>=0 && right<temp.length()){
            if(temp[left]!=temp[right]){
                if(!mistake){
                    mistake=true;
                    count=max(count,right-left);
                    if(right!=temp.length()-1) right++;
                    if(temp[left]==temp[right]) count=max(count,right-left+1);
                }
                else break;
            }
            else{
                count=max(count,right-left+1);
                if(left==0 && !mistake && right<temp.size()-1) count=max(count,right-left+2);
                left--;
                right++;
            }
        }
        //cout<<count<<endl;
        return count;
    }
    int almostPalindromic(string s) {
       int result=0;
       for(int i=0;i<s.length()-1;i++){
            result=max(result,ispalindrome(s,i,i));
            //cout<<result<<endl;
            result=max(result,ispalindrome(s,i,i+1));
       }
       return result;
    }
};