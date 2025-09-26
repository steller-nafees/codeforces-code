//============================================================================
// Codeforces Div. 3 
// C. MEX rose
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: September 25, 2025
//
// Problem Statement:
// You are given an array a of length n and a number k (0 ≤ k ≤ n). 
// In one operation, you can set a_i to any integer value x from the range [0, n].
// Find the minimum number of operations required to satisfy the condition: MEX(a) = k.
// 
// The MEX (Minimum Excluded) of a set is the smallest non-negative integer 
// that does not appear in the set.
//
// Input:
//  - The first line contains t (1 ≤ t ≤ 10^4), number of test cases.
//  - Each test case consists of:
//      • n and k (1 ≤ n ≤ 2⋅10^5, 0 ≤ k ≤ n)
//      • array a of length n (0 ≤ a_i ≤ n)
//
// Output:
//  - For each test case, print the minimum number of operations required.
//
// Constraints:
//  - Sum of n over all test cases ≤ 2*10^5
//  - Time limit: 2 seconds
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
    int n,k ; cin >> n >> k;  
    vi(a,n); int ans = 0;
    INPUT_ARRAY(a,n);

    vector<int> freq(n+1,0);
    for(int x : a) freq[x]++;

 
    int missing = 0;
    for(int i=0; i < k ; i++)
    {
      if(freq[i] == 0)
        missing++;
    }
    int countK = 0; 
    if(k <= n)
      countK = freq[k];
    
    ans = max (missing, countK);
    cout<< ans << endl; 
    
    
    
}

int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

/*
  💡 Solution Logic:
  - For MEX(a) to be exactly k, two conditions must be met:
    1. All numbers in {0, 1, ..., k-1} must be **present**.
    2. The number k must be **absent**.
  - Let M be the count of numbers missing from {0, 1, ..., k-1}. (Required for Presence).
  - Let C_k be the count of k in the array. (Required for Absence).
  - An operation that changes an occurrence of k to a missing number simultaneously satisfies one unit of both requirements.
  - Therefore, the minimum number of operations is the maximum of the two independent counts: max(M, C_k).
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/