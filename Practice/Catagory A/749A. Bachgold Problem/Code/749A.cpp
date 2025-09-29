//============================================================================
// Codeforces Problem 749A
// Bachgold Problem
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: September 25, 2025
//
// Problem Statement:
// Given an integer n (n ≥ 2), represent n as a sum of the maximum possible
// number of prime numbers.
//
// Input:
//  - A single integer n (2 ≤ n ≤ 100,000).
//
// Output:
//  - First print an integer m, the maximum number of prime summands.
//  - Then print m prime numbers whose sum is equal to n.
//
// Constraints:
//  - n is guaranteed to be at least 2
//  - Time limit: 1 second
//  - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"NO" : "YES"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a,n) vector<int> a(n);
#define vl(a,n) vector<ll> a(n);
// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

void solve()
{

    
    int n; cin>>n;
    int maxPrime = n/2 ;

    cout<<maxPrime<<endl;

    if(n%2 == 0)
    {
        for(int i = 1; i<=maxPrime; i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i = 1; i<maxPrime; i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
}

int main()
{
    FAST_IO;

    solve();

    return 0;
}

/*
  💡 Solution Logic:
  - To maximize the number of prime summands, we use as many `2`s as possible.
  - If n is even → represent n as n/2 twos.
  - If n is odd → represent n as (n/2 - 1) twos and one three.
  - This guarantees the maximum count of primes, since 2 is the smallest prime.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
