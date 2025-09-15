/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

//============================================================================
// B. Lasers (Codeforces 2148B)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: For each test case, find the minimum number of crossings
//              to travel from (0,0) to (x,y) through a 2D plane with
//              n horizontal and m vertical lasers.
//============================================================================

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

void solve()
{
    // Read n, m, x, and y
    int n, m; long long x, y; cin >> n >> m >> x >> y;

    // Read the horizontal laser coordinates (not needed for logic, but for input stream)
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Read the vertical laser coordinates (not needed for logic, but for input stream)
    vector<ll> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    // A continuous path from (0,0) to (x,y) must cross every horizontal
    // and vertical laser. The total number of crossings is simply the
    // sum of the number of horizontal and vertical lasers.
    cout << n + m << endl;
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
  - Input the number of test cases `t`.
  - For each test case:
      • Read the integers `n`, `m`, `x`, and `y`.
      • Read the `n` horizontal laser y-coordinates and the `m` vertical
        laser x-coordinates to consume the input. These are not required for the calculation.
      • Any continuous path from (0,0) to (x,y) must necessarily cross all
        `n` horizontal and all `m` vertical lasers.
      • Therefore, the minimum number of crossings is simply the total
        number of lasers, `n + m`.
      • The code correctly computes and prints this sum.
  - Complexity: O(n + m) per test case, dominated by reading the laser coordinates.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
