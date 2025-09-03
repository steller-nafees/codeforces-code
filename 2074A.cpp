//============================================================================
// A. Draw a Square (Codeforces 2074A)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given four integers l, r, d, u representing points
//              (-l,0), (r,0), (0,-d), (0,u).
//              Check if these 4 points can form the vertices of a square.
//              If yes, output "YES"; otherwise, "NO".
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

void solve()
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if ((l == r) && (l == d) && (d == u))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
  💡 Solution Logic
  - The points are: L(-l,0), R(r,0), D(0,-d), U(0,u).
  - For them to form a square:
      • The horizontal distances must match → l == r
      • The vertical distances must match   → d == u
      • All four distances must be equal    → l == r == d == u
  - If all are equal → "YES"; else → "NO".
  - Complexity: O(1) per test case.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
