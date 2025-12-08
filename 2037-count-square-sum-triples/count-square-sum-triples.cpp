class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<n;i++) for(int j=i+1;j<=n;j++){
            float temp=i*i+j*j;
            temp=sqrt(temp);
            if(temp==(int)temp && temp<=n) count+=2;
        }
        return count;
    }
};