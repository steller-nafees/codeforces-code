//============================================================================
// 1A. Theatre Square - Codeforces 
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: A rectangular theatre square has size n × m. The square is to
//              be covered with square tiles of size a × a. The task is to
//              determine the minimum number of such tiles required to cover
//              the entire theatre square. Tiles cannot be broken and must
//              fully cover the square (though they may extend beyond edges).
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
    ll n, m, a;
    cin >> n >> m >> a;

    ll tiles_n = (n + a - 1) / a;  // ceil(n / a) using integer math
    ll tiles_m = (m + a - 1) / a;  // ceil(m / a) using integer math

    cout << tiles_n * tiles_m << '\n';
}

int main()
{
    FAST_IO;

    solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Read integers n, m, and a.
  - Compute tiles needed along length: (n + a - 1) / a.
  - Compute tiles needed along width: (m + a - 1) / a.
  - Multiply both values → total tiles required.
  - Print the result.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
