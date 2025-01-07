class Solution {
public:
    long long smallestNumber(long long num) {
       string x="";
       if(num==0)
       return 0;
       if(num<0){
        x=to_string(num);
        sort(x.rbegin(),x.rend());
        return std::stoll(x)*-1;
       }
       else{
        x=to_string(num);
        sort(x.begin(),x.end());
        int left=0;
        if(x[0]=='0'){
            while(x[left]=='0'){
                left++;
            }
        }
        swap(x[0],x[left]);
       }
       return std::stoll(x);
    }
};