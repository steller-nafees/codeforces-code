//============================================================================
// Codeforces Div-2 June 23, 2025
// A. Race - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines if Bob can choose an integer point (≠ a) such that
//              he will always reach the prize faster than Alice, regardless of
//              whether it appears at point x or point y. The distance is
//              calculated using |c - d|.
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
    cin >> t;

    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;

        bool possible = false;
        for (int b = 1; b <= 100; ++b)
        {
            if (b == a) continue;
            if (abs(b - x) < abs(a - x) && abs(b - y) < abs(a - y))
            {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case, we check all positions `b` from 1 to 100 (excluding a).
  - If there exists a position `b` such that:
        |b - x| < |a - x| AND |b - y| < |a - y|,
    then Bob can guarantee he will beat Alice regardless of the prize position.
  - If found, print "YES"; otherwise, print "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
