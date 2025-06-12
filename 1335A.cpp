//============================================================================
// 1335A. Candies and Two Sisters - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts the number of valid ways to distribute candies to two
//              sisters such that both get a positive and unequal number.
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

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        double candie = static_cast<double>(n);
        double r = candie / 2 - 1;

        double ceiling = ceil(r);
        int ceiling_int = static_cast<int>(ceiling);
        cout << ceiling_int << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Given `n` candies, distribute them to two sisters so that:
      1. Both receive **at least 1 candy**
      2. They receive **different** amounts
  - The number of valid distributions is: floor((n - 1) / 2)
  - You used `ceil(n/2 - 1)`, which also works for positive integers ≥ 2
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
