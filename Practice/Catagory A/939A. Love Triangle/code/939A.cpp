//============================================================================
// Platform      : Codeforces 
// Problem Title : 939A. Love Triangle
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 07, 2025 
//
// Problem Statement:
//   There are n planes on Earth, numbered from 1 to n. Each plane i likes
//   another plane f_i (1 ≤ f_i ≤ n, f_i ≠ i). We call a love triangle a
//   situation where plane A likes plane B, plane B likes plane C, and
//   plane C likes plane A.
//
//   You need to determine if there exists any such love triangle.
//
// Input:
//   - The first line contains a single integer n (2 ≤ n ≤ 5000) — the number of planes.
//   - The second line contains n integers f₁, f₂, …, fₙ (1 ≤ fᵢ ≤ n, fᵢ ≠ i).
//
// Output:
//   - Print "YES" if there exists a love triangle.
//   - Otherwise, print "NO".
//
// Constraints:
//   - 2 ≤ n ≤ 5000
//   - 1 ≤ fᵢ ≤ n, fᵢ ≠ i
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
#define INPUT_ARRAY_0(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define INPUT_ARRAY_1(a,n) for(int i = 1; i<=n; i++) cin>>a[i];
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
    vi(f,n+1);
    INPUT_ARRAY_1(f,n);

    for(int i = 1; i<=n; i++)
    {
        int a = f[i];
        int b = f[a];
        int c = f[b];

        if(c == i)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    FAST_IO;

    // int t; cin>>t; 
    // while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Each plane i "likes" plane f[i].
  - We must check if there exists a sequence of three distinct planes (A, B, C)
    such that f[A] = B, f[B] = C, and f[C] = A.
  - Iterate over all planes:
      - For each plane i:
          - Let a = f[i]
          - Let b = f[a]
          - Let c = f[b]
      - If c == i, then a love triangle exists → print "YES".
  - If no such case is found, print "NO".
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
