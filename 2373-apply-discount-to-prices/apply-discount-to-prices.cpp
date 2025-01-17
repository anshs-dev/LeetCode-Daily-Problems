class Solution {
public:
    string sum1(string x,int discount){
        long double initial=stoll(x);
        long double after=initial-((initial*discount)/100);
        string temp=to_string(after);
        string result="";
        for(int i=0;i<temp.length();){
        if(temp[i]=='.'){
        int countdown=3;
        while(i<temp.length() && countdown--){
            result+=temp[i];
            i++;
        }
        return result;
        }
        else{
            result+=temp[i];
            i++;
        }
        }
        return result;
    }
    string discountPrices(string sentence, int discount) {
        string result="";
        for(int right=0;right<sentence.length();){
            if(right<sentence.length()-1 && sentence[right]=='$' && isdigit(sentence[right+1]) && (right==0 || sentence[right-1]==' ')){
                result+='$';
                right++;
                string temp="";
                while(right<sentence.length() && isdigit(sentence[right])){
                temp+=sentence[right];
                right++;
                }
                if(sentence[right]==' ' || right==sentence.length())
                result+=sum1(temp,discount);        
                else
                result+=temp;
            }
            else{
                result+=sentence[right];
                right++;
            }
        }
        return result;
    }
};