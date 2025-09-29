//============================================================================
// Platform      : Codeforces 
// Problem Title : 214A - System of Equations
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : September 29, 2025 
//
// Problem Statement:
//   You are given two integers n and m. Count how many pairs of integers (a, b)
//   (where a, b ≥ 0) satisfy the following system of equations:
//
//       a² + b = n
//       a + b² = m
//
// Input:
//   Two integers n and m (1 ≤ n, m ≤ 1000).
//
// Output:
//   Print a single integer — the number of pairs (a, b) that satisfy the system.
//
// Constraints:
//   - 1 ≤ n, m ≤ 1000
//   - Time limit: 2 seconds
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
    int n,m ; cin>>n>>m;

    int count =0; 

    for(int a=0; a*a <= n && a <= m; a++)
    {
        int b = n - a*a;
        if( ( a + b*b ) == m)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    FAST_IO;

    //int t; cin>>t; 
    //while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Iterate over all possible values of a (0 ≤ a ≤ sqrt(n), a ≤ m).
  - For each a, compute b = n - a².
  - Check if the second condition a + b² = m holds.
  - Count the valid pairs (a, b).
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
