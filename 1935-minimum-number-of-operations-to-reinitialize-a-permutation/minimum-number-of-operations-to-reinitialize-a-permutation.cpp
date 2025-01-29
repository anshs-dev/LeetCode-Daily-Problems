class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int>num1(n),num2(n);
        int count=0;
        for(int i=0;i<n;i++) num1[i]=i;
        num2=num1;
        do{
            vector<int>temp(n);
            for(int i=0;i<n;i++){
                if(i%2==0)
                    temp[i]=num2[i/2];
                else
                    temp[i]=num2[(n/2)+(i-1)/2];
            }
            count++;
            num2=temp;
        }
        while(num1!=num2);
        return count;
    }
};