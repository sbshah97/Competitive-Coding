#include <bits/stdc++.h>
using namespace std;
 
// applying sieve of erastothenes
void sieve(bool primes[], int x) {
    primes[1] = false;
 
    // if a number is prime mark all its multiples
    // as non prime
    for (int i=2; i*i <= x; i++) {
        if (primes[i] == true) {
            for (int j=2; j*i <= x; j++)
                primes[i*j] = false;
        }
    }
}
 
// function that returns numbers of number that have
// n divisors in range from a to b. x is sqrt(b) + 1.
int nDivisors(bool primes[], int x, int a, int b, int n)
{
    // result holds number of numbers having n divisors
    int result = 0;
 
    // vector to hold all the prime numbers between 1
    // ans sqrt(b)
    vector <int> v;
    for (int i = 2; i <= x; i++)
        if (primes[i] == true)
            v.push_back (i);
 
    // Traversing all numbers in given range
    for (int i=a; i<=b; i++)
    {
        // initialising temp as i
        int temp = i;
 
        // total holds the number of divisors of i
        int total = 1;
        int j = 0;
 
        // we need to use that prime numbers that
        // are less than equal to sqrt(temp)
        for (int k = v[j]; k*k <= temp; k = v[++j])
        {
            // holds the exponent of k in prime
            // factorization of i
            int count = 0;
 
            // repeatedly divide temp by k till it is
            // divisble and accordingly increase count
            while (temp%k == 0)
            {
                count++;
                temp = temp/k;
            }
 
            // using the formula  no.of divisors =
            // (e1+1)*(e2+1)....
            total = total*(count+1);
        }
 
        // if temp is not equal to 1 then there is
        // prime number in prime factorization of i
        // greater than sqrt(i)
        if (temp != 1)
            total = total*2;
 
        // if i is a ndvisor number increase result
        if (total == n)
            result++;
    }
    return result;
}
 
// Returns count of numbers in [a..b] having
// n divisors.
int countNDivisors(int a, int b, int n)
{
    int x = sqrt(b) + 1;
 
    // primes[i] = true if i is a prime number
    bool primes[x];
 
    // initialising each number as prime
    memset(primes, true, sizeof(primes));
    sieve(primes, x);
 
    return nDivisors(primes, x, a, b, n);
}
 
// driver code
int main()
{
    int a = 1, b = 7, n = 2;
    cout << countNDivisors(a, b, n);
    return 0;
}