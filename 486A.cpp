//============================================================================
// 486A. Calculating Function - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Computes a specific value using alternating sum pattern based on input n.
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

int main()
{
    FAST_IO;

    ll n;
    cin >> n;

    cout << (n % 2 == 0 ? n / 2 : -(n + 1) / 2) << endl;
    return 0;
}

/*
  ## 💡 Solution Logic
  - According to the problem, define the function as:
      f(n) = n/2   if n is even
      f(n) = -(n+1)/2 if n is odd
  - This pattern alternates signs: -1 +2 -3 +4 ...
  - Using a mathematical formula avoids loops and gives O(1) time.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
