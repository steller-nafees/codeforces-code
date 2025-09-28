
//============================================================================
// 69A. Young Physicist - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given n force vectors applied to a point at the origin (0,0,0),
//              determine whether the body is in equilibrium. The body is in
//              equilibrium if the sum of all x-components, y-components, and
//              z-components of the vectors equals 0.
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
    int n; cin >> n;
    int sumX = 0, sumY = 0, sumZ = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main()
{
    FAST_IO;

    solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Read integer n, the number of force vectors.
  - Initialize sums: sumX, sumY, sumZ = 0.
  - For each vector (x, y, z):
      - Add x to sumX, y to sumY, z to sumZ.
  - After processing all vectors:
      - If sumX == 0, sumY == 0, and sumZ == 0 → the body is in equilibrium → print "YES".
      - Otherwise → print "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
