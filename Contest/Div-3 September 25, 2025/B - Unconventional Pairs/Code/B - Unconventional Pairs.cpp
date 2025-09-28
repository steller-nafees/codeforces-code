//============================================================================
// Codeforces Problem: B. Unconventional Pairs
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: September 25, 2025
//
// Problem Statement:
// A popular reality show "Unconventional Pairs" requires participants to be
// paired in an unusual way. Given an even number of participants represented
// by an array of integers a1, a2, ..., an, divide them into exactly n/2 pairs
// such that each participant belongs to exactly one pair.
//
// For a pair (x, y), its difference is defined as |x - y|. The goal is to
// minimize the maximum difference across all pairs.
//
// Input:
//  - The first line contains a single integer t (1 ≤ t ≤ 10^4), the number
//    of test cases.
//  - Each test case consists of:
//      • An even integer n (2 ≤ n ≤ 2*10^5), the length of the array a.
//      • n integers a1, a2, ..., an (−10^9 ≤ ai ≤ 10^9), the elements of the array.
//
// Output:
//  - For each test case, output a single integer: the minimum possible
//    maximum difference between the elements in pairs.
//
// Constraints:
//  - The sum of n across all test cases does not exceed 2*10^5.
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
    int n; cin >> n;
    vl(a,n); ll ans = 0;

    INPUT_ARRAY(a,n);
    SORT_ASC(a);
    for(int i = 0; i<n; i+=2){
        ans = max(ans, a[i+1] - a[i]);
    }

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
  - Sort the array a in non-decreasing order.
  - Pair adjacent elements: (a[0],a[1]), (a[2],a[3]), ..., (a[n-2],a[n-1]).
  - The maximum difference among these pairs is minimized with this strategy.
  - Reasoning: Any other pairing (crossed pairs) would produce a larger maximum difference.
  - Compute the differences for each adjacent pair and output the maximum.
*/
/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
