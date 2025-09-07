//============================================================================
// Codeforces Round # (Div. 3)
// B. Fun Permutation
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: August 21, 2025
//
// Problem Statement:
// You are given a permutation p of size n. Find a permutation q of size n
// such that gcd(p_i + q_i, p_{i+1} + q_{i+1}) ≥ 3 for all 1 ≤ i < n.
//
// Input:
//  - The first line contains t (1 ≤ t ≤ 10^4), number of test cases.
//  - Each test case consists of:
//      • n (2 ≤ n ≤ 2*10^5)
//      • permutation p of length n (1 ≤ p_i ≤ n)
//
// Output:
//  - For each test case, print a permutation q that satisfies the condition.
//    If multiple answers exist, any is allowed.
//
// Constraints:
//  - Sum of n over all test cases ≤ 2*10^5
//  - Time limit: 2 seconds
//  - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

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
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    // Construct q such that p[i] + q[i] = n+1
    for(int i = 0; i < n; i++)
    {
        q[i] = n + 1 - p[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << q[i] << (i + 1 == n ? '\n' : ' ');
    }
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
  - To satisfy gcd(p_i + q_i, p_{i+1} + q_{i+1}) ≥ 3, we can make all sums equal.
  - Let q[i] = (n + 1) - p[i]. Then p[i] + q[i] = n + 1 for all i.
  - So every adjacent pair has gcd = n + 1 ≥ 3.
  - This guarantees a valid permutation q for any input permutation p.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
