class Solution {
public:
    int maximumSwap(int num) {
        string x=to_string(num);
        int right=0;
        while(right<x.length()){
        int max_ele=-1,max_pos=-1;
        for(int i=right+1;i<x.length();i++){
            if(x[i]-'0'>=max_ele){
        max_ele=x[i]-'0';
        max_pos=i;
        }
        }
        if(max_ele>x[right]-'0'){
        swap(x[right],x[max_pos]);
        break;
        }
        right++;
        }
        return stoi(x);
    }
};