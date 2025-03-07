class Solution {
public:
    vector<int> getPrimes(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
    for (int i = 2; i <= n; i++)
        if (isPrime[i]) primes.push_back(i);
    return primes;
}
vector<int> closestPrimes(int left, int right) {
    if (left > right) return {-1, -1};
    int sqrtR = sqrt(right);
    vector<int> basePrimes = getPrimes(sqrtR);
    vector<bool> isPrime(right - left + 1, true);
    if (left == 1) left++;
    for (int p : basePrimes)
        for (int j = max(p * p, (left + p - 1) / p * p); j <= right; j += p)
            isPrime[j - left] = false;
    vector<int> primes;
    for (int i = 0; i < right - left + 1; i++)
        if (isPrime[i]) primes.push_back(left + i);
        int dist=INT_MAX;
        pair<int,int>p={-1,-1};
        for(int i=primes.size()-1;i>0;i--){
            if(primes[i]-primes[i-1]<=dist){
                dist=primes[i]-primes[i-1];
                p={primes[i-1],primes[i]};
            }
        }
    return {p.first,p.second};
}
};