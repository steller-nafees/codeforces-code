//============================================================================
// 1669A. Division? - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines the division category of a Codeforces user
//              based on their rating according to the given ranges.
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
        int r;
        cin >> r;

        if (r <= 1399)
        {
            cout << "Division 4" << endl;
        }
        else if (r <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (r <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else
        {
            cout << "Division 1" << endl;
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Input: Number of test cases `t`, followed by `t` ratings.
  - For each rating:
      * If rating ≤ 1399 → Division 4
      * 1400 ≤ rating ≤ 1599 → Division 3
      * 1600 ≤ rating ≤ 1899 → Division 2
      * rating ≥ 1900 → Division 1
  - Direct conditional mapping based on ranges.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
