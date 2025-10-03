//============================================================================
// Platform      : Codeforces 
// Problem Title : 1374A. Required Remainder
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 03, 2025 
//
// Problem Statement:
//   You are given three integers x, y and n. Your task is to find the maximum 
//   integer k such that 0 ≤ k ≤ n that k mod x = y, where mod is the modulo operation.
//   Many programming languages use percent operator % to implement it.
// 
//   In other words, with given x, y, and n you need to find the maximum possible 
//   integer from 0 to n that has the remainder y modulo x.
//
//   You have to answer t independent test cases. It is guaranteed that such k exists 
//   for each test case.
//
// Input:
//   The first line contains one integer t (1 ≤ t ≤ 5⋅10^4) — the number of test cases. 
//   The next t lines contain three integers x, y, and n (2 ≤ x ≤ 10^9; 0 ≤ y < x; y ≤ n ≤ 10^9).
//
// Output:
//   For each test case, print the answer — maximum non-negative integer k 
//   such that 0 ≤ k ≤ n and k mod x = y.
//
// Constraints:
//   - 1 ≤ t ≤ 5⋅10^4
//   - 2 ≤ x ≤ 10^9
//   - 0 ≤ y < x
//   - y ≤ n ≤ 10^9
//   - Time limit: 1 second
//   - Memory limit: 256 MB
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
    ll x,y,n; cin>>x>>y>>n;

    // Compute the largest k ≤ n such that k mod x = y
    ll ans = n - ((n-y) % x);
    cout<<ans<<endl;
}

int main()
{
    FAST_IO;

    int t; cin>>t; 
    while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    //solve();

    return 0;
}

/*
  💡 Solution Logic:
  - We need k such that k mod x = y and k ≤ n.
  - Any number k satisfying this can be expressed as k = x * q + y for some integer q ≥ 0.
  - To maximize k without exceeding n, we solve for q: q = (n - y) / x
  - Then k = x * q + y = n - ((n - y) % x)
  - Output k for each test case.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
