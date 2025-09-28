//============================================================================
// Codeforces / Competitive Programming
// B. Cake Collection
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: September 8, 2025
//
// Problem Statement:
// Maple wants to bake cakes for Chocola and Vanilla. She has n magical ovens.
// The i-th oven bakes a[i] cakes every second. Cakes remain in ovens until collected.
//
// At the end of each second, Maple may teleport to any oven (including the current one)
// and collect all accumulated cakes from that oven.
//
// Task:
// Determine the maximum number of cakes Maple can collect in m seconds.
//
// Input:
//  - The first line contains t (1 ≤ t ≤ 1000), the number of test cases.
//  - Each test case consists of:
//      • n (1 ≤ n ≤ 10^5) — number of ovens
//      • m (1 ≤ m ≤ 10^8) — number of seconds
//      • a[1..n] (1 ≤ a[i] ≤ 10^5) — cakes baked per second by each oven
//  - The sum of n over all test cases ≤ 2*10^5
//
// Output:
//  - For each test case, print a single integer: the maximum number of cakes Maple can collect.
//
// Constraints:
//  - Time limit: 1 second
//  - Memory limit: 512 MB
//============================================================================

/*
بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
Start with the name of Allah
*/
#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define INPUT(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define SORT_DESC(a,type) sort(a.begin(), a.end(),greater<type>())

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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    INPUT(a, n);

    SORT_DESC(a, ll);

    ll k = min(n, m); // Use either all ovens or only as many as seconds
    ll ans = 0;
    for(ll i = 0; i < k; i++)
    {
        ans += a[i] * (m - i); // Assign largest time to largest oven
    }
    cout << ans << '\n';
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
  - Each oven contributes its rate multiplied by the last time it is collected.
  - To maximize cakes, assign largest "times" to ovens with highest rates.
  - If m > n, use all ovens and assign the top n times.
  - If n > m, only assign m ovens to the largest times.
  - Formula: sort a descending, sum a[i] * (m-i) for i = 0..min(n,m)-1
*/


/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
