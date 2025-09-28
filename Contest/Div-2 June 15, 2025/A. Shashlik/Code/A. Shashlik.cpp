//============================================================================
// Codeforces Div-2 June 12, 2025
// A. Shashlik - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given initial grill temperature `k`, and two types of shashliks
//              (type 1 and 2) that require at least `a` and `b` degrees
//              respectively, and reduce temperature by `x` and `y`, compute
//              the maximum total number of portions that can be cooked.
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
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        
        ll a_por = 0, b_por = 0, count = 0;

        // Greedy approach:
        // Cook the type which reduces temperature less first,
        // or if equal drop, cook the one with smaller required temp first.
        if (x < y || (x == y && a < b))
        {
            if (k >= a)
            {
                a_por = ((k - a) / x) + 1;
                k -= a_por * x;
                count += a_por;
            }
            if (k >= b)
            {
                b_por = ((k - b) / y) + 1;
                count += b_por;
            }
        }
        else
        {
            if (k >= b)
            {
                b_por = ((k - b) / y) + 1;
                k -= b_por * y;
                count += b_por;
            }
            if (k >= a)
            {
                a_por = ((k - a) / x) + 1;
                count += a_por;
            }
        }

        cout << count << "\n";
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case:
    - You have initial grill temperature `k`.
    - Two shashlik types:
      - Type 1 requires temperature ≥ `a`, and decreases temperature by `x`.
      - Type 2 requires temperature ≥ `b`, and decreases temperature by `y`.
    - Greedily cook the shashlik type which reduces the temperature less first,
      or if both drops equal, cook the one with smaller required temperature first.
    - Cook as many portions of the first type as possible, update `k`.
    - Then cook as many portions of the second type as possible.
    - Output the total number of portions cooked.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
