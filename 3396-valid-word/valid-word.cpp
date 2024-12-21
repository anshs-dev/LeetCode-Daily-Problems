class Solution {
public:
    bool isValid(string word) {
      if(word.length()<3)
      return false;
      int isvowel=0,isconso=0,isnum=0;
      for(char x:word){
        if(tolower(x)=='a' || tolower(x)=='e' || tolower(x)=='i' || tolower(x)=='o' || tolower(x)=='u')
        isvowel=1;
        else if(tolower(x)>='a' && tolower(x)<='z')
        isconso=1;
        else if(x>='0' && x<='9')
        isnum=1;
        else
        return false;
      }
      return isvowel==1 && isconso==1;
    }
};