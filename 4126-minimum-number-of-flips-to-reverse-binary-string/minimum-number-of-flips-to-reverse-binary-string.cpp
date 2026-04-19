class Solution {
public:
    int minimumFlips(int n) {
        string a="";
        while(n>0){
            a+=to_string(n%2);
            n/=2;
        }
        cout<<a;
        int count=0;
        string b=a;
        reverse(b.begin(),b.end());
        for(int i=0;i<a.size();i++) if(a[i]!=b[i]) count++;
        return count;
    }
};