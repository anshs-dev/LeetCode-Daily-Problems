class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int num1=0,num2=0,num3=0;
        for(int i=0;i<firstWord.length();i++){
            num1=num1*10+int(firstWord[i]-'a');
        }
        for(int i=0;i<secondWord.length();i++){
            num2=num2*10+int(secondWord[i]-'a');
        }
         for(int i=0;i<targetWord.length();i++){
            num3=num3*10+int(targetWord[i]-'a');
        }
        return num1+num2==num3;
    }
};