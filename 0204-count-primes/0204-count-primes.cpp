class Solution {
   static int erat(int n)
{

    int count = 0;
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (primes[i])
        {
            count = count + 1;
            for (int j = i * 2; j < n; j = j + i)
            {
                primes[j] = 0;
            }
        }
    }
    return count;
}
public:
    int countPrimes(int n) {
        return erat(n);
        
    }
};