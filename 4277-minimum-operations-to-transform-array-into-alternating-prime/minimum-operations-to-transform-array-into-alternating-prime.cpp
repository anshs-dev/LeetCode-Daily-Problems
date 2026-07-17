class Solution {
public:
    int helper(int val, vector<int> &primes){
        auto it=ranges::lower_bound(primes,val);
        //cout<<*it;
        if(it==primes.begin()) return *it-val;
        if(it==primes.end()) return primes.back()-val;
        return *it-val;
    }
    int minOperations(vector<int>& nums) {
        const int N=2e5+1;
        vector<int> isprime(N+1,true);
        isprime[0]=isprime[1]=false;
        for(long long i=2;i*i<=N;i++) if(isprime[i]) for(long long j=i*i;j<=N;j+=i) isprime[j]=false;
        vector<int> primes,nonprimes;
        for(int i=0;i<=N;i++) if(isprime[i]) primes.push_back(i);
        int count=0;
        for(int i=0;i<nums.size();i++) if(i%2==0 && !isprime[nums[i]]) count+=helper(nums[i],primes);
        else if(i%2==1 && isprime[nums[i]]) count+=(nums[i]==2?2:1);
        return count;
    }
};