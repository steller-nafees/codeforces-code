//============================================================================
// Platform      : Codeforces 
// Problem Title : A. El fucho
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 05, 2025 
//
// Problem Statement:
//   Juan and his friends are going to split themselves into n teams and play a
//   modified double-elimination football tournament consisting of a winners’
//   group and a losers’ group. Initially, all teams are in the winners’ group.
//
//   In each round:
//     • Teams in the winners’ group pair up and play matches.
//       - Winners stay in the winners’ group.
//       - Losers move to the losers’ group in the next round.
//     • Teams in the losers’ group pair up and play matches.
//       - Winners stay in the losers’ group.
//       - Losers are eliminated from the tournament.
//     • If a group has an odd number of teams, one team skips that round.
//
//   This process continues until one team remains in each group. Those two
//   teams then play the final match to determine the overall champion.
//
//   Determine how many total matches are played during the entire tournament.
//   It can be proven that the number of matches is always the same, regardless
//   of match outcomes or pairings.
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 100) — the number of test cases.
//   Each test case contains a single integer n (2 ≤ n ≤ 500) — the number of teams.
//
// Output:
//   For each test case, print the total number of matches played.
//
// Constraints:
//   - 2 ≤ n ≤ 500
//   - 1 ≤ t ≤ 100
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
    int n; cin>>n;

    cout<<2 * (n-1 ) <<endl;
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
  - In a single-elimination tournament with n teams, (n - 1) matches are needed
    to determine a winner (since each match eliminates exactly one team).
  - In this *double-elimination* variant:
      • Each team must lose twice to be fully eliminated.
      • Except for the champion (who never loses), every other team loses twice.
      • Hence, total losses = 2 × (n - 1).
  - Since each match results in exactly one loss, the total number of matches
    equals the total number of losses.
  - Therefore, total matches = 2 × (n - 1).
  - This formula remains constant regardless of pairing or match outcomes.
*/

/*
  Alhamdulillah, problem solved successfully!!
  الحمد لله الذي بنعمته تتم الصالحات
*/
