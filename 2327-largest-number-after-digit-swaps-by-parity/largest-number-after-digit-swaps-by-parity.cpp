class Solution {
public:
    int largestInteger(int num) {
        vector<int>even;
        vector<int>odd;
        int temp=num;
        vector<int>result;
        while(temp!=0){
            int rem=temp%10;
            result.insert(result.begin(),1,rem);
            if(temp%2==0)
            even.push_back(rem);
            else
            odd.push_back(rem);
            temp/=10;
        }
        long long res=0;
        int eve=0,oggy=0;
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());
        for(int x:result){
            if(x%2==0){
                res=res*10+even[eve];
                eve++;
            }
            else{
                res=res*10+odd[oggy];
                oggy++;
            }

        }
        return res;
    }
};