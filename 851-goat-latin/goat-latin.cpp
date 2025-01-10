class Solution {
public:
    string toGoatLatin(string sentence) {
        int count=1;
        stringstream ss(sentence);
        vector<string>word;
        string res="";
        while(ss>>res){
            word.push_back(res);
        }
        string result="";
        for(string x:word){
            if(tolower(x[0])=='a' || tolower(x[0])=='e' || tolower(x[0])=='i' || tolower(x[0])=='o' || tolower(x[0])=='u'){
                result+=x;
                result+="ma";
                result.insert(result.end(),count,'a');
            }
            else{
                string temp=x.substr(1);
                temp+=x[0];
                temp+="ma";
                temp.insert(temp.end(),count,'a');
                result+=temp;
            }
            result+=" ";
            count++;
        }
        result.pop_back();
        return result;
    }
};